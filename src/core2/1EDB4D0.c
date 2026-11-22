#include "core2/1EDB4D0.h"

typedef struct {
    u16 unk0[4];
}UNK80102394;

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_80101BE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_80101CDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_80101D0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_80101D4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_80101D7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_80101DAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_80101DDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_80101E14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_80101E4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_80101EE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_80101F24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_80101F64.s")

void func_80101FDC(Actor* arg0, u32 arg1)
{
    s32 sp1C;
    AnimCtrl* temp_v0;

    sp1C = func_80101F64();
    if (func_80101BE0(arg0, arg1) != 0)
    {
        temp_v0 = func_80104248(arg0);
        if ((temp_v0 != NULL) && (sp1C != 0))
        {
            anctrl_start(temp_v0);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_8010203C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_80102078.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_801020A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_801020DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_80102128.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_80102190.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_801021BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_80102204.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_801022E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_80102320.s")

void* func_80102394(Actor* arg0)
{
    if (arg0->unk79_3)
    {
        event_sendToActor(arg0, 0x99, 0);
        return func_80101080();
    }
    return actor_getActorData(arg0)->unk8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_801023E4.s")

void func_80102424(Actor* arg0, s32 arg1)
{
    UNK80102394* sp24;
    AnimCtrl* sp20;
    s32 var_a1;
    s32 sp18;

    sp24 = func_80102394(arg0);
    sp20 = func_80104248(arg0);
    if ((sp20 != NULL) && (sp24 != NULL))
    {
        s32 test = sp24[arg1].unk0[3] & 0x200;
        anctrl_setSmoothTransition(sp20, test ? 0 : 1);
    }
    func_80101FDC(arg0, arg1);
    sp20 = func_80104248(arg0);
    if (sp20 != NULL)
    {
        sp18 = sp24[arg1].unk0[3];
        if (sp18 & 1)
        {
            anctrl_setPlaybackType(sp20, 2);

            func_8008B4A8(sp20, sp18 & 0x100 ? 0 : 1);
        }
        if (sp18 & 2)
        {
            anctrl_setPlaybackType(sp20, 1);
        }
        if (sp18 & 4)
        {
            anctrl_setPlaybackType(sp20, 3);
        }
        if (sp18 & 8)
        {
            func_8008B188(sp20, 1);
        }
        if (sp18 & 0x10)
        {
            func_8008B188(sp20, 0);
        }
        if (sp18 & 0x800)
        {

            if (rand_percentChance(0.5f) != 0)
            {
                var_a1 = 1;
            }
            else
            {
                var_a1 = 0;
            }
            func_8008B188(sp20, var_a1);
        }
        if (sp18 & 0x40)
        {
            func_8008B10C(sp20, 0.0f);
        }
        if (sp18 & 0x80)
        {
            func_8008B10C(sp20, 0.999f);
        }
        if (sp18 & 0x400)
        {
            func_8008B10C(sp20, rand_f());
        }
        func_80102190(arg0, sp18 & 0x20 ? 1 : 0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_8010262C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1EDB4D0/func_801026CC.s")
