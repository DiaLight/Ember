import pathlib
from .gen_utils import *
from dk2cxx import *


def format_relink_refs_cpp(
    structs: list[dk2map.Struct], globals: list[dk2map.Global],
    blocks: UserBlocks = None):
  def format_cpp_head():
    yield format_middle(f"warning: file is managed by {pathlib.Path(__file__).name}")
    yield format_middle(f"you can edit code only in *_user_code blocks")
    yield f"#include <dk2_relink_refs.h>"
    yield f"#include <dk2_globals.h>"
    yield f"#include <dk2_functions.h>"
    # yield f"using namespace dk2;"
    # yield empty_line
    complete_types = set()
    for struct in structs:
      complete_types.add(struct)
    for complete_struct in sorted(complete_types, key=lambda s: s.name):
      yield f"#include <{build_struct_path(complete_struct, 'h')}>"
    yield f"#include <cstdint>"
    yield f"#include <cstdio>"
    yield f"#include <dinput.h>"
    yield f"#include <ddraw.h>"
    yield f"#include <d3d.h>"
    yield f"#include <xmmintrin.h>"
    yield empty_line
    yield "struct stub {};"
    yield "typedef void (stub::* funptr_t) ();"
    yield empty_line
    yield "struct entry_t {"
    yield "  uint32_t rva;"
    yield "  union {"
    yield "    funptr_t fptr;"
    yield "    void *ptr;"
    yield "  };"
    yield "  const char *name;"
    yield "  entry_t(uint32_t rva, void *ptr, const char *name) : rva(rva), ptr(ptr), name(name) {}"
    yield "  entry_t(uint32_t rva, funptr_t ptr, const char *name) : rva(rva), fptr(ptr), name(name) {}"
    yield "};"
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
    yield f"entry_t global_relink_refs[] = {{"
    for glob in filter(filter_global_var, globals):
      name = glob.name.replace('::', '_')
      yield f"  {{ 0x{glob.va:08X}, &dk2::{name}, \"{name}\" }},"
    yield f"}};  // global_relink_refs[]"
    yield empty_line
    yield f"entry_t function_relink_refs[] = {{"
    for glob in filter(filter_function_var, globals):
      fun_t = glob.type  # type: dk2map.FunctionType
      name = format_function_name(glob.name)
      yield f"  {{ 0x{glob.va:08X}, (void *) &dk2::{name}, \"{name}\" }},"
    yield f"}};  // function_relink_refs[]"
    yield empty_line
    yield f"entry_t thiscall_function_relink_refs[] = {{"
    for struct in structs:
      for glob in struct.functions:
        fun_t = glob.type  # type: dk2map.FunctionType
        name = glob.name
        name = name.replace('::', '_')
        if name.startswith(f"{struct.name}_"):
          name = name[len(struct.name)+1:]
        name = format_function_name(name)
        yield f"  {{ 0x{glob.va:08X}, (funptr_t) &dk2::{struct.name}::{name}, \"{struct.name}::{name}\" }},"
    yield f"}};  // thiscall_function_relink_refs[]"
    yield empty_line
  yield from map(format_autogen_line, format_cpp_body())
  yield format_block_line("tail_user_code")
  if blocks is not None:
    yield from blocks.tail
  else:
    yield f""
    yield f"// user code"
    yield f""
  yield format_end_of_block_line()

