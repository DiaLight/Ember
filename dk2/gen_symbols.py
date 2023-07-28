import sys
import os
import pathlib
project_root = pathlib.Path(__file__).parent.parent
sys.path.append(str(project_root / 'mappings'))
import dk2map
from gen.gen_utils import parse_marker, UserBlocks, is_vtable, build_struct_path
from gen.gen_struct_cpp import format_struct_cpp
from gen.gen_struct_h import format_struct_h
from gen.gen_globals_cpp import format_globals_cpp
from gen.gen_globals_h import format_globals_h
from gen.gen_functions_cpp import format_functions_cpp
from gen.gen_functions_h import format_functions_h
from gen.gen_relink_refs_cpp import format_relink_refs_cpp
from gen.gen_relink_refs_h import format_relink_refs_h


def remove_empty_folders(root_dir):
  for path, _, _ in os.walk(root_dir, topdown=False):
    if len(os.listdir(path)) == 0:
      os.rmdir(path)


def gen_structures(
    include_dir: pathlib.Path, source_dir: pathlib.Path,
    structs_map: dict[str, dk2map.Struct],
    vtable_map: dict[str, dk2map.Global]):

  def gen_structures_h():
    # update existing structures
    visited_struct_h = set()
    for file in include_dir.glob("**/*.h"):
      file_path = str(file.relative_to(include_dir)).replace('\\', '/')
      with open(file, 'r') as f:
        lines = f.readlines()
      lines = list(map(str.rstrip, lines))
      id = parse_marker(lines[0], "  id: ")
      if id is None:
        print(f'ignore file with no id {file_path}')
        continue
      blocks = UserBlocks()
      blocks.parse(lines)
      struct = structs_map.get(id, None)
      if struct is None:
        raise Exception(f"unknown structure with id: {id} in file {file_path}. Did the id changed?")
      struct_path = build_struct_path(struct, 'h')
      if struct.id in visited_struct_h:
        print(f'duplicate {struct_path}')
      if not blocks.is_empty():
        print(f'has user code {struct_path}')
      new_lines = list(format_struct_h(struct, vtable_map, blocks))
      if lines != new_lines:
        print(f'update {struct_path}')
        with open(file, 'w') as f:
          for line in new_lines:
            f.write(line)
            f.write("\n")
      visited_struct_h.add(id)
      if file_path != struct_path:
        print(f'rename {file_path} -> {struct_path}')
        new_path = include_dir / struct_path
        new_path.parent.mkdir(parents=True, exist_ok=True)
        file.rename(new_path)
    
    # generate new structures
    for struct in structs_map.values():
      if struct.id not in visited_struct_h:
        struct_path = build_struct_path(struct, 'h')
        print(f'create {struct_path}')
        new_path = include_dir / struct_path
        new_path.parent.mkdir(parents=True, exist_ok=True)
        with open(new_path, 'w') as f:
          for line in format_struct_h(struct, vtable_map):
            f.write(line + "\n")
  gen_structures_h()

  def gen_structures_cpp():
    # update existing structures
    visited_struct_cpp = set()
    for file in source_dir.glob("**/*.cpp"):
      file_path = str(file.relative_to(source_dir)).replace('\\', '/')
      with open(file, 'r') as f:
        lines = f.readlines()
      lines = list(map(str.rstrip, lines))
      id = parse_marker(lines[0], "  id: ")
      if id is None:
        print(f'ignore file with no id {file_path}')
        continue
      blocks = UserBlocks()
      blocks.parse(lines)
      struct = structs_map.get(id, None)
      if struct is None:
        raise Exception(f"unknown structure with id: {id} in file {file_path}. Did the id changed?")
      struct_path = build_struct_path(struct, 'cpp')
      if struct.id in visited_struct_cpp:
        print(f'duplicate {struct_path}')
      if not blocks.is_empty():
        print(f'has user code {struct_path}')
      new_lines = list(format_struct_cpp(struct, vtable_map, blocks))
      if lines != new_lines:
        print(f'update {struct_path}')
        with open(file, 'w') as f:
          for line in new_lines:
            f.write(line)
            f.write("\n")
      visited_struct_cpp.add(id)
      if file_path != struct_path:
        print(f'rename {file_path} -> {struct_path}')
        new_path = source_dir / struct_path
        new_path.parent.mkdir(parents=True, exist_ok=True)
        if new_path.exists():
          print(f' delete exists {struct_path}')
          new_path.unlink()
        file.rename(new_path)

    # generate new structures
    for struct in structs_map.values():
      if struct.id not in visited_struct_cpp:
        struct_path = build_struct_path(struct, 'cpp')
        print(f'create {struct_path}')
        new_path = source_dir / struct_path
        new_path.parent.mkdir(parents=True, exist_ok=True)
        with open(new_path, 'w') as f:
          for line in format_struct_cpp(struct, vtable_map):
            f.write(line + "\n")
  gen_structures_cpp()


def gen_globals(include_dir: pathlib.Path, source_dir: pathlib.Path, globals: list[dk2map.Global]):

  def gen_globals_h():
    file_h = include_dir / f"dk2_globals.h"
    if file_h.exists():
      with open(file_h, 'r') as f:
        lines = f.readlines()
      lines = list(map(str.rstrip, lines))
      blocks = UserBlocks()
      blocks.parse(lines)
      if not blocks.is_empty():
        print(f'has user code {file_h.name}')
      new_lines = list(format_globals_h(globals, blocks))
      if lines != new_lines:
        print(f'update {file_h.name}')
        with open(file_h, 'w') as f:
          for line in new_lines:
            f.write(line)
            f.write("\n")
    else:
      print(f'create {file_h.name}')
      with open(file_h, 'w') as f:
        for line in format_globals_h(globals):
          f.write(line + "\n")
  gen_globals_h()

  def gen_globals_cpp():
    file_cpp = source_dir / f"dk2_globals.cpp"
    if file_cpp.exists():
      with open(file_cpp, 'r') as f:
        lines = f.readlines()
      lines = list(map(str.rstrip, lines))
      blocks = UserBlocks()
      blocks.parse(lines)
      if not blocks.is_empty():
        print(f'has user code {file_cpp.name}')
      new_lines = list(format_globals_cpp(globals, blocks))
      if lines != new_lines:
        print(f'update {file_cpp.name}')
        with open(file_cpp, 'w') as f:
          for line in new_lines:
            f.write(line)
            f.write("\n")
    else:
      print(f'create {file_cpp.name}')
      with open(file_cpp, 'w') as f:
        for line in format_globals_cpp(globals):
          f.write(line + "\n")
  gen_globals_cpp()


def gen_functions(include_dir: pathlib.Path, source_dir: pathlib.Path, globals: list[dk2map.Global]):

  def gen_functions_h():
    file_h = include_dir / f"dk2_functions.h"
    if file_h.exists():
      with open(file_h, 'r') as f:
        lines = f.readlines()
      lines = list(map(str.rstrip, lines))
      blocks = UserBlocks()
      blocks.parse(lines)
      if not blocks.is_empty():
        print(f'has user code {file_h.name}')
      new_lines = list(format_functions_h(globals, blocks))
      if lines != new_lines:
        print(f'update {file_h.name}')
        with open(file_h, 'w') as f:
          for line in new_lines:
            f.write(line)
            f.write("\n")
    else:
      print(f'create {file_h.name}')
      with open(file_h, 'w') as f:
        for line in format_functions_h(globals):
          f.write(line + "\n")
  gen_functions_h()

  def gen_functions_cpp():
    file_cpp = source_dir / f"dk2_functions.cpp"
    if file_cpp.exists():
      with open(file_cpp, 'r') as f:
        lines = f.readlines()
      lines = list(map(str.rstrip, lines))
      blocks = UserBlocks()
      blocks.parse(lines)
      if not blocks.is_empty():
        print(f'has user code {file_cpp.name}')
      new_lines = list(format_functions_cpp(globals, blocks))
      if lines != new_lines:
        print(f'update {file_cpp.name}')
        with open(file_cpp, 'w') as f:
          for line in new_lines:
            f.write(line)
            f.write("\n")
    else:
      print(f'create {file_cpp.name}')
      with open(file_cpp, 'w') as f:
        for line in format_functions_cpp(globals):
          f.write(line + "\n")
  gen_functions_cpp()


def gen_relink_refs(
    include_dir: pathlib.Path, source_dir: pathlib.Path,
    structs: list[dk2map.Struct], globals: list[dk2map.Global]):
  def gen_relink_refs_h():
    file_h = include_dir / f"dk2_relink_refs.h"
    if file_h.exists():
      with open(file_h, 'r') as f:
        lines = f.readlines()
      lines = list(map(str.rstrip, lines))
      blocks = UserBlocks()
      blocks.parse(lines)
      if not blocks.is_empty():
        print(f'has user code {file_h.name}')
      new_lines = list(format_relink_refs_h(structs, globals, blocks))
      if lines != new_lines:
        print(f'update {file_h.name}')
        with open(file_h, 'w') as f:
          for line in new_lines:
            f.write(line)
            f.write("\n")
    else:
      print(f'create {file_h.name}')
      with open(file_h, 'w') as f:
        for line in format_relink_refs_h(structs, globals):
          f.write(line + "\n")
  gen_relink_refs_h()

  def gen_relink_refs_cpp():
    file_cpp = source_dir / f"dk2_relink_refs.cpp"
    if file_cpp.exists():
      with open(file_cpp, 'r') as f:
        lines = f.readlines()
      lines = list(map(str.rstrip, lines))
      blocks = UserBlocks()
      blocks.parse(lines)
      if not blocks.is_empty():
        print(f'has user code {file_cpp.name}')
      new_lines = list(format_relink_refs_cpp(structs, globals, blocks))
      if lines != new_lines:
        print(f'update {file_cpp.name}')
        with open(file_cpp, 'w') as f:
          for line in new_lines:
            f.write(line)
            f.write("\n")
    else:
      print(f'create {file_cpp.name}')
      with open(file_cpp, 'w') as f:
        for line in format_relink_refs_cpp(structs, globals):
          f.write(line + "\n")
  gen_relink_refs_cpp()


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

  source_dir = project_root / 'dk2' / 'symbols'
  source_dir.mkdir(parents=True, exist_ok=True)
  include_dir = project_root / 'dk2' / 'symbols' / 'include'
  include_dir.mkdir(parents=True, exist_ok=True)

  vtable_map = build_vtable_map(globals)
  gen_structures(include_dir, source_dir, structs_map, vtable_map)
  gen_globals(include_dir, source_dir, globals)
  gen_functions(include_dir, source_dir, globals)
  gen_relink_refs(include_dir, source_dir, structs, globals)
  remove_empty_folders(source_dir)

  with open(source_dir / f"sources.cmake", 'w') as f:
    f.write(f"# warning: file was generated by {pathlib.Path(__file__).name}\n")
    f.write("set(SOURCES\n")
    for struct in structs:
      struct_path = build_struct_path(struct, 'cpp')
      f.write(f"        {struct_path}\n")
    f.write(")\n")


if __name__ == '__main__':
  main()
