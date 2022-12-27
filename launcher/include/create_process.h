//
// Created by DiaLight on 27.12.2022.
//

#ifndef EMBER_CREATE_PROCESS_H
#define EMBER_CREATE_PROCESS_H

#include <Windows.h>

bool CreateProcess_runAndWait(const wchar_t *cmd, const wchar_t *dir, DWORD &lastError, DWORD &exitCode);

#endif //EMBER_CREATE_PROCESS_H
