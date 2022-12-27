//
// Created by DiaLight on 27.12.2022.
//

#ifndef EMBER_STATUS_H
#define EMBER_STATUS_H

void printStatus(const char *fmt, ...);
void printStatus(const wchar_t *fmt, ...);
void clearStatus();
void updateStatus();

void showError(const char *fmt, ...);

#endif //EMBER_STATUS_H
