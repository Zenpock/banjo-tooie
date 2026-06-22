#include "ch/factory/robot.h"

extern ActorData D_80802928_chfactoryrobot;
extern ActorData D_80802970_chfactoryrobot;
extern ActorData D_808029B8_chfactoryrobot;
extern s32 D_80802AD4_chfactoryrobot;

ActorData* chfactoryrobot_entrypoint_0(void)
{
    return &D_80802928_chfactoryrobot;
}

ActorData* chfactoryrobot_entrypoint_1(void)
{
    return &D_80802970_chfactoryrobot;
}

ActorData* chfactoryrobot_entrypoint_2(void)
{
    return &D_808029B8_chfactoryrobot;
}

void func_80800024_chfactoryrobot(Actor* arg0)
{
    ((f32*)arg0->actorData)[5] = 0.0f;
    ((f32*)arg0->actorData)[7] = 0.0f;
    ((f32*)arg0->actorData)[6] = 20.0f;
    func_80105010(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80800058_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80800264_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80800360_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80800424_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80800508_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_808005D4_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_808006DC_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_808007C4_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80800920_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80800DC4_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80800E40_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80800FFC_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80801160_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80801278_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_8080183C_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80801954_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80801A80_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80801B3C_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80801BB0_chfactoryrobot.s")

s32 func_80801C50_chfactoryrobot(s32 arg0)
{
    func_80101074(&D_80802AD4_chfactoryrobot);
    return 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80801C7C_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80801D08_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80801D7C_chfactoryrobot.s")

void func_8080219C_chfactoryrobot(Actor* arg0)
{
    u8 temp_a1;

    temp_a1 = ((u8*)arg0->actorData)[16];
    if (temp_a1 != 0)
    {
        func_800E8C08(temp_a1);
        ((u8*)arg0->actorData)[16] = 0U;
    }
}

void func_808021D4_chfactoryrobot(Actor* arg0, s32 arg1)
{
    u8 sp1F;
    s32 sp18;
    s32 temp_v0_2;
    u8 temp_v0;

    func_801015D0(arg0);
    temp_v0 = func_800D731C(arg0->unk0->unk14);
    sp1F = temp_v0;
    if (temp_v0 != 0) {
        temp_v0_2 = func_800E8C58(((u8*)arg0->actorData)[16]);
        sp18 = temp_v0_2;
        func_800DBE60(sp1F, 0, temp_v0_2);
        func_800DBE60(sp1F, 1, sp18);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80802240_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80802398_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_80802470_chfactoryrobot.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/factory/robot/func_808025D4_chfactoryrobot.s")
