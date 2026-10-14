#ifndef __CORE2_1EDED00_H__
#define __CORE2_1EDED00_H__

#include "common.h"
#include "freelist.h"

void func_80105410();

typedef struct {
    u8 pad[0x24];
    u32 unk24_22 : 10;
    u32 unk24_16 : 6;
    u32 pad24_9 : 7;
    u32 unk24_6 : 3;
    u32 unk24_0 : 6;
} UNK80105494;

UNK80105494* func_80105494(Actor*);
void func_801054D4(Actor*);
void func_80105634(Actor*);
void func_80105834(Actor*);
void func_801058C4(Actor*, s32, f32, u32);
s32 func_80105998(Actor*, f32); 
s32 func_80105A5C(Actor*);
void func_80105A9C(Actor*, f32);
void func_80105C20();
f32 func_80105AE8(Actor*);
void func_801061D8(Actor*);

#endif
