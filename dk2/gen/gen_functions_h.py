import pathlib
from .gen_utils import *
from dk2cxx import *


def format_functions_h(globals: list[dk2map.Global], blocks: UserBlocks = None):
  define_name = f"DK2_FUNCTIONS_H"

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
    yield f"#include <dsound.h>"
    yield f"#include <d3d.h>"
    yield f"#include <xmmintrin.h>"
    yield empty_line
    complete_types = set()
    ref_types = set()
    for glob in filter(filter_function_var, globals):
      collect_types(glob.type, complete_types, ref_types, False)
    for complete_struct in sorted(complete_types, key=lambda s: s.name):
      yield f"#include <{build_struct_path(complete_struct, 'h')}>"
      if complete_struct.name in ref_types:
        ref_types.remove(complete_struct.name)
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
    for glob in filter(filter_function_var, globals):
      fun_t = glob.type  # type: dk2map.FunctionType
      suffix = "  // assembly" if fun_t.declspec is dk2map.Declspec.Assembly else ''
      name = format_function_name(glob.name)
      yield f"/*{glob.va:08X}*/ {format_function(fun_t, name)};{suffix}"
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

