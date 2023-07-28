import dk2map


def format_declspec(decl: dk2map.Declspec):
  if decl is dk2map.Declspec.Cdecl:
    return "__cdecl"
  if decl is dk2map.Declspec.Cdecl_Varargs:
    return "__cdecl"
  if decl is dk2map.Declspec.Assembly:
    return "__cdecl"
  if decl is dk2map.Declspec.Stdcall:
    return "__stdcall"
  if decl is dk2map.Declspec.Fastcall:
    return "__fastcall"
  if decl is dk2map.Declspec.Thiscall:
    return "__thiscall"
  raise Exception()


def format_type(ty: dk2map.Type, name: str = None, is_ptr=False, is_const=False):
  if ty.kind is dk2map.TypeKind.Int:
    int_t = ty  # type: dk2map.IntType
    prefix = "" if int_t.signed else "u"
    if name:
      return f"{prefix}int{int_t.size * 8}_t {name}"
    return f"{prefix}int{int_t.size * 8}_t"
  if ty.kind is dk2map.TypeKind.Ptr:
    ptr_t = ty  # type: dk2map.PtrType
    name = f'*{name}' if name else '*'
    prefix = 'const ' if is_const and not is_ptr else ''
    return f"{prefix}{format_type(ptr_t.type, name, True, ptr_t.is_const)}"
  if ty.kind is dk2map.TypeKind.Float:
    flt_t = ty  # type: dk2map.FloatType
    if flt_t.size == 4:
      prefix = 'const ' if is_const and is_ptr else ''
      suffix = f" {name}" if name else ''
      return f"{prefix}float{suffix}"
    if flt_t.size == 8:
      prefix = 'const ' if is_const and is_ptr else ''
      suffix = f" {name}" if name else ''
      return f"{prefix}double{suffix}"
    raise Exception()
  if ty.kind is dk2map.TypeKind.Bool:
    prefix = 'const ' if is_const and is_ptr else ''
    suffix = f" {name}" if name else ''
    return f"{prefix}bool{suffix}"
  if ty.kind is dk2map.TypeKind.Char:
    chr_t = ty  # type: dk2map.CharType
    if chr_t.size == 1:
      prefix = 'const ' if is_const and is_ptr else ''
      suffix = f" {name}" if name else ''
      return f"{prefix}char{suffix}"
    if chr_t.size == 2:
      prefix = 'const ' if is_const and is_ptr else ''
      suffix = f" {name}" if name else ''
      return f"{prefix}wchar_t{suffix}"
    raise Exception()
  if ty.kind is dk2map.TypeKind.Void:
    prefix = 'const ' if is_const and is_ptr else ''
    suffix = f" {name}" if name else ''
    return f"{prefix}void{suffix}"
  if ty.kind is dk2map.TypeKind.Winapi:
    win_t = ty  # type: dk2map.WinapiType
    if name:
      return f"{win_t.name} {name}"
    return win_t.name
  if ty.kind is dk2map.TypeKind.Struct:
    stru_t = ty  # type: dk2map.StructType
    if name:
      return f"{stru_t.struct.name} {name}"
    return stru_t.struct.name
  if ty.kind is dk2map.TypeKind.Function:
    fun_t = ty  # type: dk2map.FunctionType
    args = [format_type(arg) for arg in fun_t.args]
    if fun_t.declspec == dk2map.Declspec.Cdecl_Varargs:
      args.append('...')
    assert is_ptr
    assert name
    # prefix = 'const ' if is_const and is_ptr else ''
    return f"{format_type(fun_t.ret)} ({format_declspec(fun_t.declspec)} {name})({', '.join(args)})"
  if ty.kind is dk2map.TypeKind.Array:
    arr_t = ty  # type: dk2map.ArrayType
    prefix = 'const ' if is_const and is_ptr else ''
    suffix = f"{name}" if name else ''
    return f"{prefix}{format_type(arr_t.type, f'{suffix}[{arr_t.count}]')}"
  raise Exception()


def format_function(ty: dk2map.FunctionType, name: str = None):
  args = [format_type(arg) for arg in ty.args]
  if ty.declspec == dk2map.Declspec.Cdecl_Varargs:
    args.append('...')
  if ty.declspec == dk2map.Declspec.Thiscall:
    args = args[1:]
  elif ty.declspec in [
    dk2map.Declspec.Stdcall, dk2map.Declspec.Cdecl,
    dk2map.Declspec.Cdecl_Varargs, dk2map.Declspec.Fastcall,
    dk2map.Declspec.Assembly
  ]:
    pass
  else:
    raise Exception([name, ty.declspec])
  if ty.declspec not in [dk2map.Declspec.Stdcall, dk2map.Declspec.Thiscall]:
    name = f"{format_declspec(ty.declspec)} {name}"
  return f"{format_type(ty.ret, name)}({', '.join(args)})"


def format_function_name(name: str) -> str:
  # ?_ValidateExecute@
  name = name.replace('::', '_')
  if name[0] == '?':
    print(name)
    name = name[1:name.index('@')]
  if name[0].isdigit():
    name = f"fun_{name}"
  return name


def filter_thicall_function_var(glob: dk2map.Global):
  if glob.type.kind is not dk2map.TypeKind.Function:
    return False
  fun_t = glob.type  # type: dk2map.FunctionType
  return fun_t.declspec is dk2map.Declspec.Thiscall
