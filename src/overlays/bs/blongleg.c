#include "bs/blongleg.h"

s32 func_80800000_bsblongleg(PlayerState* self)
{
    return player_inWater(self);
}

void func_80800020_bsblongleg(PlayerState* self, s32 arg1) {
    if (arg1 != 0) {
        func_8009DE38(self, 0x4433, 0.88f);
        return;
    }
    func_8009DE38(self, 0x4433, 0.96f);
}

void func_80800064_bsblongleg(PlayerState* self) {
    f32 sp1C;

    sp1C = bastick_getZonePosition(self);
    if (bastick_getZone(self) == BS_STICK_ZONE_ID_0) {
        baphysics_set_target_horizontal_velocity(self, 0.0f);
        return;
    }
    baphysics_set_target_horizontal_velocity(self, func_800F1214(sp1C, 80.0f, 500.0f));
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/func_808000C8_bsblongleg.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/func_8080013C_bsblongleg.s")

void func_80800204_bsblongleg(PlayerState* self) {
    if (func_8009E74C(self, 8) == 0) {
        _baalarm_free(self);
        func_8009E53C(self, 1, 0.0f);
        bastick_resetZones(self);
        func_800A0CF4(self, 0);
        func_800A0CE8(self, 0);
        func_800A0DD0(self, 0);
        func_800931AC(self, 1);
        func_8009BF5C(self, 0.0f);
        baroll_setIdeal(self, 0.0f);
        bastatetimer_clear(self, 2);
        func_800C77DC(1);
        baflag_clear(self, BA_FLAG_3);
        _batimer_incrementBy(self, 4, 0.5f);
        func_808000C8_bsblongleg(self);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/func_808002D8_bsblongleg.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/func_80800378_bsblongleg.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_0.s")

void bsblongleg_entrypoint_1(PlayerState* self) {
    enum bs_state_e next_state;
    AnimCtrl* anim_ctrl;

    next_state = BS_STATE_0_INVALID;
    anim_ctrl = baanim_getAnimCtrlPtr(self);
    func_808000C8_bsblongleg(self);
    func_8009D2F0(self, 1, 0.5f);
    switch (self->unk15C.word)
    {
        case 0:
            if (anctrl_isStopped(anim_ctrl) != 0) {
                func_808002D8_bsblongleg(self);
            }
            break;
        case 1:
            if (anctrl_isStopped(anim_ctrl) != 0) {
                next_state = 0x26;
            }
            break;
    }
    bs_setState(self, next_state);
}

// #pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_2.s")
void bsblongleg_entrypoint_2(PlayerState* self) {
    func_80800204_bsblongleg(self);
    func_800C2FDC(self->unk160.bytes[0]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_3.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_5.s")

void bsblongleg_entrypoint_6(PlayerState* self)
{
    func_80800204_bsblongleg(self);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_7.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_9.s")

void bsblongleg_entrypoint_10(PlayerState* self)
{
    func_80800204_bsblongleg(self);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_11.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/func_80800994_bsblongleg.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/func_80800A18_bsblongleg.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_12.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_13.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_15.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_16.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_17.s")

void bsblongleg_entrypoint_18(PlayerState* self)
{
    baphysics_reset_gravity(self);
    func_80800204_bsblongleg(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_19.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_21.s")

void bsblongleg_entrypoint_22(PlayerState* self)
{
    func_80800204_bsblongleg(self);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_23.s")

void bsblongleg_entrypoint_24(PlayerState* self)
{
    _bsrest_entrypoint_14();
    func_80800204_bsblongleg(self);
}

void bsblongleg_entrypoint_25(PlayerState* self)
{
    func_8080013C_bsblongleg(self);
    _bsrest_entrypoint_16(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_26.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_27.s")

void bsblongleg_entrypoint_28(PlayerState* self)
{
    func_8080013C_bsblongleg(self);
    _bsdrone_entrypoint_0(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_29.s")

void bsblongleg_entrypoint_30(PlayerState* self)
{
    _bsdrone_entrypoint_2(self);
    func_80800204_bsblongleg(self);
}
#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/blongleg/bsblongleg_entrypoint_31.s")
