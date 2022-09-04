import sys
import re

NAMES_MAP_FILE = sys.argv[1]
EXPORTS_MAP_FILE = sys.argv[2]

vtable_re = re.compile("^\?\?_7(\w+)@@6B@$")
idata = (0x0066C000, 0x0066C420)


def filter_sym(va, name, kind):
  if idata[0] <= va < idata[1]:
    return False
  if kind == 'str':
    return False
  if name.startswith('_'):
    return False
  if name.startswith('jpt_'):
    return False
  if name.startswith('def_'):
    return False
  if name.startswith('nullsub_'):
    return False
  if name.startswith('SEH_'):
    return False
  if "@std@" in name:
    return False
  if "EHRegistrationNode" in name:
    return False
  if "type_info" in name:
    return False
  if name in [
    "??2@YAPAXI@Z", "??3@YAXPAX@Z"
  ]:
    return False
  return True


def main():
  symbols = []
  with open(NAMES_MAP_FILE, "r") as f:
    for line in f.readlines():
      line = line.rstrip('\r\n')
      if line.startswith('#'):
        continue
      va, name, kind = line.split(" ", 2)
      symbols.append((int(va, 16), name, kind))
  with open(EXPORTS_MAP_FILE, "w") as f:
    f.write("#va      name\n")
    for va, name, kind in symbols:
      if not filter_sym(va, name, kind):
        continue
      m = vtable_re.match(name)
      if m is not None:
        name = f"?vtable@{m.group(1)}@dk2@@2PAXA"
      name = name.replace(':', '_')
      name = name.replace('<', '_')
      name = name.replace('>', '_')
      f.write("%08X %s\n" % (va, name))


if __name__ == '__main__':
  main()

