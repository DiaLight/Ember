//
// Created by DiaLight on 22.01.2023.
//
#include <asm/patch_parseCommandLine.h>
#include <api.h>
#include <dk2_structures.h>
#include <gog_cfg.h>

using namespace gog;


typedef int (__cdecl *parse_command_line_t)(int argc, const char **argv);
typedef HKEY (__fastcall *set_bump_mapping_enabled_t)(void *_this, void *edi, DWORD value);

parse_command_line_t asm_jumpBack_parseCommandLine = nullptr;
set_bump_mapping_enabled_t asm_set_bump_mapping_enabled = nullptr;
void *asm_unk_obj = nullptr;
dk2::MyResources *asm_resources = nullptr;

int __cdecl asm_proxy_parseCommandLine(int argc, const char **argv) {
  asm_resources->f1738_video_settings.cmd_flag_32BITTEXTURES = 1;
  asm_resources->f1738_video_settings.zbuffer_bitnes = 32;
  asm_resources->f1738_video_settings.display_bitnes = 32;
  if (cfg::iBumpmap) {
    asm_set_bump_mapping_enabled(asm_unk_obj, NULL, 1);
  }

//    __asm {
//      jmp jumpBack_parseCommandLine;  // JUMPOUT(0x5A63B0);
//    }
  return asm_jumpBack_parseCommandLine(argc, argv);
}

void gog::patch_parseCommandLine() {
  //  VirtualProtect((LPVOID)0x5A5FAD, 4u, 0x40u, &fdwReason);
  //  MEMORY[0x5A5FAD] = (char *)proxy_parseCommandLine - 5922737;
  //  VirtualProtect((LPVOID)0x5A5FAD, 4u, fdwReason, &fdwReason);

  asm_unk_obj = (void **) (dk2_base + (0x00759A78 - dk2_virtual_base));
  asm_set_bump_mapping_enabled = (set_bump_mapping_enabled_t) (dk2_base + (0x00566860 - dk2_virtual_base));
  // .data:00758340 ?instance@MyResources@dk2@@0V12@A MyResources <?>
  asm_resources = (dk2::MyResources *) (dk2_base + (0x00758340 - dk2_virtual_base));

  // .text:005A5FAC    call  parse_command_line
  DWORD oldProtect;
  auto pParseCommandLine = (uint32_t *) (dk2_base + (0x005A5FAC + 1 - dk2_virtual_base));
  VirtualProtect((LPVOID) pParseCommandLine, sizeof(void *), PAGE_EXECUTE_READWRITE, &oldProtect);
  asm_jumpBack_parseCommandLine = (parse_command_line_t) (((uint8_t *) pParseCommandLine + 4) + *pParseCommandLine);
  *pParseCommandLine = ((uint8_t *) asm_proxy_parseCommandLine) - ((uint8_t *) pParseCommandLine + 4);
  VirtualProtect((LPVOID) pParseCommandLine, sizeof(void *), oldProtect, &oldProtect);
}
