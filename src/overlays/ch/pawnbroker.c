#include "ch/pawnbroker.h"

extern u32 D_80800F60_chpawnbroker;

extern ActorData D_80800FD0_chpawnbroker;

extern ActorData D_80801018_chpawnbroker;

extern ActorData D_80801060_chpawnbroker;

extern u32 D_808010C4_chpawnbroker;
extern u32 D_808010CC_chpawnbroker;
extern u32 D_808010D8_chpawnbroker;
extern u32 D_808010E4_chpawnbroker;
extern u32 D_808010F0_chpawnbroker;

extern s32 D_80801100_chpawnbroker;
extern s32 D_80801134_chpawnbroker;

extern u32 D_80801144_chpawnbroker;
extern u32 D_8080114C_chpawnbroker;
extern u32 D_80801154_chpawnbroker;

void func_80800AE4_chpawnbroker(Actor*, s32, s32);
void func_80800CB4_chpawnbroker();
void func_80800E3C_chpawnbroker(Actor*);

ActorData* chpawnbroker_entrypoint_0(void)
{
    return &D_80800FD0_chpawnbroker;
}

ActorData* chpawnbroker_entrypoint_1(void) {
    return &D_80801018_chpawnbroker;
}

ActorData* chpawnbroker_entrypoint_2(void) {
    return &D_80801060_chpawnbroker;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/pawnbroker/func_80800024_chpawnbroker.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/pawnbroker/func_80800320_chpawnbroker.s")

void func_80800514_chpawnbroker(Actor* arg0) 
{
    _suexpression_entrypoint_8(arg0, 1);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/pawnbroker/func_80800534_chpawnbroker.s")

void func_80800664_chpawnbroker(Actor* arg0) {
    _subaddieaudioquick_entrypoint_3(arg0, arg0->position, &D_808010C4_chpawnbroker, 0.52f);
}

void func_80800694_chpawnbroker(Actor* arg0)
{
    _subaddieaudioquick_entrypoint_4(arg0, arg0->position, &D_808010D8_chpawnbroker, &D_808010F0_chpawnbroker);
    _subaddieaudioquick_entrypoint_3(arg0, arg0->position, &D_808010CC_chpawnbroker, 0.0f);
    _subaddieaudioquick_entrypoint_3(arg0, arg0->position, &D_808010E4_chpawnbroker, 0.0f);
}

void func_808006FC_chpawnbroker(Actor* arg0, s32 arg1)
{
    Actor* temp_v0;

    switch (arg1)
    {
    case 0x136:
        func_80108528(arg1, (f32*)arg0->actorData, 0xA, &arg0);
        return;
    case 0x353:
        func_80108528(arg1, (f32*)arg0->actorData, 0, &arg0);
        return;
    case 0x354:
        temp_v0 = func_801084B0(arg1, &arg0);
        func_80102FDC(temp_v0, arg0->scale);
        func_80108944(temp_v0, arg0);
        arg0->unk3C = temp_v0->unk0;
        return;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/pawnbroker/func_808007BC_chpawnbroker.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/pawnbroker/func_8080083C_chpawnbroker.s")

s32 func_80800A50_chpawnbroker(Actor* arg0, s32 arg1, s32 arg2)
{
    if (_gcdialogcamera_entrypoint_0(arg1, arg2) != 0)
    {
        if (arg0->actorData[4] != 2)
        {
            func_80800AE4_chpawnbroker(arg0, 2, 1);
        }
        return 2;
    }
    return 1;
}

void func_80800AA8_chpawnbroker(Actor* arg0)
{
    if (arg0->actorData[4] != 0)
    {
        _capod_entrypoint_3(0U);
        arg0->actorData[4] = 0;
    }
}

void func_80800AE4_chpawnbroker(Actor* arg0, s32 arg1, s32 arg2)
{
    u32 temp_v0;

    temp_v0 = arg0->actorData[4];
    switch (temp_v0) 
    {
    case 0:
        _capod_entrypoint_2(arg0->unk0, 0x11U, 0);
    case 1:
        _capod_entrypoint_8(1);
        arg0->actorData[4] = 2;
        _gcdialogcamera_entrypoint_3(&D_80800F60_chpawnbroker, arg0->scale);
        _gcdialogcamera_entrypoint_4(arg0->position);
        _gcdialogcamera_entrypoint_5(arg0->rotation);
        _gcdialogcamera_entrypoint_8();
    case 2:
        _capod_entrypoint_7(arg1, arg2);
        return;
    }
}

void func_80800B88_chpawnbroker(Actor* arg0, s32 arg1, s32 arg2)
{
    switch (arg0->actorData[4])
    {
    case 0:
        _capod_entrypoint_2(arg0->unk0, 0x11U, arg2);
    case 2:
        arg0->actorData[4] = 1;
    case 1:
        _capod_entrypoint_6(arg0->unk0, arg1, arg2);
        return;
    }
}

s32 func_80800C00_chpawnbroker(s32 arg0, s32 arg1)
{
    if (arg1 > 0)
    {
        if (func_800D1A04(0x4E) >= arg0)
        {
            if (func_800F64A4(func_800F54E4(), ALLOW_BANJO | ALLOW_BK) != 0)
            {
                return 0x1040;
            }
            return 0x1225;
        }
        return 0xFE9;
    }
    return 0xFE7;
}

void func_80800C70_chpawnbroker(Actor* arg0)
{
    switch (arg0->unk70_10)
    {
    case 1:
        func_80800CB4_chpawnbroker();
    case 2:
        return;
    }
}

void func_80800CB4_chpawnbroker(Actor* arg0)
{
    Actor* sp24;
    Actor* var_v0;

    arg0->position[1] -= 40.0f;
    if (func_800D0B68(0x27U, 1U) == 0)
    {
        var_v0 = func_80106790(func_800D0634(0x27U, 1U));
        sp24 = var_v0;
    }
    else if (func_800D0B68(0xAU, 4U) == 0)
    {
        var_v0 = _subaddiefind_entrypoint_0(arg0->position, 0x136, -1, 0);
        sp24 = var_v0;
    }
    arg0->unk3C = sp24->unk0;
    func_8010A570(sp24);
    func_80102424(arg0, 2);
}

s32 func_80800D5C_chpawnbroker(Actor* arg0, s32 arg1, s32 arg2)
{
    if (arg1 == 5)
    {
        func_800BBCB8(arg0->position, arg0->position, arg0->scale, 0x28, &D_80801100_chpawnbroker);
        _subaddieaudioquick_entrypoint_2(arg0, arg0->position, &D_80801134_chpawnbroker);
        func_8010A590(func_80106790(arg0->unk3C));
        func_800FFAB0(arg0);
        return 1;
    }
    return 0;
}

void func_80800DE8_chpawnbroker(Actor* arg0)
{
    if (arg0->unk70_10 == 2)
    {
        func_80800E3C_chpawnbroker(arg0);
        if (func_80101DDC(arg0) != 0)
        {
            func_80102424(arg0, 1);
        }
    }
}

void func_80800E34_chpawnbroker(s32 arg0) 
{
}

void func_80800E3C_chpawnbroker(Actor* arg0)
{
    _subaddieaudioquick_entrypoint_4(arg0, arg0->position, &D_80801144_chpawnbroker, &D_80801154_chpawnbroker);
    _subaddieaudioquick_entrypoint_3(arg0, arg0->position, &D_8080114C_chpawnbroker, 0.5f);
    _subaddieaudioquick_entrypoint_3(arg0, arg0->position, &D_8080114C_chpawnbroker, 0.87f);
}