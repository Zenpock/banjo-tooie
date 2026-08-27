#include "overlays/ba/physics.h"
#include "core2/baphysics.h"
#include "ba/physics.h"

s32 func_8009AD70() 
{
    return 0xF;
}

u8 func_8009AD78(unkStruct8009AD78* arg0, s32 arg1) {
    return *(arg0->unkC4 + arg1);
}

void func_8009AD88(s32 arg0) 
{
}
#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009AD90.s")

void func_8009ADF0(unkStruct8009ADF0* arg0, s32 arg1, s32 arg2) {
    *(arg0->unkC4 + arg1) = arg2;
}

s32 func_8009AE00() 
{
    return 0xC4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009AE08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B08C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B170.s")

void func_8009B1FC(unkStruct8009B1FC* arg0) {
    f32 temp_f0;
    f32 temp_f12;
    f32 var_f2;

    temp_f0 = time_getDelta();

    arg0->unkC8->unk14 += arg0->unkC8->unk34 * temp_f0;

    var_f2 = arg0->unkC8->unk14;
    temp_f12 = arg0->unkC8->unk38;

    if (var_f2 < temp_f12) {
        arg0->unkC8->unk14 = temp_f12;
        var_f2 = arg0->unkC8->unk14;
    }

    arg0->unkC8->unk2C = var_f2 * temp_f0;
    arg0->unkC8->unk8 += arg0->unkC8->unk2C;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B27C.s")

void func_8009B3B8(unkStruct8009B3B8* arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = arg0->unkC8;
    func_800EE7F8(temp_v0 + 0x28, temp_v0 + 0x10);
    func_800EF334(arg0->unkC8 + 0x28, time_getDelta());
    temp_v0_2 = arg0->unkC8;
    func_800EF04C(temp_v0_2 + 4, temp_v0_2 + 0x28);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B414.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B450.s")

void func_8009B4D0(unkStruct8009B4D0* arg0, f32 arg1[3]) 
{
    func_800EE7F8(arg1, arg0->unkC8->unk28);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B4FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B7C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_set_type.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B94C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B98C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_set_target_horizontal_velocity.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_set_target_yaw.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B9F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_set_vertical_velocity.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_set_horizontal_velocity.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BA9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BADC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BAE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BAF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_get_target_horizontal_velocity.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BB0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BB18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BB24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_get_vertical_velocity.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BB5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BB94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BBB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BC08.s")

void func_8009BC34(PlayerState* arg0)
{
    baphysics_reset_gravity(arg0);
    baphysics_reset_terminal_velocity(arg0);
}
#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BC5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_reset_gravity.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_reset_terminal_velocity.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_set_gravity.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_set_terminal_velocity.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BCD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BD18.s")
