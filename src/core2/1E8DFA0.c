#include "core2/1E8DFA0.h"

extern UNKD_80127F10** D_80127F10;
extern f32 D_80127F14;
extern s16 D_80127F18;

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8DFA0/func_800B46B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8DFA0/func_800B4790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8DFA0/func_800B5028.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8DFA0/func_800B5054.s")

//particles_update
void func_800B50F0(void) {
    s32 temp_v0;
    s32 var_s0;
    UNKD_80127F10* temp_a0;
    UNKD_80127F10* temp_s0;

    if (D_80127F14 < time_getDelta())
    {
        D_80127F14 = 0.0f;
    }
    else
    {
        D_80127F14 -= time_getDelta();
    }

    if (D_80127F10 == NULL) {
        return;
    }

    for (var_s0 = 0; var_s0 < D_80127F18; var_s0++)
    {
        temp_s0 = D_80127F10[var_s0];
        func_800B4790(temp_s0);
        if ((temp_s0->unk9 != 0) && (temp_s0->unk7 == 2) && (temp_s0->unk90 == temp_s0->unk8C))
        {
            temp_s0->unk8 = 1;
        }
        else
        {
            temp_s0->unk8 = 0;
        }
    }

    var_s0 = 0;
    while (var_s0 < D_80127F18)
    {
        temp_a0 = D_80127F10[var_s0];
        if (temp_a0->unk8 != 0)
        {
            func_800B5450(temp_a0);
        }
        else
        {
            var_s0++;
        }
    }
}

void func_800B525C(GraphicsBuffers* arg0) 
{
    s32 var_s0;

    var_s0 = 0;
    for (var_s0 = 0; var_s0 < D_80127F18; var_s0++)
    {
        func_800BC358(D_80127F10[var_s0], arg0, 4);
    }
}

void func_800B52EC(GraphicsBuffers* arg0)
{
    s32 var_s0;
    for (var_s0 = 0; var_s0 < D_80127F18; var_s0++)
    {
        func_800BC358(D_80127F10[var_s0], arg0, 0);
    }
}

void func_800B537C(GraphicsBuffers* buf)
{
    func_800B525C(buf);
    func_800B52EC(buf);
}
#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8DFA0/func_800B53A4.s")

//particle_deleteParticleGroup
void func_800B5450(UNKD_80127F10* arg0)
{
    s32 var_v1;
    var_v1 = 0;
    while (arg0 != D_80127F10[var_v1] && var_v1 < D_80127F18)
    {
        var_v1++;
    }
    if (var_v1 != D_80127F18)
    {
        func_800BA2C4(arg0);
        D_80127F10[var_v1] = D_80127F10[D_80127F18 - 1];
        D_80127F18--;
        D_80127F10 = heap_realloc(D_80127F10, D_80127F18 * 4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8DFA0/func_800B5534.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8DFA0/func_800B553C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8DFA0/func_800B5548.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8DFA0/func_800B562C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8DFA0/func_800B5654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8DFA0/func_800B5680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E8DFA0/func_800B5698.s")
