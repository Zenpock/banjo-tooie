#include "core2/1E93440.h"
#include "core2/1EC8070.h"

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E93440/func_800B9B50.s")

s32 func_800BA198(unkStruct800BA198* arg0) {
    s32 temp_v1;
    if (arg0 != NULL) {
        temp_v1 = arg0->unk90;
        if (temp_v1 != 0) {
            return (s32) (temp_v1 - arg0->unk8C) / 60;
        }
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E93440/func_800BA1D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E93440/func_800BA22C.s")

int func_800BA28C(unkStruct800BA28C* arg0) {
    return (arg0->unk90 - arg0->unk8C) / 60 == 0 && arg0->unk7 == 2;
}

s32 func_800BA2C4(void) {
    heap_free();
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E93440/func_800BA2E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E93440/func_800BA3FC.s")

void func_800BA450(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_800EFA6C(arg0 + 0x34, arg1, arg2, (s16) arg3);
    func_800EFA6C(arg0 + 0x3A, arg4, arg5, (s16) arg6);
}

void func_800BA4B0(unkStruct800BA4B0* arg0, s32 arg1) {
    arg0->unk83 = arg1;
}

void func_800BA4B8(unkStruct800BA4B8* arg0, s32 arg1, s32 arg2) {
    arg0->unkAA = arg1;
    arg0->unkBC = arg2;
}

void func_800BA4C4(unkStruct800BA4C4* arg0, f32 arg1) {
    arg0->unkB0 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E93440/func_800BA4D0.s")

void func_800BA544(unkStruct800BA544* arg0, s32 arg1) {
    arg0->unkC0 = arg1;
}

void func_800BA54C(unkStruct800BA54C* arg0, s32 arg1) {
    arg0->unkA8 = arg1;
}

void func_800BA554(unkStruct800BA554* arg0, f32 arg1, f32 arg2) {
    arg0->unkB4 = arg1;
    arg0->unkB8 = arg2;
}

void func_800BA568(unkstruct800BA568* arg0, s16 arg1) {
    arg0->unkAE = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E93440/func_800BA574.s")

void func_800BA594(unkStruct800BA594* arg0, f32 arg1, f32 arg2) {
    arg0->unk18 = arg1;
    arg0->unk1C = arg2;
}

void func_800BA5A8(s16* arg0, s32 arg1) {
    *arg0 = arg1;
}

void func_800BA5B0(unkStruct800BA5B0* arg0, s32 arg1, s32 arg2) {
    arg0->unk84 = arg1;
    arg0->unk86 = arg2;
}

void func_800BA5BC(unkStruct800BA5BC* arg0, f32 arg1, f32 arg2) {
    arg0->unk78 = arg1;
    arg0->unk7C = arg2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E93440/func_800BA5D0.s")

void func_800BA610(s32 arg0, s16 arg1, s16 arg2) {
    func_800EFA6C(arg0 + 0x34, 0, arg1, 0);
    func_800EFA6C(arg0 + 0x3A, 0, arg2, 0);
}

void func_800BA660(unkStruct800BA660* arg0, s32 arg1, s16 arg2) {
    arg0->unk88 = arg1;
    arg0->unk98 = arg2;
}

void func_800BA670(unkStruct800BA670* arg0, s32 arg1) {
    if (arg1 != arg0->unk2) {
        arg0->unk2 = arg1;
        arg0->unkA = func_800D738C(arg1 & 0xFFFF);
    }
}

void func_800BA6B0(unkStruct800BA6B0* arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6) {
arg0->unk5 = 0;
    func_800EFA6C((u8*)arg0 + 0x28, arg1, arg2, arg3);
    func_800EFA6C((u8*)arg0 + 0x2E, arg4, arg5, arg6);
}

void func_800BA714(unkStruct800BA714* arg0, s16 arg1, s16 arg2) {
    arg0->unk5 = 1;
    arg0->unk28 = arg1;
    arg0->unk2A = arg2;
}

void func_800BA730(unkStruct800BA730* arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    arg0->unk5 = 2;
    arg0->unk28 = arg1;
    arg0->unk2A = arg2;
    arg0->unk2C = arg3;
    arg0->unk2E = arg4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E93440/func_800BA75C.s")


void func_800BA77C(s32 arg0, s16 arg1, s16 arg2, s16 arg3) {
    func_800EFA6C(arg0 + 0x4C, arg1, arg2, arg3);
}

void func_800BA7C4(unkStruct800BA7C4* arg0, f32 arg1, f32 arg2) {
    arg0->unk9A = (s16) (s32) (arg1 * 256.0f);
    arg0->unk9C = (s16) (s32) (arg2 * 256.0f);
}

void func_800BA7FC(unkStruct800BA7FC* arg0, f32 arg1, f32 arg2) {
    arg0->unk9E = (s16) (s32) (arg1 * 256.0f);
    arg0->unkA0 = (s16) (s32) (arg2 * 256.0f);
}

void func_800BA834(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6) {
    func_800EFA6C(arg0 + 0x40, arg1, arg2, arg3);
    func_800EFA6C(arg0 + 0x46, arg4, arg5, arg6);
}


void func_800BA894(unkStruct800BA894* arg0, f32 arg1, f32 arg2) {
    arg0->unk54 = arg1;
    arg0->unk58 = arg2;
    if ((arg0->unk20 == 0.0f) || (arg2 < arg0->unk20)) {
        arg0->unk20 = func_800DC178(arg0->unk54, arg0->unk58);
    }
}

void func_800BA8F8(unkStruct800BA8F8* arg0, f32 arg1, f32 arg2) {
    arg0->unkA2 = (s16) (s32) (arg1 * 256.0f);
    arg0->unkA4 = (s16) (s32) (arg2 * 256.0f);
}

void func_800BA930(unkStruct800BA930* arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6) {
    
    arg0->unk4 = 0;
    func_800EFA6C((u8*)arg0 + 0xC4, arg1, arg2, arg3);
    func_800EFA6C((u8*)arg0 + 0xCA, arg4, arg5, arg6);
}

void func_800BA994(unkStruct800BA994* arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4, s16 arg5, s16 arg6) {
    arg0->unk4  = 1;
    arg0->unkC4 = func_800136E4((f32)arg2);
    arg0->unkC6 = func_800136E4((f32)arg5);
    arg0->unkC8 = func_800136E4((f32)arg1);
    arg0->unkCA = func_800136E4((f32)arg4);
    arg0->unkCC = arg3;
    arg0->unkCE = arg6;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E93440/func_800BAA60.s")

void func_800BAA9C(unkStruct800BA7C4* arg0, f32 arg1) {
    func_800BA7C4(arg0, arg1, arg1);
    func_800BA7FC((unkStruct800BA7FC* ) arg0, arg1, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E93440/func_800BAAE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E93440/func_800BAB1C.s")

void func_800BAB54(unkStruct800BAB54* arg0, f32 arg1) {
    arg0->unk5C = arg1;
}

void func_800BAB60(s32 arg0) {
    func_800F2EA0(arg0 + 0x80);
}

void func_800BAB80(s32 arg0) {
    func_800F2EBC(arg0 + 0x80);
}

void func_800BABA0(unkStruct800BABA0* arg0, f32 arg1) {
    arg0->unk7 = 0;
    arg0->unk24 = arg1;
}

void func_800BABB0(s32 arg0) 
{
}
#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E93440/func_800BABB8.s")

s32 func_800BBCB8(f32* arg0, f32* arg1, f32 arg2, s32 arg3, s32* arg4)
{
    s32 temp_v0;

    temp_v0 = func_800B53A4(arg3);
    func_800BABB8(temp_v0, arg0, arg1, arg2, arg4);
    func_800BA22C(temp_v0, arg3);
    return temp_v0;
}

void func_800BBD18(s32 arg0, f32* arg1, f32* arg2, f32 arg3, s32* arg4) {
    if (arg0 != 0) {
        func_800BABB8(arg0, arg1, arg2, arg3, arg4);
        func_800B4790(arg0);
    }
}
