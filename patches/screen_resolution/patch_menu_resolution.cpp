//
// Created by DiaLight on 15.12.2022.
//
#include <dk2.h>
#include <patches.h>
#include <cstdio>
#include <stdex.h>


bool patch::patch_menu_resolution() {
  std::string arg = api::findArgValue("menu_resolution");
  if(arg.empty()) return true;
  std::vector<std::string> spl = split(arg, 'x');
  if(spl.size() != 2) return false;
  std::string err;
  int width, height;
  if(!parse_int(spl[0], width, err)) return false;
  if(!parse_int(spl[1], height, err)) return false;

// .text:0052F21B  push 480  ; dwHeight
// .text:0052F220  push 640  ; dwWidth
  uint32_t *pHeight = (uint32_t *) (dk2_base + (0x0052F21B + 1 - dk2_virtual_base));
  uint32_t *pWidth = (uint32_t *) (dk2_base + (0x0052F220 + 1 - dk2_virtual_base));
  DWORD oldProtect;
  if(!VirtualProtect(pWidth, sizeof(uint32_t), PAGE_EXECUTE_READWRITE, &oldProtect)) return false;
  *pWidth = width; *pHeight = height;

//  *pWidth = 1024; *pHeight = 768;
//  *pWidth = 1280; *pHeight = 1024;
//  *pWidth = 1600; *pHeight = 1200;

//  *pWidth = 1440; *pHeight = 900;
//  *pWidth = 1920; *pHeight = 1440;
  VirtualProtect(pWidth, sizeof(uint32_t), oldProtect, NULL);
  return true;
}
