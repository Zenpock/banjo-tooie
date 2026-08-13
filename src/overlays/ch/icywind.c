#include "ch/icywind.h"

void func_808001AC_chicywind(Actor*);


extern ActorData D_80800300_chicywind;
extern u32 D_80800348_chicywind;
extern s32 D_80800358_chicywind;

ActorData* chicywind_entrypoint_0()
{
    return &D_80800300_chicywind;
}

void func_8080000C_chicywind(Actor* arg0)
{
    if (func_800D0B68(0x21U, 0U) != 0)
    {
        func_800FFAB0(arg0);
    }
}

void func_80800044_chicywind(Actor* arg0)
{
    int temp = arg0->unk70_10 == 2;
    f32 sp30[3];
    if ((temp != 0) || ((temp == 0) && (arg0->unk5F != 0)))
    {
        _subaddieaudioloop_entrypoint_4(arg0, arg0->position, temp, &D_80800348_chicywind);
    }
    if (func_800D0B68(0x21U, 0U) != 0)
    {
        func_800FFAB0(arg0);
        return;
    }
    switch (arg0->unk70_10)
    {
    case 1:
        if (func_8010C9B0(arg0->position, 0x3E8U) != 0)
        {
            func_80101FDC(arg0, 2U);
            arg0->unk58 = func_800DC178(0.15f, 0.2f);
            return;
        }
        return;
    case 2:
        if (func_800D9078(&arg0->unk58) != 0)
        {
            func_800EE7F8(sp30, arg0->position);
            func_800EF1B8(sp30, arg0->rotation[1], -200.0f);
            func_800BBCB8(arg0->position, sp30, 1.0f, 1, &D_80800358_chicywind);
            arg0->unk58 = func_800DC178(0.15f, 0.2f);
        }
        func_808001AC_chicywind(arg0);
        if (func_8010C9B0(arg0->position, 0x708U) == 0)
        {
            func_80101FDC(arg0, 1U);
        }
        break;
    }
}

void func_808001AC_chicywind(Actor* arg0)
{
    f32 sp4C[3];
    f32 sp40[3];
    f32 var_f2;
    f32 sp38;
    f32 sp34;
    u32 characterIndex;

    characterIndex = func_800F54E4();
    switch (func_800F5410(characterIndex))
    {
    default:
        sp34 = 0.85f;
        break;
    case TRANSFORM_B_KAZOOIE:
    case TRANSFORM_11_CLOCKWORK:
        sp34 = 0.65f;
        break;
    case TRANSFORM_2_SNOWBALL:
        sp34 = func_800F10B4(func_800F5578(characterIndex), 1.0f, func_800F55A4(characterIndex), 0.6f, 1.0f);
        break;
    }
    func_800F5A00(characterIndex, sp40);
    sp38 = func_800F10B4(func_800EEAD4(sp40, arg0->position), 1000.0f, 1800.0f, 1200.0f, 300.0f) * (1.0f / sp34);
    func_800EEB9C(sp4C, func_800F1DF4(arg0->position, sp40), sp38);
    func_800F48BC(characterIndex, &sp4C);
}
