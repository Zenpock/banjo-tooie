#include "ch/doubloon.h"

extern s32 D_80800290_chdoubloon;
extern ActorData D_808002A0_chdoubloon;

void chdoubloon_entrypoint_1(Actor*);

void func_80800000_chdoubloon(Actor* arg0)
{
    arg0->rotation[0] = 0.0f;
}

void func_8080000C_chdoubloon(Actor* arg0)
{
    chdoubloon_entrypoint_1(arg0);
    func_80103110(arg0, 0U);
}

void chdoubloon_entrypoint_0(Actor* arg0, void* arg1)
{
    func_80101870(arg0, arg1);
    if (arg0->unk7C_12)
    {
        func_80103110(arg0, 1U);
    }
}

void chdoubloon_entrypoint_1(Actor* arg0)
{

    f32 sp74[3];
    s32 var_s1;
    f32 sp68[2];
    f32 sp5C[3];

    arg0->rotation[1] += ((time_getDelta() * 300.0f));
    if (arg0->unk7C_12)
    {
        func_800E3980(sp5C);
        func_800F18FC(arg0->position, sp5C, sp68);
        for (var_s1 = 0; var_s1 < 4; var_s1++)
        {
            if (func_800DC0C0() < 0.015f)
            {
                func_800EEC30(sp74, sp68[0] + func_800DC178(-90.0f, 90.0f), sp68[1] + func_800DC178(-90.0f, 90.0f), 30.0f);
                func_800EF04C(sp74, arg0->position);
                sp74[1] += 30.0f;
                _fxtwinkle_entrypoint_1(sp74, ASSET_9E2_GOLD_SPARKLE);
            }
        }
    }
}

s32 func_808001D4_chdoubloon(Actor* arg0, s32 arg1, s32 arg2)
{
    switch (arg1)
    {

    case 0x3E:
        _sudialog_entrypoint_0(0x165, 4);
        func_800D0BD4(*(s32*)&arg0->unk54, 7U);
        func_800D1844(0x4E);
        _subaddieaudioquick_entrypoint_2(arg0, arg0->position, &D_80800290_chdoubloon);
        _fxsparkle_entrypoint_1(arg0->position, 0x13U);
        func_800FFAB0(arg0);
        break;
    case 0x13:
        *(s32*)&arg0->unk54 = arg2;
        break;
    default:
        return 0;
    }

    return 1;
}

ActorData* chdoubloon_entrypoint_2()
{
    return &D_808002A0_chdoubloon;
}
