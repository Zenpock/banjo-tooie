#include "types.h"
#include "gfx.h"

extern s32 D_80078F88;
extern s32 D_8007913C;
extern OSMesgQueue D_80079010;

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80014E10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80014E6C.s")

// get_framebuffer_size_bytes
u32 func_80014EC8() {
    return FRAMEBUFFER_SIZE_BYTES;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80014ED4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80014F00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80014F38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80014F4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80014F58.s")

typedef struct {
    OSMesgQueue* queue;
    OSMesg mesg;
} ViEventHandler;

extern ViEventHandler D_80078F90[8];

// register_vi_handler
void func_80014F64(OSMesgQueue* queue, OSMesg mesg) {
    s32 i;
    for (i = 0; i < ARRLEN(D_80078F90); i++) {
        if (D_80078F90[i].queue == NULL) {
            D_80078F90[i].queue = queue;
            D_80078F90[i].mesg = mesg;
            return;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80014FE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80015178.s")

s32 func_80015184()
{
    return D_8007913C;
}

void func_80015190(void) 
{
    osSendMesg(&D_80079010, NULL, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_800151BC.s")

void func_80015410()
{
    func_800151BC(0x1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80015430.s")

void func_8001546C(s32 arg0)
{
    s32 temp2;
    OSMesg sp50;
    s32 temp3;
    s32 index;
    s32 temp;

    while (1) {
        osRecvMesg(&D_80078FD0, &sp50, 1);
        func_80014A54();
        D_80079138++;
        temp2 = D_80079138 == 0x558;
        temp = func_8001E7C0() == 0;
        temp3 = D_8003F5D0;
        if (temp2 && temp && temp3)
        {
            //This Tries to trigger the debug screen for being in an infinite loop (also can be caused by really long loads)
            func_8001E5DC(2);
            D_8003F5D0 = 0;
        }
        osSendMesg(&D_80079030, NULL, 0);
        for (index = 0; index < 8; index++)
        {
            if (D_80078F90[index].queue != NULL)
            {
                osSendMesg(D_80078F90[index].queue, D_80078F90[index].mesg, 0);
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_8001559C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_800155BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80015670.s")

s32 func_8001575C()
{
    return D_80078F88;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80015768.s")

void wait_one_frame(void) {
    while (osViGetCurrentLine() < 5) {
    }
    while (osViGetCurrentLine() > 5) { 
    }
}

void set_widescreen(s32 enabled) {
    widescreen_enabled = enabled;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_800157EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80015828.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80015860.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80015878.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_800158E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_8001592C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80015A70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80015B34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80015CC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80015CE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core1/1E2C940/func_80015D14.s")
