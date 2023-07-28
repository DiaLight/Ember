import pathlib
from .gen_utils import *
from dk2cxx import *


def format_globals_cpp(globals: list[dk2map.Global], blocks: UserBlocks = None):
  def format_cpp_head():
    yield format_middle(f"warning: file is managed by {pathlib.Path(__file__).name}")
    yield format_middle(f"you can edit code only in *_user_code blocks")
    yield f"#include <dk2_globals.h>"
    yield empty_line
    yield f"using namespace dk2;"
    yield empty_line
  yield from map(format_autogen_line, format_cpp_head())
  yield format_block_line("head_user_code")
  if blocks is not None:
    yield from blocks.head
  else:
    yield f""
    yield f"// user code"
    yield f""
  yield format_end_of_block_line()

  def format_cpp_body():
    for glob in filter(filter_global_var, globals):
      glob_type = glob.type
      if is_vtable(glob):
        stru_t = glob.type  # type: dk2map.StructType
        glob_type = dk2map.ArrayType(dk2map.PtrType(dk2map.VoidType()), stru_t.struct.size // 4)
      name = glob.name.replace('::', '_')
      yield f"/*--------*/ relink_glob {format_type(glob_type, '_' + name)};"
      if glob_type.kind is dk2map.TypeKind.Array:
        dk2_name = f'(&dk2::{name})'
      else:
        dk2_name = f'&dk2::{name}'
      yield f"/*{glob.va:08X}*/ {format_type(glob_type, dk2_name)} = {'_' + name};"
  yield from map(format_autogen_line, format_cpp_body())
  yield format_block_line("tail_user_code")
  if blocks is not None:
    yield from blocks.tail
  else:
    yield f""
    yield f"// user code"
    yield f""
  yield format_end_of_block_line()

