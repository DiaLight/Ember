import pathlib
from .gen_utils import *
from dk2cxx import *


def format_struct_h(
    struct: dk2map.Struct,
    vtable_map: dict[str, dk2map.Global],
    blocks: UserBlocks = None):
  yield format_id_line(struct.id)
  define_name = f"{camel_to_snake(struct.name).upper()}_H"

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
    yield f"#include <dsound.h>"
    yield f"#include <ddraw.h>"
    yield f"#include <d3d.h>"
    complete_types = set()
    ref_types = set()
    if struct.super is not None:
      complete_types.add(struct.super)
    for field in struct.fields:
      collect_types(field.type, complete_types, ref_types, False)
    if struct.vtable:
      for field in struct.vtable.fields:
        collect_types(field.type, complete_types, ref_types, False)
    for glob in struct.functions:
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

  def format_h_struct_head():
    name_suffix = ""
    if struct.super is not None:
      name_suffix = f" : {struct.super.name}"
    yield f"namespace dk2 {{"
    yield f"#pragma pack(push, 1)"
    yield f"{'union' if struct.is_union else 'struct'} {struct.name}{name_suffix} {{"
    yield empty_line
    offs = struct.calc_fields_offs()
    used_names = set()
    for field in struct.fields:
      yield f"/*{offs:-3X}*/ {format_type(field.type, try_get_clean_name(field, offs, used_names))};"
      if not struct.is_union:
        offs += field.type.get_size()
    if not struct.is_union and offs != struct.size:
      raise Exception()
    yield empty_line
    if struct.vtable is not None:
      vtable_glob = vtable_map.get(struct.vtable.id, None)
      if vtable_glob is not None:
        yield f"/*{vtable_glob.va:08X}*/ static void **vftable();"

      def format_vtable(struct: dk2map.Struct, vtable_values, is_super=False):
        if len(struct.vtable.fields) == 0:
          assert struct.vtable.super is not None
          assert struct.vtable.super is struct.super.vtable
        if struct.super is not None:
          yield from format_vtable(struct.super, vtable_values, True)
        yield f"/*---*/ // {'super ' if is_super else ''}{struct.name}"
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
          cmt = "// " if is_super else ""
          suffix = f"  // = {vtable_values[offs // 4]:08X}" if vtable_values else ""
          yield f"/*{offs:-3X}*/ {cmt}virtual {format_function(fun_t, name)};{suffix}"
          if not struct.is_union:
            offs += field.type.get_size()
        if not struct.is_union and offs != struct.vtable.size:
          raise Exception()
      yield from format_vtable(struct, struct.vtable_values)
      yield empty_line
    if struct.functions:
      for glob in struct.functions:
        fun_t = glob.type  # type: dk2map.FunctionType
        name = glob.name
        name = name.replace('::', '_')
        if name.startswith(f"{struct.name}_"):
          name = name[len(struct.name) + 1:]
        name = format_function_name(name)
        yield f"/*{glob.va:08X}*/ {format_function(fun_t, name)};"
      yield empty_line
  yield from map(format_autogen_line, format_h_struct_head())
  yield format_block_line("body_user_code")
  if blocks is not None:
    yield from blocks.body
  else:
    yield f""
    yield f"// user code"
    yield f""
  yield format_end_of_block_line()

  def format_h_struct_tail():
    yield f"}};"
    yield f"#pragma pack(pop)"
    yield f"static_assert(sizeof({struct.name}) == 0x{struct.size:X});"
    yield f"}}  // namespace dk2"
  yield from map(format_autogen_line, format_h_struct_tail())
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
