#include "core2/1EC0300.h"

extern char* D_80125DC0;

//strcat
void string_concat(char* dst, char* src) {
    while (*(dst) != '\0') {
        dst++;
    }
    while (*(src) != '\0') {
        *(dst++) = *(src++);
    }
    *(dst) = '\0';
}

//strcatc
void string_concatChar(char* dst, char src) 
{
    while (*(dst) != '\0') 
	{
        dst++;
    }
    *(dst++) = src;
    *(dst) = '\0';
}

void func_800E6A90(char* arg0, char* arg1)
{

	while (*arg1 != '\0')
	{
		func_800E6AFC(arg0, *(arg1++));
		string_concat(arg0, &D_80125DC0);
	}
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E6AFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E6B7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E6BAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E6CA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E6DB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E6DD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E6F7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E6FEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E705C.s")

//string compare
s32 string_compare(const char* str1, const char* str2) {
    while (*str1 && *str2 && *str1 == *str2) {
        str1++;
        str2++;
    }

    if (*str1 == *str2)
        return 0;
    else if (*str1 == '\0' || *str1 < *str2)
        return -1;
    else
        return 1;
}

//string copy
void string_copy(char* dst, char* src) {
    while (*(src) != '\0') 
	{
        *(dst++) = *(src++);
    }
    *(dst) = 0;
}

//string length
s32 string_length(char* str) {
    char v0;
    s32 len;

    len = 0;
    v0 = *(str++);
    while (v0 != '\0') {
        len++;
        v0 = *(str++);
    }
    return len;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E71B8.s")

//strcmptok
s32 func_800E71EC(char *str1, char* str2, char* str3)
{

    while (*str2 == *str3) 
	{
        str2++;
        str3++;
        if ((*str2 == '\0' || *str2 == *str1) && (*str3 == '\0' || *str3 == *str1)){
            return 1;
        }
    }
    return 0;
}

//strtok
char* func_800E7254(char* str, const char* delim) 
{
    while (*delim != '\0' && *delim != *str) {
        delim++;
    }
    if (*delim == *str) {
        delim++;
    }
    return delim;
}


//strcpyToTok
void string_copyToToken(char* delim, char* target, char* str) 
{
	//Copy str into target until we reach end terminator or the delimiter
    while ((*str != '\0') && (*str != *delim))
	{
        *target = *str;
		str++;
		target++;
    }
    *target = '\0';
}

//strtoupper
void string_toUpper(char* str) {
    char* ret = str;
    while (*ret != '\0') 
	{
        if ((*ret >= 0x61) && (*ret < 0x7B)) 
		{
            *ret -= 0x20;
        }
        ret++;
    }
    str = ret;
}
//strtolower
void string_toLower(char* str)
{
	char* ret = str;
	while (*ret != '\0')
	{
		if ((*ret >= 0x41) && (*ret < 0x5B))
		{
			*ret += 0x20;
		}
		ret++;
	}
	str = ret;
}

void func_800E7368(char* arg0, s32 arg1)
{
	s32 var_s0;
	s32 var_v0;

	var_s0 = 0x1F;
	while (var_s0 >= 0)
	{
		if ((1 << var_s0) & arg1)
		{
			var_v0 = '1';
		}
		else
		{
			var_v0 = '0';
		}
		string_concatChar(arg0, var_v0);
		var_s0 -= 1;
	}
}

void func_800E73D4(char* arg0)
{
	*arg0 = '\0';
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E73DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E7428.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E7480.s")
