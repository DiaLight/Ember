import sys

MAP_FILE = sys.argv[1]
DEF_FILE = sys.argv[2]


def main():
  with open(DEF_FILE, "w") as of:
    of.write("LIBRARY dk2\n")
    of.write("EXPORTS\n")
    with open(MAP_FILE, "r") as f:
      for line in f.readlines():
        line = line.rstrip('\r\n')
        if line.startswith('#'):
          continue
        va, name = line.split(" ", 1)
        of.write("%s\n" % name)


if __name__ == '__main__':
  main()
