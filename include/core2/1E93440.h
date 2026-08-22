#ifndef __CORE2_1E93440_H__
#define __CORE2_1E93440_H__

#include "common.h"
#include "core2/1E8DFA0.h"
#include "overlays/ba/assets.h"

typedef struct {
    u8 pad0[4];
    u8 unk4;
    u8 pad5[0xBF];
    s16 unkC4;
    s16 unkC6;
    s16 unkC8[3];
} unkStruct800BAA60;

s32 func_800BBCB8(f32[3], f32[3], f32, s32, s32*);
void func_800BA1D0(s32, f32*, f32*, s32);
void func_800BA22C(s32, s32);
void func_800BA3FC(s32, AssetId);
void func_800BA450(s32, s32, s32, s32, s32, s32, s32);
void func_800BA4D0(s32, s32);
void func_800BA544(s32, void*);
void func_800BA568(s32, s16);
void func_800BA5A8(s32, s32);
void func_800BA5D0(s32, s16);
void func_800BA660(s32, s32, s16);
void func_800BA670(s32, s32);
void func_800BA6B0(s32, s16, s16, s16, s16, s16, s16);
void func_800BA714(s32, s32, s32);
void func_800BA75C(s32, f32*);
void func_800BA77C(s32, s32, s16, s16);
void func_800BA7C4(s32, f32, f32);
void func_800BA7FC(s32, f32, f32);
void func_800BA930(s32, s16, s16, s16, s16, s16, s16);
void func_800BA994(s32, s16, s16, s16, s16, s16, s16);
void func_800BAA60(unkStruct800BAA60*, f32*, s16, s16);
s32 func_800BABB8(s32, f32[3], f32[3], f32, s32[]);

#endif // __CORE2_1E93440_H__
