#include "common.h"

//strcat
void func_800E6A10(char* dst, char* src) {
    while (*(dst) != '\0') {
        dst++;
    }
    while (*(src) != '\0') {
        *(dst++) = *(src++);
    }
    *(dst) = 0;
}

//strcatc
void func_800E6A58(char* dst, char src) {
    while (*(dst) != '\0') {
        dst++;
    }
    *(dst++) = src;
    *(dst) = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E6A90.s")

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
s32 func_800E70DC(const char* str1, const char* str2) {
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
void func_800E715C(char* dst, char* src) {
    while (*(src) != '\0') {
        *(dst++) = *(src++);
    }
    *(dst) = 0;
}

//string length
s32 func_800E7188(char* str) {
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
s32 func_800E71EC(char *str1, char* str2, char* str3){
    while (*str2 == *str3) {
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
void func_800E729C(char* arg0, char* arg1, char* arg2) {
    while ((*arg2 != '\0') && (*arg2 != *arg0)) {
        *arg1 = *arg2;
        arg2++;
        arg1++;
    }
    *arg1 = '\0';
}

//strtoupper
void func_800E72E0(char* str) {
    char* ret = str;
    while (*ret != '\0') {
        if ((*ret >= 0x61) && (*ret < 0x7B)) {
            *ret -= 0x20;
        }
        ret++;
    }
    str = ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E7324.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E7368.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E73D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E73DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E7428.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EC0300/func_800E7480.s")
