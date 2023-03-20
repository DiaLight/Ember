import pathlib
from gen_utils import *


def format_globals_h(globals: list[dk2map.Global], blocks: UserBlocks = None):
  define_name = f"DK2_GLOBALS_H"

  def format_h_head():
    yield format_middle(f"warning: file is managed by {pathlib.Path(__file__).name}")
    yield format_middle(f"you can edit code only in *_user_code blocks")
    yield empty_line
    yield f"#ifndef {define_name}"
    yield f"#define {define_name}"
    yield empty_line
    yield f"#include <cstdint>"
    yield f"#include <cstdio>"
    yield f"#include <dinput.h>"
    yield f"#include <ddraw.h>"
    yield f"#include <d3d.h>"
    yield f"#include <xmmintrin.h>"
    yield empty_line
    complete_types = set()
    ref_types = set()
    for glob in filter(filter_global_var, globals):
      if is_vtable(glob):
        continue
      collect_types(glob.type, complete_types, ref_types, False)
    for name in sorted(complete_types):
      yield f"#include <dk2/{name}.h>"
      if name in ref_types:
        ref_types.remove(name)
    if ref_types:
      yield empty_line
      yield f"namespace dk2 {{"
      for name in sorted(ref_types):
        yield f"  struct {name};"
      yield f"}}  // namespace dk2"
    yield empty_line
  yield from map(format_autogen_line, format_h_head())
  yield format_block_line("head_user_code")
  if blocks is not None:
    yield from blocks.head
  else:
    yield f""
    yield f"// user code"
    yield f""
  yield format_end_of_block_line()

  def format_h_body():
    yield f"namespace dk2 {{"
    for glob in filter(filter_global_var, globals):
      glob_type = glob.type
      if is_vtable(glob):
        stru_t = glob.type  # type: dk2map.StructType
        glob_type = dk2map.ArrayType(dk2map.PtrType(dk2map.VoidType()), stru_t.struct.size // 4)
      name = glob.name.replace('::', '_')
      if glob_type.kind is dk2map.TypeKind.Array:
        name = f"(&{name})"
      else:
        name = f"&{name}"
      yield f"/*{glob.va:08X}*/ extern {format_type(glob_type, name)};"
    yield f"}}  // namespace dk2"
  yield from map(format_autogen_line, format_h_body())
  yield format_block_line("tail_user_code")
  if blocks is not None:
    yield from blocks.tail
  else:
    yield f""
    yield f"// user code"
    yield f""
  yield format_end_of_block_line()

  def format_h_tail():
    yield f"#endif //{define_name}"
    yield empty_line
  yield from map(format_autogen_line, format_h_tail())
