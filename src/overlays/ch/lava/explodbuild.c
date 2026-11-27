#include "ch/lavaexplodbuild.h"

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/lava/explodbuild/func_80800000_chlavaexplodbuild.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/lava/explodbuild/chlavaexplodbuild_update.s")

void func_80800084_chlavaexplodbuild(s32 arg0)
{
    flag_setValueFalse(FLAG3_A24_UNK);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/lava/explodbuild/chlavaexplodbuild_eventHandler.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/lava/explodbuild/func_80800138_chlavaexplodbuild.s")

extern ActorData D_808002E0_chlavaexplodbuild;
ActorData* chlavaexplodbuild_entrypoint_0()
{
    return &D_808002E0_chlavaexplodbuild;
}
