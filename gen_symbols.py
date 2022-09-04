import sys

MAP_FILE = sys.argv[1]
ASM_FILE = sys.argv[2]


def main():
  symbols = []
  with open(MAP_FILE, "r") as f:
    for line in f.readlines():
      line = line.rstrip('\r\n')
      if line.startswith('#'):
        continue
      va, name = line.split(" ", 1)
      symbols.append((int(va, 16), name))
  with open(ASM_FILE, "w") as f:
    f.write(".386\n")
    f.write(".MODEL flat, syscall\n")
    f.write("\n")
    for va, name in symbols:
      f.write(f"PUBLIC {name}\n")
    f.write("\n")
    f.write(".CODE\n")
    f.write("\n")
    for va, name in symbols:
      f.write(f"{name} PROC\n")
      f.write("    mov EAX, %08Xh\n" % va)
      f.write("    jmp EAX\n")
      f.write(f"{name} ENDP\n")
      f.write("\n")
    f.write("END\n")
    f.write("\n")


if __name__ == '__main__':
  main()

