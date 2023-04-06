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


def format_declspec(decl: dk2map.Declspec):
  if decl is dk2map.Declspec.Cdecl:
    return "__cdecl"
  if decl is dk2map.Declspec.Cdecl_Varargs:
    return "__cdecl"
  if decl is dk2map.Declspec.Assembly:
    return "__cdecl"
  if decl is dk2map.Declspec.Stdcall:
    return "__stdcall"
  if decl is dk2map.Declspec.Fastcall:
    return "__fastcall"
  if decl is dk2map.Declspec.Thiscall:
    return "__thiscall"
  raise Exception()


def format_type(ty: dk2map.Type, name: str = None, is_ptr=False, is_const=False):
  if ty.kind is dk2map.TypeKind.Int:
    int_t = ty  # type: dk2map.IntType
    prefix = "" if int_t.signed else "u"
    if name:
      return f"{prefix}int{int_t.size * 8}_t {name}"
    return f"{prefix}int{int_t.size * 8}_t"
  if ty.kind is dk2map.TypeKind.Ptr:
    ptr_t = ty  # type: dk2map.PtrType
    name = f'*{name}' if name else '*'
    prefix = 'const ' if is_const and not is_ptr else ''
    return f"{prefix}{format_type(ptr_t.type, name, True, ptr_t.is_const)}"
  if ty.kind is dk2map.TypeKind.Float:
    flt_t = ty  # type: dk2map.FloatType
    if flt_t.size == 4:
      prefix = 'const ' if is_const and is_ptr else ''
      suffix = f" {name}" if name else ''
      return f"{prefix}float{suffix}"
    if flt_t.size == 8:
      prefix = 'const ' if is_const and is_ptr else ''
      suffix = f" {name}" if name else ''
      return f"{prefix}double{suffix}"
    raise Exception()
  if ty.kind is dk2map.TypeKind.Bool:
    prefix = 'const ' if is_const and is_ptr else ''
    suffix = f" {name}" if name else ''
    return f"{prefix}bool{suffix}"
  if ty.kind is dk2map.TypeKind.Char:
    chr_t = ty  # type: dk2map.CharType
    if chr_t.size == 1:
      prefix = 'const ' if is_const and is_ptr else ''
      suffix = f" {name}" if name else ''
      return f"{prefix}char{suffix}"
    if chr_t.size == 2:
      prefix = 'const ' if is_const and is_ptr else ''
      suffix = f" {name}" if name else ''
      return f"{prefix}wchar_t{suffix}"
    raise Exception()
  if ty.kind is dk2map.TypeKind.Void:
    prefix = 'const ' if is_const and is_ptr else ''
    suffix = f" {name}" if name else ''
    return f"{prefix}void{suffix}"
  if ty.kind is dk2map.TypeKind.Winapi:
    win_t = ty  # type: dk2map.WinapiType
    if name:
      return f"{win_t.name} {name}"
    return win_t.name
  if ty.kind is dk2map.TypeKind.Struct:
    stru_t = ty  # type: dk2map.StructType
    if name:
      return f"{stru_t.struct.name} {name}"
    return stru_t.struct.name
  if ty.kind is dk2map.TypeKind.Function:
    fun_t = ty  # type: dk2map.FunctionType
    args = [format_type(arg) for arg in fun_t.args]
    if fun_t.declspec == dk2map.Declspec.Cdecl_Varargs:
      args.append('...')
    assert is_ptr
    assert name
    # prefix = 'const ' if is_const and is_ptr else ''
    return f"{format_type(fun_t.ret)} ({format_declspec(fun_t.declspec)} {name})({', '.join(args)})"
  if ty.kind is dk2map.TypeKind.Array:
    arr_t = ty  # type: dk2map.ArrayType
    prefix = 'const ' if is_const and is_ptr else ''
    suffix = f"{name}" if name else ''
    return f"{prefix}{format_type(arr_t.type, f'{suffix}[{arr_t.count}]')}"
  raise Exception()


def format_function(ty: dk2map.FunctionType, name: str = None):
  args = [format_type(arg) for arg in ty.args]
  if ty.declspec == dk2map.Declspec.Cdecl_Varargs:
    args.append('...')
  if ty.declspec == dk2map.Declspec.Thiscall:
    args = args[1:]
  elif ty.declspec in [
    dk2map.Declspec.Stdcall, dk2map.Declspec.Cdecl,
    dk2map.Declspec.Cdecl_Varargs, dk2map.Declspec.Fastcall,
    dk2map.Declspec.Assembly
  ]:
    pass
  else:
    raise Exception([name, ty.declspec])
  if ty.declspec not in [dk2map.Declspec.Stdcall, dk2map.Declspec.Thiscall]:
    name = f"{format_declspec(ty.declspec)} {name}"
  return f"{format_type(ty.ret, name)}({', '.join(args)})"


def collect_types(ty: dk2map.Type, complete_types, ref_types, is_ptr=False):
  if ty.kind is dk2map.TypeKind.Ptr:
    ptr_t = ty  # type: dk2map.PtrType
    collect_types(ptr_t.type, complete_types, ref_types, True)
    return
  if ty.kind is dk2map.TypeKind.Struct:
    stru_t = ty  # type: dk2map.StructType
    if is_ptr:
      ref_types.add(stru_t.struct.name)
    else:
      complete_types.add(stru_t.struct.name)
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


def filter_function_var(glob: dk2map.Global):
  if glob.type.kind is not dk2map.TypeKind.Function:
    return False
  fun_t = glob.type  # type: dk2map.FunctionType
  return fun_t.declspec is not dk2map.Declspec.Thiscall


def filter_thicall_function_var(glob: dk2map.Global):
  if glob.type.kind is not dk2map.TypeKind.Function:
    return False
  fun_t = glob.type  # type: dk2map.FunctionType
  return fun_t.declspec is dk2map.Declspec.Thiscall


def format_function_name(name: str) -> str:
  # ?_ValidateExecute@
  name = name.replace('::', '_')
  if name[0] == '?':
    print(name)
    name = name[1:name.index('@')]
  if name[0].isdigit():
    name = f"fun_{name}"
  return name


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

