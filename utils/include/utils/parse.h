//
// Created by DiaLight on 01.09.2022.
//

#ifndef EMBER_PARSE_H
#define EMBER_PARSE_H

#include <string>
#include <cstdint>
#include <string>

bool readFile(std::string &buf, const wchar_t *file);
char *read_line(char *line, size_t &len, const char *end);

int hex2int(char ch);
int dec2int(char ch);
bool strneq(const char *s1, const char *s2, size_t len);
bool parse_int32(char *&pos, const char *end, int32_t &out_value);
bool parse_hex32(char *&pos, const char *end, uint32_t &out_value);

#endif //EMBER_PARSE_H
