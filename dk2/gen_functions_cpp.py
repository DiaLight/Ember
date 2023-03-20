import pathlib
from gen_utils import *


def format_functions_cpp(globals: list[dk2map.Global], blocks: UserBlocks = None):
  def format_cpp_head():
    yield format_middle(f"warning: file is managed by {pathlib.Path(__file__).name}")
    yield format_middle(f"you can edit code only in *_user_code blocks")
    yield f"#include <dk2_functions.h>"
    yield empty_line
    yield f"using namespace dk2;"
    yield empty_line
    yield f"#define relink_stub(name) printf(\"[fatal]: stub \"#name\" call\\n\"); ::abort();"
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
    yield f"#pragma optimize( \"\", off )"
    for glob in filter(filter_function_var, globals):
      fun_t = glob.type  # type: dk2map.FunctionType
      suffix = "  // assembly" if fun_t.declspec is dk2map.Declspec.Assembly else ''
      # ret = ''
      # if fun_t.ret.kind is dk2map.TypeKind.Ptr:
      #   ret = ' return NULL; '
      # elif fun_t.ret.kind is dk2map.TypeKind.Bool:
      #   ret = ' return false; '
      # elif fun_t.ret.kind in [
      #   dk2map.TypeKind.Int, dk2map.TypeKind.Float,
      #   dk2map.TypeKind.Char, dk2map.TypeKind.Winapi
      # ]:
      #   ret = ' return 0; '
      name = f"dk2::{format_function_name(glob.name)}"
      ret = f" relink_stub({name}); "
      yield f"/*{glob.va:08X}*/ {format_function(fun_t, name)} {{{ret}}}{suffix}"
    yield empty_line
    yield f"#pragma optimize( \"\", on )"
  yield from map(format_autogen_line, format_cpp_body())
  yield format_block_line("tail_user_code")
  if blocks is not None:
    yield from blocks.tail
  else:
    yield f""
    yield f"// user code"
    yield f""
  yield format_end_of_block_line()

