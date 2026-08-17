#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2A0E0/func_800125B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2A0E0/func_8001268C.s")

// audio_thread_entry
#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2A0E0/func_800128C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2A0E0/func_800129FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2A0E0/func_80012B74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2A0E0/func_80012BB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2A0E0/func_80012D4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2A0E0/func_80012D84.s")

extern s32 D_8003CA40;
extern OSThread D_800459F8;

void func_80012EA0(void) {
    if (D_8003CA40 == 0) {
        D_8003CA40 = 1;
        osStartThread(&D_800459F8);
    }
}


extern s32 D_80046A78;

s32* func_80012EDC(void) {
    return &D_80046A78;
}


extern s32 D_80069488;

s32* func_80012EE8(void) {
    return &D_80069488;
}


extern s32 D_80069568;

s32* func_80012EF4(void) {
    return &D_80069568;
}


extern s32 D_80045BB8;

s32* func_80012F00(void) {
    return &D_80045BB8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2A0E0/func_80012F0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2A0E0/func_80012F34.s")

extern s32 D_8007695C;

s32* func_80012F60(void) {
    return &D_8007695C;
}


extern s32 D_80076940;

s32* func_80012F6C(void) {
    return &D_80076940;
}


#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2A0E0/rom_dma_read.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2A0E0/func_8001311C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2A0E0/func_800131C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2A0E0/func_80013224.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2A0E0/func_800132BC.s")

void func_80013324()
{
    func_80013224();
    func_800132BC();
}

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2A0E0/func_8001334C.s")
