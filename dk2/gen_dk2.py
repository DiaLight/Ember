import sys
import pathlib
project_root = pathlib.Path(__file__).parent.parent
sys.path.append(str(project_root / 'mappings'))
import dk2map
from gen_utils import parse_marker, UserBlocks, filter_thicall_function_var, format_function_name, is_vtable
from gen_struct_cpp import format_struct_cpp
from gen_struct_h import format_struct_h
from gen_globals_cpp import format_globals_cpp
from gen_globals_h import format_globals_h
from gen_functions_cpp import format_functions_cpp
from gen_functions_h import format_functions_h
from gen_relink_refs_cpp import format_relink_refs_cpp
from gen_relink_refs_h import format_relink_refs_h


def gen_structures(
    include_dir: pathlib.Path, source_dir: pathlib.Path,
    structs_map: dict[str, dk2map.Struct],
    thiscall_map: dict[str, list[dk2map.Global]],
    vtable_map: dict[str, dk2map.Global]):

  def gen_structures_h():
    # update existing structures
    visited_struct_h = set()
    for file in include_dir.glob("*.h"):
      with open(file, 'r') as f:
        lines = f.readlines()
      lines = list(map(str.rstrip, lines))
      id = parse_marker(lines[0], "  id: ")
      if id is None:
        continue
      blocks = UserBlocks()
      blocks.parse(lines)
      struct = structs_map.get(id, None)
      if struct is None:
        raise Exception(f"unknown structure with id: {id} in file {file.name}. Did the id changed?")
      thiscalls = thiscall_map.get(id, [])
      new_lines = list(format_struct_h(struct, thiscalls, vtable_map, blocks))
      if lines != new_lines:
        with open(file, 'w') as f:
          for line in new_lines:
            f.write(line)
            f.write("\n")
      visited_struct_h.add(id)
    
    # generate new structures
    for struct in structs_map.values():
      if struct.id not in visited_struct_h:
        thiscalls = thiscall_map.get(struct.id, [])
        with open(include_dir / f"{struct.name}.h", 'w') as f:
          for line in format_struct_h(struct, thiscalls, vtable_map):
            f.write(line + "\n")
  gen_structures_h()

  def gen_structures_cpp():
    # update existing structures
    visited_struct_cpp = set()
    for file in source_dir.glob("*.cpp"):
      with open(file, 'r') as f:
        lines = f.readlines()
      lines = list(map(str.rstrip, lines))
      id = parse_marker(lines[0], "  id: ")
      if id is None:
        continue
      blocks = UserBlocks()
      blocks.parse(lines)
      struct = structs_map.get(id, None)
      if struct is None:
        raise Exception(f"unknown structure with id: {id} in file {file.name}. Did the id changed?")
      thiscalls = thiscall_map.get(id, [])
      new_lines = list(format_struct_cpp(struct, thiscalls, vtable_map, blocks))
      if lines != new_lines:
        with open(file, 'w') as f:
          for line in new_lines:
            f.write(line)
            f.write("\n")
      visited_struct_cpp.add(id)

    # generate new structures
    for struct in structs_map.values():
      if struct.id not in visited_struct_cpp:
        thiscalls = thiscall_map.get(struct.id, [])
        with open(source_dir / f"{struct.name}.cpp", 'w') as f:
          for line in format_struct_cpp(struct, thiscalls, vtable_map):
            f.write(line + "\n")
  gen_structures_cpp()


def gen_globals(include_dir: pathlib.Path, source_dir: pathlib.Path, globals: list[dk2map.Global]):

  def gen_globals_h():
    globals_h = include_dir / f"dk2_globals.h"
    if globals_h.exists():
      with open(globals_h, 'r') as f:
        lines = f.readlines()
      lines = list(map(str.rstrip, lines))
      blocks = UserBlocks()
      blocks.parse(lines)
      new_lines = list(format_globals_h(globals, blocks))
      if lines != new_lines:
        with open(globals_h, 'w') as f:
          for line in new_lines:
            f.write(line)
            f.write("\n")
    else:
      with open(globals_h, 'w') as f:
        for line in format_globals_h(globals):
          f.write(line + "\n")
  gen_globals_h()

  def gen_globals_cpp():
    globals_cpp = source_dir / f"dk2_globals.cpp"
    if globals_cpp.exists():
      with open(globals_cpp, 'r') as f:
        lines = f.readlines()
      lines = list(map(str.rstrip, lines))
      blocks = UserBlocks()
      blocks.parse(lines)
      new_lines = list(format_globals_cpp(globals, blocks))
      if lines != new_lines:
        with open(globals_cpp, 'w') as f:
          for line in new_lines:
            f.write(line)
            f.write("\n")
    else:
      with open(globals_cpp, 'w') as f:
        for line in format_globals_cpp(globals):
          f.write(line + "\n")
  gen_globals_cpp()


def gen_functions(include_dir: pathlib.Path, source_dir: pathlib.Path, globals: list[dk2map.Global]):

  def gen_functions_h():
    functions_h = include_dir / f"dk2_functions.h"
    if functions_h.exists():
      with open(functions_h, 'r') as f:
        lines = f.readlines()
      lines = list(map(str.rstrip, lines))
      blocks = UserBlocks()
      blocks.parse(lines)
      new_lines = list(format_functions_h(globals, blocks))
      if lines != new_lines:
        with open(functions_h, 'w') as f:
          for line in new_lines:
            f.write(line)
            f.write("\n")
    else:
      with open(functions_h, 'w') as f:
        for line in format_functions_h(globals):
          f.write(line + "\n")
  gen_functions_h()

  def gen_functions_cpp():
    functions_cpp = source_dir / f"dk2_functions.cpp"
    if functions_cpp.exists():
      with open(functions_cpp, 'r') as f:
        lines = f.readlines()
      lines = list(map(str.rstrip, lines))
      blocks = UserBlocks()
      blocks.parse(lines)
      new_lines = list(format_functions_cpp(globals, blocks))
      if lines != new_lines:
        with open(functions_cpp, 'w') as f:
          for line in new_lines:
            f.write(line)
            f.write("\n")
    else:
      with open(functions_cpp, 'w') as f:
        for line in format_functions_cpp(globals):
          f.write(line + "\n")
  gen_functions_cpp()


def gen_relink_refs(
    include_dir: pathlib.Path, source_dir: pathlib.Path,
    globals: list[dk2map.Global],
    struct_members: list[dk2map.Struct, list[dk2map.Global]]):
  def gen_relink_refs_h():
    functions_h = include_dir / f"dk2_relink_refs.h"
    if functions_h.exists():
      with open(functions_h, 'r') as f:
        lines = f.readlines()
      lines = list(map(str.rstrip, lines))
      blocks = UserBlocks()
      blocks.parse(lines)
      new_lines = list(format_relink_refs_h(globals, struct_members, blocks))
      if lines != new_lines:
        with open(functions_h, 'w') as f:
          for line in new_lines:
            f.write(line)
            f.write("\n")
    else:
      with open(functions_h, 'w') as f:
        for line in format_relink_refs_h(globals, struct_members):
          f.write(line + "\n")
  gen_relink_refs_h()

  def gen_relink_refs_cpp():
    functions_cpp = source_dir / f"dk2_relink_refs.cpp"
    if functions_cpp.exists():
      with open(functions_cpp, 'r') as f:
        lines = f.readlines()
      lines = list(map(str.rstrip, lines))
      blocks = UserBlocks()
      blocks.parse(lines)
      new_lines = list(format_relink_refs_cpp(globals, struct_members, blocks))
      if lines != new_lines:
        with open(functions_cpp, 'w') as f:
          for line in new_lines:
            f.write(line)
            f.write("\n")
    else:
      with open(functions_cpp, 'w') as f:
        for line in format_relink_refs_cpp(globals, struct_members):
          f.write(line + "\n")
  gen_relink_refs_cpp()


def build_thiscall_map(structs: list[dk2map.Struct], globals: list[dk2map.Global]) -> dict[str, list[dk2map.Global]]:
  structs_name_map = {struct.name: struct for struct in structs if not struct.name.endswith('_vtbl')}

  def find_struct_from_name(name: str) -> dk2map.Struct:
    name = name.replace('::', '_')
    parts = name.split('_')
    for i in range(len(parts) - 1, 0, -1):  # [len-1, 0)
      cls_name = '_'.join(parts[:i + 1])
      struct = structs_name_map.get(cls_name, None)
      if struct is not None:
        return struct
    return None

  def find_struct_from_type(fun_t: dk2map.FunctionType) -> dk2map.Struct:
    if len(fun_t.args) == 0:
      raise Exception()
    ty = fun_t.args[0]
    if ty.kind is not dk2map.TypeKind.Ptr:
      return None
    ptr_t = ty  # type: dk2map.PtrType
    ty = ptr_t.type
    if ty.kind is not dk2map.TypeKind.Struct:
      return None
    stru_t = ty  # type: dk2map.StructType
    return stru_t.struct

  thiscall_map = {}  # type: dict[str, list[dk2map.Global]]
  for glob in filter(filter_thicall_function_var, globals):
    fun_t = glob.type  # type: dk2map.FunctionType
    assert fun_t.declspec is dk2map.Declspec.Thiscall
    name = format_function_name(glob.name)
    s_by_type = find_struct_from_type(fun_t)
    s_by_name = find_struct_from_name(name)
    if s_by_name is None and s_by_type is None:
      print(f"skip thiscall fun {glob.name}  struct not found")
      continue
    if (
        s_by_name is not None and
        s_by_type is not None and
        s_by_name is not s_by_type
    ):
      print(f"skip thiscall fun {glob.name}  {s_by_name.name} != {s_by_type.name}")
      continue
    struct = s_by_type if s_by_type is not None else s_by_name
    thiscalls = thiscall_map.setdefault(struct.id, [])
    thiscalls.append(glob)
  return thiscall_map


def build_vtable_map(globals: list[dk2map.Global]) -> dict[str, dk2map.Global]:
  vtable_map = {}
  for glob in filter(is_vtable, globals):
    stru_t = glob.type  # type: dk2map.StructType
    vtable_map[stru_t.struct.id] = glob
  return vtable_map


def main():
  with open(project_root / 'mappings' / 'v170.map', 'r') as f:
    structs, globals = dk2map.deserialize(map(lambda l: l.rstrip(), f.readlines()))
  structs = list(filter(lambda s: not s.name.endswith('_vtbl'), structs))
  structs_map = {struct.id: struct for struct in structs}
  globals.sort(key=lambda g: g.va)

  source_dir = project_root / 'dk2'
  source_dir.mkdir(parents=True, exist_ok=True)
  include_dir = project_root / 'dk2' / 'include'
  include_dir.mkdir(parents=True, exist_ok=True)

  (source_dir / 'dk2').mkdir(parents=True, exist_ok=True)
  thiscall_map = build_thiscall_map(structs, globals)
  vtable_map = build_vtable_map(globals)
  gen_structures(include_dir / 'dk2', source_dir / 'dk2', structs_map, thiscall_map, vtable_map)
  gen_globals(include_dir, source_dir, globals)
  gen_functions(include_dir, source_dir, globals)
  struct_members = [ (structs_map[id], globs) for id, globs in thiscall_map.items()]
  gen_relink_refs(include_dir, source_dir, globals, struct_members)

  with open(source_dir / f"sources.cmake", 'w') as f:
    f.write(f"# warning: file was generated by {pathlib.Path(__file__).name}\n")
    f.write("set(SOURCES\n")
    for struct in structs:
      f.write(f"        dk2/{struct.name}.cpp\n")
    f.write(")\n")


if __name__ == '__main__':
  main()
