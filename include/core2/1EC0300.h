#ifndef __CORE2_1EC0300_H__
#define __CORE2_1EC0300_H__

#include "common.h"

void string_concat(char*, char*);
void string_concatChar(char*, char);
void func_800E6AFC(char*, char);
// int to string
void string_IToA(char*, s32);
//strcmp
s32 string_compare(const char* str1, const char* str2);
//Copy Text
void string_copy(char* target, char* source);
//Get Text Length
s32 string_length(char*);
u32* func_800E71B8(s32*);

#endif
