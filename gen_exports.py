import sys
import pathlib
project_root = pathlib.Path(__file__).parent
sys.path.append(str(project_root / 'mappings'))
import dk2map

NAMES_MAP_FILE = sys.argv[1]
EXPORTS_MAP_FILE = sys.argv[2]

idata = (0x0066C000, 0x0066C420)


def filter_sym(glob: dk2map.Global):
  if idata[0] <= glob.va < idata[1]:
    return False
  if glob.name.startswith('_'):
    return False
  if glob.name.startswith('jpt_'):
    return False
  if glob.name.startswith('def_'):
    return False
  if glob.name.startswith('nullsub_'):
    return False
  if glob.name.startswith('SEH_'):
    return False
  if "@std@" in glob.name:
    return False
  if "EHRegistrationNode" in glob.name:
    return False
  if "type_info" in glob.name:
    return False
  if glob.name in [
    "??2@YAPAXI@Z", "??3@YAXPAX@Z"
  ]:
    return False
  return True


def main():
  with open(NAMES_MAP_FILE, 'r') as f:
    structs, globals = dk2map.deserialize(map(lambda l: l.rstrip(), f.readlines()))

  with open(EXPORTS_MAP_FILE, "w") as f:
    f.write("#va      name\n")
    for glob in globals:
      if not filter_sym(glob):
        continue
      name = glob.name
      if name.endswith('_vftable'):
        name = name[:-len('_vftable')]
        name = f"?vtable@{name}@dk2@@2PAXA"
      name = name.replace('::', '_').replace(':', '_')
      name = name.replace('<', '_')
      name = name.replace('>', '_')
      f.write("%08X %s\n" % (glob.va, name))


if __name__ == '__main__':
  main()

