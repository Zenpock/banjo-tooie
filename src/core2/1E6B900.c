#include "core2/1E6B900.h"

s32 func_80092010(void)
{
	return 0x118;
}

void func_80092018(PlayerState* arg0)
{
    f32 sp34[3];
    f32 sp28[3];
    f32 var_f0;

    if (arg0->unk50->unkC4 != 0)
    {
        var_f0 = arg0->unk50->unkC8;
    }
    else
    {
        var_f0 = arg0->unk50->unk28;
    }
    func_800EFA4C(sp34, arg0->unk50->unk20, var_f0, arg0->unk50->unk24);
    func_800EE780(sp28, arg0->unk50->unk2C, arg0->unk50->unk44);
    func_80019CD4();
    func_80019750(arg0->unk50->unk44, &sp34, arg0->unk50->unk1C, sp28);
    if (arg0->unk50->unkC4 != 0)
    {
        mlMtxRotPitch(arg0->unk50->unk28);
    }
    mlMtxGet(&arg0->unk50->unkCC);
}

void func_800920C8(PlayerState* arg0)
{
    func_80093504(arg0, arg0->unk50->unk64, arg0->unk50->unk50);
}

void func_800920F0(PlayerState* arg0)
{
    switch (arg0->unk50->unk15)
    {
    case 2:
        arg0->unk50->unk28 = func_800136E4(yaw_get(arg0) + 180.0f);
        return;
    default:
        arg0->unk50->unk28 = yaw_get(arg0);
    case 3:
        return;
    }
}

void func_8009216C(PlayerState* arg0, f32* arg1, f32* arg2)
{
    BaUnknown50* temp_v0;
    func_800920F0(arg0);
    arg0->unk50->unk24 = baroll_get(arg0);
    arg0->unk50->unk20 = func_8009BFCC(arg0);
    temp_v0 = arg0->unk50;
    func_800EFA4C(arg2, temp_v0->unk20, temp_v0->unk28, temp_v0->unk24);
    func_8009C128(arg0, arg1);
}

void func_800921E0(PlayerState* arg0, s32 arg1, f32* arg2)
{
    func_8009C2A0(arg0->unk50->unk4, arg1);
    if (func_800EEEA8(arg2) != 0)
    {
        func_8009C128(arg0, arg2);
    }
}

void func_80092224(PlayerState* arg0)
{
    arg0->unk50->unk1A = 1;
}

void func_80092234(PlayerState* arg0)
{
    arg0->unk50->unk1A = 1;
    arg0->unk50->unk16 = 1;
}

u8 func_8009224C(PlayerState* arg0)
{
    return arg0->unk50->unk1A;
}

s32 func_80092258(PlayerState* arg0)
{
    s32 sp34;
    u8 sp33;
    s32 sp2C;
    f32 var_f20;
    BaUnknown50* temp_v0;

    temp_v0 = arg0->unk50;
    var_f20 = temp_v0->unk88 != 0 ? temp_v0->unk8C : temp_v0->unk14;
    if (func_8009AD78(arg0, 0xC) != 0)
    {
        sp33 = 0;
        if (func_80093DF4(arg0, 2) != 0)
        {
            sp2C = func_800A89F8();
            if (func_800A4C68(arg0) == sp2C)
            {
                sp33 = 1;
            }
        }
        var_f20 *= _bainvisible_entrypoint_2(arg0, sp33);
    }
    return (u32)var_f20 & 0xFF;
}

u8 func_8009239C(PlayerState* arg0)
{
    return arg0->unk50->unk19;
}

void func_800923A8(PlayerState* arg0, s32 arg1)
{
    u8 sp1F;
    BaUnknown50* temp_v0_2;
    s32 temp_v0;

    temp_v0 = func_80092258(arg0);
    sp1F = temp_v0;
    func_800A2540(arg0, temp_v0);
    func_800DF464(2.0f);
    if (arg1 != 0)
    {
        temp_v0_2 = arg0->unk50;
        if (temp_v0_2->unk16 == 0)
        {
            func_800DF738(temp_v0_2->unk4);
        }
    }
    func_800DF830(1);
    temp_v0_2 = arg0->unk50;
    if (temp_v0_2->unk88 != 0)
    {
        func_800DF5D8(temp_v0_2->unk89, temp_v0_2->unk8A, temp_v0_2->unk8B, sp1F);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092444.s")

void func_8009272C(PlayerState* arg0, s32 arg1)
{
    arg0->unk50->unk11 = arg1;
}

s32 func_80092738(PlayerState* arg0)
{
    return arg0->unk50->unk11;
}

void func_80092744(PlayerState* arg0, s32 arg1)
{
    arg0->unk50->unk88 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092750.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092778.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_800927C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092880.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092898.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092A1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092AA4.s")

void func_80092AB0(PlayerState* arg0)
{
    func_800E0ACC(func_80092AD8(arg0));
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092AD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092B04.s")

s32 func_80092B80(PlayerState* arg0)
{
    return arg0->unk50->unkC;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092B8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092BC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092BD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092BDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092BE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092BF4.s")

void func_80092C00(PlayerState* arg0, f32* arg1)
{
    func_800921E0(arg0, 0x1, arg1);
}

void func_80092C24(PlayerState* arg0, f32* arg1)
{
    func_800921E0(arg0,0x2,arg1);
}

void func_80092C48(PlayerState* arg0,f32* arg1)
{
    func_800921E0(arg0,0x7,arg1);
}

void func_80092C6C(s32 arg0,s32 arg1)
{
    func_800921E0(arg0,0x6,arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092C90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092CDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092D18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092D44.s")

void func_80092D9C(s32 arg0,s32 arg1)
{
    func_800921E0(arg0,0x3,arg1);
}

void func_80092DC0(s32 arg0,s32 arg1)
{
    func_800921E0(arg0,0x4,arg1);
}

void func_80092DE4(s32 arg0,s32 arg1)
{
    func_800921E0(arg0,0x8,arg1);
}

void func_80092E08(s32 arg0,s32 arg1)
{
    func_800921E0(arg0,0x9,arg1);
}

void func_80092E2C(s32 arg0,s32 arg1)
{
    func_800921E0(arg0,0xA,arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092E50.s")

void func_80092E5C(s32 arg0,s32 arg1)
{
    func_800921E0(arg0,0x5,arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092E80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092EA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092EB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092EBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80092EC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80093070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_8009312C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_8009316C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_800931AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80093230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_8009328C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_800932BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_800932CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80093300.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_8009332C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_8009333C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80093360.s")

void func_80093370(PlayerState* arg0, s32 arg1)
{
    arg0->unk50->unk17 = arg1;
}

void func_8009337C(PlayerState* arg0, s32 arg1)
{
    arg0->unk50->unk18 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80093388.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80093448.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_800934C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80093504.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80093528.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80093584.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_8009359C.s")

void func_800936CC(PlayerState* arg0, s32 arg1)
{
    arg0->unk50->unkA2 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_800936D8.s")

void func_800936E8(PlayerState* arg0, s32 arg1) 
{
    arg0->unk50->unkA3 = arg1;
}

s32 func_800936F4(PlayerState* arg0)
{
    return arg0->unk50->unkA3;
}

void func_80093700(PlayerState* arg0, s32 arg1)
{
    arg0->unk50->unk19 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_8009370C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80093738.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_8009375C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80093864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80093AB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80093DF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80093E18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80093ECC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80093F30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80093F7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80093FD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_800941C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_800942D0.s")

s32 func_80094340(void)
{
	return 0x4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094348.s")

void func_80094370(s32 arg0)
{
    func_800946C4(arg0,0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094390.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094430.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_800944E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_800944F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094510.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094538.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094574.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094644.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_800946C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_800947EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094824.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_800949BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094A10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094AB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094B14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094BC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094C0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094C64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094C88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094D04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094DA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E6B900/func_80094E40.s")
