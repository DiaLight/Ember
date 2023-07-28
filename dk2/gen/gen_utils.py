import re
import dk2map

AUTO_OFFS = 60
empty_line = "// " + "-" * (AUTO_OFFS - 5)


def camel_to_snake(name):
  name = re.sub('(.)([A-Z][a-z]+)', r'\1_\2', name)
  return re.sub('([a-z0-9])([A-Z])', r'\1_\2', name).lower()


def format_autogen_line(line):
  has_comment = "//" in line
  gap_size = max((AUTO_OFFS - 2) - len(line), 0)
  if has_comment:
    if gap_size > 2:
      gap_size -= 2
      gap = "  " + ("-" * gap_size)
    else:
      gap = " " * gap_size
  else:
    if gap_size > 5:
      gap_size -= 5
      gap = "  // " + ("-" * gap_size)
    else:
      gap = " " * gap_size
  return line + gap + "  /* auto */"


def format_mark_line(mark):
  gap_size = max((AUTO_OFFS - 3 - 2 - 2 - 2) - len(mark), 0)
  prefix_gap = "-" * 15
  suffix_gap = "-" * (gap_size - len(prefix_gap))
  return "// " + prefix_gap + "  " + mark + "  " + suffix_gap + "  /* auto */"


def format_middle(mark):
  gap_size = max((AUTO_OFFS - 3 - 2 - 2 - 2) - len(mark), 0)
  prefix_gap = "-" * (gap_size // 2)
  suffix_gap = "-" * (gap_size - len(prefix_gap))
  return "// " + prefix_gap + "  " + mark + "  " + suffix_gap


def format_middle_line(mark):
  return format_middle(mark) + "  /* auto */"


def format_id_line(id_):
  return format_middle_line("id: " + id_)


def format_block_line(name):
  return format_mark_line("block: " + name)


def format_end_of_block_line():
  return format_mark_line("end_of_block")


def collect_types(ty: dk2map.Type, complete_types: set, ref_types, is_ptr=False):
  if ty.kind is dk2map.TypeKind.Ptr:
    ptr_t = ty  # type: dk2map.PtrType
    collect_types(ptr_t.type, complete_types, ref_types, True)
    return
  if ty.kind is dk2map.TypeKind.Struct:
    stru_t = ty  # type: dk2map.StructType
    if is_ptr:
      ref_types.add(stru_t.struct.name)
    else:
      complete_types.add(stru_t.struct)
    return
  if ty.kind is dk2map.TypeKind.Function:
    fun_t = ty  # type: dk2map.FunctionType
    collect_types(fun_t.ret, complete_types, ref_types, False)
    for arg in fun_t.args:
      collect_types(arg, complete_types, ref_types, False)
    return
  if ty.kind is dk2map.TypeKind.Array:
    arr_t = ty  # type: dk2map.ArrayType
    collect_types(arr_t.type, complete_types, ref_types, False)
    return


def try_get_clean_name(field: dk2map.Field, offs: int, used_names: set):
  name = field.name
  if name == f"field_{offs:X}":
    return f"f{offs:X}"
  used_names.add(name)
  prefix = f"f{offs:X}_"
  if not name.startswith(prefix):
    return field.name
  if len(name) == len(prefix):
    return field.name
  name = name[len(prefix):]
  if name[0].isdigit():
    name = '_' + name
  if name in ['gap', 'obj']:
    name = f"{name}_{offs:X}"
  elif name in used_names:
    name = f"{name}_{offs:X}"
  used_names.add(name)
  return name


def parse_marker(line: str, marker: str):
  try:
    idx = line.index(marker)
    start_idx = idx + len(marker)
    end_idx = line.index('  ', start_idx)
    return line[start_idx:end_idx]
  except ValueError:
    return None


def parse_blocks(lines: list[str], blocks_map: dict[str, list[str]]):
  selected_list = None  # type: list[str]
  for line in lines:
    name = parse_marker(line, "  block: ")
    if name is not None:
      if selected_list is not None:
        raise Exception()
      selected_list = blocks_map[name]
      continue
    if "  end_of_block  " in line:
      if selected_list is None:
        raise Exception()
      selected_list = None
      continue
    if selected_list is not None:
      selected_list.append(line)
  if selected_list is not None:
    raise Exception()


class UserBlocks:

  def __init__(self):
    self.head = []  # type: list[str]
    self.body = []  # type: list[str]
    self.tail = []  # type: list[str]

  def parse(self, lines: list[str]):
    parse_blocks(lines, {
      "head_user_code": self.head,
      "body_user_code": self.body,
      "tail_user_code": self.tail,
    })

  def is_empty(self):
    if self.head and self.head != ['', '// user code', '']:
      return False
    if self.body and self.body != ['', '// user code', '']:
      return False
    if self.tail and self.tail != ['', '// user code', '']:
      return False
    return True


def filter_function_var(glob: dk2map.Global):
  if glob.type.kind is not dk2map.TypeKind.Function:
    return False
  fun_t = glob.type  # type: dk2map.FunctionType
  return fun_t.declspec is not dk2map.Declspec.Thiscall


def is_vtable(glob: dk2map.Global):
  if glob.type.kind is dk2map.TypeKind.Struct:
    stru_t = glob.type  # type: dk2map.StructType
    if stru_t.struct.name.endswith('_vtbl'):
      return True
  return False


def filter_global_var(glob: dk2map.Global):
  if glob.type.kind is dk2map.TypeKind.Function:
    return False
  return True


def build_struct_path(struct: dk2map.Struct, ext: str) -> str:
  if struct.path is None:
    return f'dk2/{struct.name}.{ext}'
  return f'{struct.path}/{struct.name}.{ext}'

