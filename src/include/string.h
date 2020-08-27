#ifndef MAY_STRING_H
#define MAY_STRING_H
#include <stdint.h>

extern int strlen(const char *str);
extern char* strcpy(char* dest, char* src);
int8_t strcmp(const char* src1_, const char* src2_);
char* strchr(const char* str, const uint8_t ch);
char* strrchr(const char* str, const uint8_t ch);
uint32_t strchrs(const char* str, const uint8_t ch);
char* strcat(char* dest, const char* src);
extern int memcmp(const void* src1_, const void* src2_, uint32_t size);

#endif