import pathlib
from .gen_utils import *
from dk2cxx import *


def format_struct_cpp(
    struct: dk2map.Struct,
    vtable_map: dict[str, dk2map.Global],
    blocks: UserBlocks = None):
  yield format_id_line(struct.id)

  def format_cpp_head():
    yield format_middle(f"warning: file is managed by {pathlib.Path(__file__).name}")
    yield format_middle(f"you can edit code only in *_user_code blocks")
    yield f"#include <{build_struct_path(struct, 'h')}>"
    yield f"#include <dk2_globals.h>"
    yield empty_line
    yield f"using namespace dk2;"
    yield empty_line
    yield f"#define relink_stub(name) printf(\"[fatal]: stub \"#name\" call\\n\"); ::abort();"
    yield empty_line
  yield from map(format_autogen_line, format_cpp_head())
  yield format_block_line("body_user_code")
  if blocks is not None:
    yield from blocks.body
  else:
    yield f""
    yield f"// user code"
    yield f""
  yield format_end_of_block_line()

  def format_cpp_body():
    yield f"#pragma optimize( \"\", off )"
    if struct.vtable is not None:
      yield f"// virtual functions"
      offs = struct.vtable.calc_fields_offs()
      for field in struct.vtable.fields:
        assert field.type.kind == dk2map.TypeKind.Ptr
        ptr_t = field.type  # type: dk2map.PtrType
        assert ptr_t.type.kind == dk2map.TypeKind.Function
        fun_t = ptr_t.type  # type: dk2map.FunctionType
        name = field.name
        if '::' in name:
          name = name[name.index('::') + 2:]
        name = f"v_{name}"

        suffix = "  // assembly" if fun_t.declspec is dk2map.Declspec.Assembly else ''
        name = f"{struct.name}::{format_function_name(name)}"
        ret = f" relink_stub({name}); "
        yield f"/*{offs:-3X}*/ {format_function(fun_t, name)} {{{ret}}}{suffix}"
        offs += field.type.get_size()
      yield empty_line
      vtable_glob = vtable_map.get(struct.vtable.id, None)
      if vtable_glob is not None:
        yield f"/*{vtable_glob.va:08X}*/ void **{struct.name}::vftable() {{ return dk2::{vtable_glob.name}; }}"
    if struct.functions:
      yield f"// member functions"
      for glob in struct.functions:
        fun_t = glob.type  # type: dk2map.FunctionType
        name = glob.name
        name = name.replace('::', '_')
        if name.startswith(f"{struct.name}_"):
          name = name[len(struct.name) + 1:]
        name = format_function_name(name)

        suffix = "  // assembly" if fun_t.declspec is dk2map.Declspec.Assembly else ''
        name = f"{struct.name}::{name}"
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
