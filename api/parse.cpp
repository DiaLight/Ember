//
// Created by DiaLight on 01.09.2022.
//
#include <api/parse.h>
#include <Windows.h>
#include <cstdio>

bool readHandle(HANDLE hFile, Buf &buf) {
  DWORD size = GetFileSize(hFile, NULL);
  buf.prepare(size);
  uint8_t *pos = buf.tail;
  uint8_t *end = pos + size;
  while(pos < end) {
    DWORD read = 0;
    if(!ReadFile(hFile, pos, end - pos, &read, NULL)) break;
    pos += read;
  }
  if(pos != end) return false;
  buf.tail += size;
  return true;
}

bool readFile(Buf &buf, const wchar_t *file) {
  printf("Read %s\n", file);
  HANDLE hFile = CreateFileW(file, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
  if (hFile == INVALID_HANDLE_VALUE) {
    printf("Could not open %s\n", file);
    return false;
  }
  bool res = readHandle(hFile, buf);
  CloseHandle(hFile);
  return res;
}

char *read_line(char *line, size_t &len, const char *end) {
  char *pos = line;
  while(pos < end) {
    char ch = *pos;
    if(ch == '\r' || ch == '\n') break;
    pos++;
  }
  len = pos - line;
  while(true) {
    char ch = *pos;
    if(ch != '\r' && ch != '\n') break;
    pos++;
  }
  return pos;
}

int hex2int(char ch) {
  if(ch < '0') return -1;
  if(ch <= '9') return ch - '0';
  if(ch < 'A') return -1;
  if(ch <= 'F') return ch - 'A' + 10;
  if(ch < 'a') return -1;
  if(ch <= 'f') return ch - 'A' + 10;
  return -1;
}
int dec2int(char ch) {
  if(ch < '0') return -1;
  if(ch <= '9') return ch - '0';
  return -1;
}
bool strneq(const char *s1, const char *s2, size_t len) {
  while(len && *s1) {
    if(*s1++ != *s2++) return false;
    len--;
  }
  return true;
}


bool parse_int32(char *&pos, const char *end, int32_t &out_value) {
  bool neg = false;
  if(*pos == '-') {
    neg = true;
    pos++;
  }

  int32_t value = 0;
  while(pos < end && *pos != ' ') {
    char ch = *pos;
    int d = dec2int(ch);
    if(d == -1) return false;
    value = value * 10 + d;
    pos++;
  }
  if(neg) value = -value;
  out_value = value;
  return true;
}
bool parse_hex32(char *&pos, const char *end, uint32_t &out_value) {
  if((end - pos) < 8) return false;
  uint32_t value = 0;
  for (int i = 0; i < 8; ++i) {
    char ch = pos[7 - i];
    int d = hex2int(ch);
    if(d == -1) return false;
    value |= d << (i * 4);
  }
  pos += 8;
  out_value = value;
  return true;
}