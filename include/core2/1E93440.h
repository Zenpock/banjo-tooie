#ifndef __CORE2_1E93440_H__
#define __CORE2_1E93440_H__

#include "common.h"
#include "core2/1E8DFA0.h"

typedef struct unkStruct800BA5BC {
    u8  pad[0x78];
    f32 unk78;
    f32 unk7C;
}unkStruct800BA5BC;

typedef struct {
    u8  pad0[0x5];
    u8 unk5;
}unkStruct800BA6B0;
typedef struct {
    u8 pad[0x9A];
    s16 unk9A;
    s16 unk9C;
}unkStruct800BA7C4;
typedef struct {
    u8 pad[0x9E];
    s16 unk9E;
    s16 unkA0;
}unkStruct800BA7FC;
typedef struct {
    u8 pad[0xa2];
    s16 unkA2;
    s16 unkA4;
} unkStruct800BA8F8;
typedef struct {
    u8 pad0[7];
    u8 unk7;
    u8 pad2[0x84];
    s32 unk8C;
    s32 unk90;    
} unkStruct800BA28C;
typedef struct {
    u8 pad[0xa8];
    u16 unkA8;
} unkStruct800BA54C;
typedef struct {
    u8  pad[0x8C];
    s32 unk8C;
    s32 unk90;
} unkStruct800BA198;
typedef struct {
    u8 pad[0xc0];
    s32 unkC0;
} unkStruct800BA544;
typedef struct {
    u8 pad[0xae];
    s16 unkAE;
} unkstruct800BA568;
typedef struct {
    u8 pad[0x88];
    s32 unk88;
    u8 pad1[0xb];
    s16 unk98;
} unkStruct800BA660;
typedef struct {
    u8  pad0[2];
    u16 unk2;
    u8  pad1[6];
    u8  unkA;
} unkStruct800BA670;
typedef struct {
    u8 pad[5];
    s8 unk5;
    u8 pad1[0x22];
    s16 unk28;
    s16 unk2A;
} unkStruct800BA714;
typedef struct {
    u8 pad[5];
    s8 unk5;
    u8 pad1[0x22];
    s16 unk28;
    s16 unk2A;
    s16 unk2C;
    s16 unk2E;
} unkStruct800BA730;
typedef struct {
    u8 pad[0x20];
    f32 unk20;
    u8 pad2[0x30];
    f32 unk54;
    f32 unk58;
} unkStruct800BA894;
typedef struct {
    u8 pad[4];
    s8 unk4;
} unkStruct800BA930;
typedef struct {
    u8  pad0[4];
    s8 unk4;
    u8  pad1[0xBF];
    s16 unkC4;
    s16 unkC6;
    s16 unkC8;
    s16 unkCA;
    s16 unkCC;
    s16 unkCE;
} unkStruct800BA994;
typedef struct {
    u8 pad[7];
    s8 unk7;
    u8 pad1[0x19];
    f32 unk24;
} unkStruct800BABA0;
typedef struct {
    u8 pad[0x83];
    s8 unk83;
} unkStruct800BA4B0;
typedef struct {
    u8 pad[0xaa];
    s16 unkAA;
    u8 pad1[14];
    s32 unkBC;
} unkStruct800BA4B8;
typedef struct {
    u8 pad[0xb0];
    f32 unkB0;
} unkStruct800BA4C4;
typedef struct {
    u8 pad[0xb4];
    f32 unkB4;
    f32 unkB8;
} unkStruct800BA554;
typedef struct {
    u8 pad[0x18];
    f32 unk18;
    f32 unk1C;
} unkStruct800BA594;
typedef struct {
    u8 pad[0x84];
    s16 unk84;
    s16 unk86;
}unkStruct800BA5B0;
typedef struct {
    u8 pad[0x5c];
    f32 unk5C;
} unkStruct800BAB54;

s32 func_800B4790(s32);    
f32 func_800136E4(f32);   
s32 func_800F2EA0(s32);         
s32 func_800F2EBC(s32);   
f32 func_800DC178(f32, f32);     
s32 func_800EFA6C(s32, s16, s16, s16);
s32 func_800BBCB8(f32[3], f32[3], f32, s32, s32*);
s32 func_800EE940(s32);   
void func_800BA22C(s32, s32);
s32 func_800EE814(s32); 
s32 func_800EFA6C(s32, s16, s16, s16);
void func_800BA3FC(s32, s32);
void func_800BA450(s32, s16, s16, s16, s32, s32, s32);

s32 func_800BABB8(s32, f32[3], f32[3], f32, s32[]);

#endif // __CORE2_1E93440_H__
