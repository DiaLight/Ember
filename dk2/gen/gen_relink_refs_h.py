import pathlib
from .gen_utils import *


def format_relink_refs_h(
    structs: list[dk2map.Struct], globals: list[dk2map.Global],
    blocks: UserBlocks = None):
  define_name = f"DK2_RELINK_REFS_H"

  def format_h_head():
    yield format_middle(f"warning: file is managed by {pathlib.Path(__file__).name}")
    yield format_middle(f"you can edit code only in *_user_code blocks")
    yield empty_line
    yield f"#ifndef {define_name}"
    yield f"#define {define_name}"
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
    return
    yield
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

