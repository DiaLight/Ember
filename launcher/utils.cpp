//
// Created by DiaLight on 27.12.2022.
//
#include <utils.h>
#include <Windows.h>
#include <codecvt>
#include <sstream>

std::wstring utf8ToUtf16(const std::string& utf8Str) {
  try {
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> conv;
    return conv.from_bytes(utf8Str);
  } catch(...) {
    std::wstringstream wss;
//    wss << L"failed to convert len=" << utf8Str.size();
//    for (int i = 0; i < utf8Str.length(); ++i) {
//      wss << " " << hex8(utf8Str[i]);
//    }
//    wss << " ";
    for (int i = 0; i < utf8Str.length(); ++i) {
      wss << (char) utf8Str[i];
    }
    return wss.str();
  }
}
std::string utf8_encode(const std::wstring &wstr) {
  if(wstr.empty()) return std::string();
  int size_needed = WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), NULL, 0, NULL, NULL);
  std::string strTo(size_needed, 0);
  WideCharToMultiByte(CP_UTF8, 0, &wstr[0], (int)wstr.size(), &strTo[0], size_needed, NULL, NULL);
  return strTo;
}

bool dirExists(const wchar_t *path) {
  DWORD ftyp = GetFileAttributesW(path);
  if (ftyp == INVALID_FILE_ATTRIBUTES) return false;
  if (ftyp & FILE_ATTRIBUTE_DIRECTORY) return true;
  return false;
}
size_t fileSize(LPCWSTR pszFilename) {
  HANDLE hFile = CreateFileW(pszFilename, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, 0, NULL);
  if(hFile == INVALID_HANDLE_VALUE) return 0;
  DWORD size = GetFileSize(hFile, NULL);
  CloseHandle(hFile);
  return size;
}

bool fileExist(LPCWSTR pszFilename) {
  DWORD dwAttrib = GetFileAttributesW(pszFilename);
  if(dwAttrib & FILE_ATTRIBUTE_DEVICE) return false;
  if(dwAttrib & FILE_ATTRIBUTE_DIRECTORY) return false;
  return true;
}
