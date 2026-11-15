#include "core2/1E831D0.h"

typedef struct {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    s16 unkE;
} D_80127760Struct;
extern D_80127760Struct D_80127760;


#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E831D0/func_800A98E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E831D0/func_800A9924.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E831D0/func_800A9998.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E831D0/func_800A9A14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E831D0/func_800A9AA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E831D0/func_800A9AF8.s")

void func_800A9B84(void) {
}

void func_800A9B8C(s32 arg0, s32 arg1) {
    D_80127760.unkA = arg0;
    D_80127760.unkC = arg1;
}

void demo_playDemo(DemoState arg0, MapId mapToEnter, s32 entranceToUse) {
    D_80127760.unk1 = arg0;
    if (D_80127760.unk0 != 0) {
        D_80127760.unk4 = 1;
    }
    D_80127760.unk6 = mapToEnter;
    D_80127760.unk8 = entranceToUse;
    map_setTarget(mapToEnter, entranceToUse);
    map_setTransition(1);
    map_activateTransition(3U);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E831D0/func_800A9BFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E831D0/func_800A9C50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E831D0/func_800A9C98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E831D0/func_800A9CAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E831D0/func_800A9CD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E831D0/func_800A9CDC.s")

void func_800A9D00(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E831D0/func_800A9D08.s")
