#include "bs/bfly.h"

extern s32 D_80801D20_bsbfly;
extern s32 D_80801D48_bsbfly[];
extern s32 D_80801D58_bsbfly[];
extern s32 D_80801D68_bsbfly[];
extern s32 D_80801D78_bsbfly[];
extern s32 D_80801D88_bsbfly[];
extern s32 D_80801D98_bsbfly[];
extern s32 D_80801DA8_bsbfly[];
extern s32 D_80801DB8_bsbfly[];
extern s32 D_80801DC8_bsbfly[];
extern s32 D_80801DD8_bsbfly[];

/* .code */
void func_80800000_bsbfly(PlayerState* self) {
    f32 sp24[3];

    func_8009C128(self, sp24);
    sp24[0] += func_800DC178(-30.0f, 30.0f);
    sp24[1] += 50.0f + func_800DC178(0, 30.0f);
    sp24[2] += func_800DC178(-30.0f, 30.0f);
    func_800BBCB8(&sp24, 0, 1.0f, 1, &D_80801D20_bsbfly);
}

void func_808000AC_bsbfly(PlayerState* self) {
    func_80093360(self, 60.0f); // baModel_setYDisplacement
    yaw_setUpdateType(self, YAW_TYPE_3_BOUNDED);
    yaw_setVelocityBounded(self, 500.0f, 2.0f);
    baroll_setAngularVelocity(self, 500.0f, 2.0f);
    _bafly_entrypoint_20(self);
    func_800959C8(self, 65.0f, 50.0f);
    func_800961AC(self, 4);
}

void func_80800128_bsbfly(PlayerState* self)
{
    if (!func_8009E77C(self, 9)) {
        _bastatemem_entrypoint_0(self, 0x20);
        _bafly_entrypoint_5(self);
        func_808000AC_bsbfly(self);
        _baboost_entrypoint_3(self);
        _baboost_entrypoint_4(self, 1);
    }
}

void func_80800188_bsbfly(PlayerState* self)
{
    if (!func_8009E74C(self, 9)) {
        _bafly_entrypoint_4(self);
        _bastatemem_entrypoint_1(self);
        baphysics_reset_gravity(self);
        baphysics_reset_terminal_velocity(self);
        func_800A0CF4(self, 0);
        func_80093360(self, 0.0f);
        func_800A042C(self);
        yaw_setUpdateType(self, YAW_TYPE_1_DEFAULT);
        func_800A4E30(self);
        func_80095A40(self);
        func_800961AC(self, 1);
        _baboost_entrypoint_4(self, 0);
        baflag_clear(self, 0x2F);
        baflag_clear(self, 0x30);
    }
}

void func_80800248_bsbfly(PlayerState* self)
{
    baanim_playForDuration_once(self, 0x45, 1.4f); // ASSET_45_ANIM_BSBFLY_ENTER
    func_8009FFD8(self, 1, 1, 3, 6); // setUpdateTypes(1, YAW_STATE_1_DEFAULT, 3, BA_PHYSICS_AIRBORN);
    if (bastick_distance(self) != 0.0f)
    {
        yaw_setIdeal(self, bastick_getAngleRelativeToBanjo(self));
    }
    baphysics_set_target_yaw(self, yaw_getIdeal(self));
    func_8009BA9C(self, 0);
    baphysics_set_target_horizontal_velocity(self, 0.0f);
    baphysics_set_gravity(self, -1200.0f);
    func_800A0CF4(self, 1);
    func_8009D874(self);
    self->unk160.word = 0;
    self->unk15C.word = 0;
}

void func_80800320_bsbfly(PlayerState* self) 
{
    BanjoStateId next_state;
    AnimCtrl* anim_ctrl;

    next_state = 0;
    anim_ctrl = baanim_getAnimCtrlPtr(self);
    if (self->unk160.word == 0) 
    {
        if (anctrl_isAt(anim_ctrl, 0.2416f) != 0) 
        {
            anctrl_setDuration(anim_ctrl, 2.4f);
            baphysics_set_vertical_velocity(self, 1600.0f);
            func_8009DE38(self, 0x406, 0.7f); // sfx
            self->unk160.word = 1;
        }
    } 
    else 
    {
        func_80800000_bsbfly(self);
        if (baphysics_get_vertical_velocity(self) < 0.0f) 
        {
            next_state = BS_STATE_24;
        }
    }
    bs_setState(self, next_state);
}

void func_808003E0_bsbfly(PlayerState* self) {
    func_800C6DA0(0x44);
    func_800A0CF4(self, 0);
    func_800A4E30(self);
}

s32 bsbfly_entrypoint_0(s32 arg0) {
    return D_80801D48_bsbfly[arg0];
}

void func_8080042C_bsbfly(PlayerState* self)
{
    func_8009E6EC(self);
    func_80801BB4_bsbfly(self);
}

void func_80800454_bsbfly(PlayerState* self)
{
    s32 next_state;

    baflag_clear(self, 0x2F);
    baflag_clear(self, 0x30);
    next_state = bs_getNextState(self);
    if (((next_state == 0x18) || (next_state == 0x2A) || (next_state == 0x91))
        && (_bafpctrl_entrypoint_4(self) == 3))
    {
        baflag_set(self, 0x2F);
        if (_bafpctrl_entrypoint_5(self) != 0) {
            baflag_set(self, 0x30);
        }
    }
    _bafpctrl_entrypoint_17(self);
    _bafly_entrypoint_6(self, 0.0f);
    _bafly_entrypoint_7(self, 0);
    func_80800188_bsbfly(self);
}

void func_8080050C_bsbfly(PlayerState* self) {

    baanim_playForDuration_loopSmooth(self, 0x38, 0.62f);
    func_8009FFD8(self, 1, 1, 3, 3);
    if (baflag_isTrue(self, 9) != 0) {
        baphysics_set_target_horizontal_velocity(self, 0.0f);
    } else {
        baphysics_set_target_horizontal_velocity(self, 600.0f);
    }
    baphysics_set_horizontal_velocity(self, yaw_getIdeal(self), baphysics_get_target_horizontal_velocity(self));
    baphysics_set_target_yaw(self, yaw_getIdeal(self));
    func_800A0CF4(self, 1);
    baphysics_set_gravity(self, -300.0f);
    baphysics_set_terminal_velocity(self, -99.9f);
    func_800A4DA4(self, 3);
    func_80800128_bsbfly(self);
    self->kazfly->unk0 = 1.0f;
    self->unk160.word = 0;
    self->kazfly->unk1C = 0;
    _bafly_entrypoint_19(self);
}

void func_80800624_bsbfly(PlayerState* self) {
    s32 next_state;
    AnimCtrl * anim_ctrl;
    f32 temp_f0;
    s32 sp38;
    s32 var_v1;

    next_state = 0;
    anim_ctrl = baanim_getAnimCtrlPtr(self);
    _bafly_entrypoint_20(self);
    _bafly_entrypoint_9(self);
    _bafly_entrypoint_10(self, 300.0f, 80.0f);
    _bafly_entrypoint_11(self);
    var_v1 = 0;
    if (bakey_pressed(self, 8) != 0) 
    {
        self->kazfly->unk1C = 1;
    }
    if ((self->kazfly->unk1C != 0) && ((func_8001211C() % 3) == 0)) 
    {
        self->kazfly->unk1C = 0;
        var_v1 = _bafly_entrypoint_12(self);
    }
    if ((var_v1 != 0) || (self->unk15C.word != 0)) 
    {
        if (var_v1 != 0) 
        {
            anctrl_setDuration(anim_ctrl, 0.3f);
            _chusefeather_entrypoint_1(self->unk184, 0);
        }
        if (self->unk15C.word != 0) 
        {
            self->unk15C.word = 0;
            _baboost_entrypoint_2(self, 0.35f);
        } 
        else 
        {
            _baboost_entrypoint_2(self, 1.0f);
        }
    }
    sp38 = _baboost_entrypoint_1(self);
    _bafly_entrypoint_7(self, 0);
    switch (self->unk160.word)
    {
        case 0:
            if (sp38 != 0) 
            {
                self->unk160.word = 1;
            }
            break;
        case 1:
            _bafly_entrypoint_7(self, 1);
            temp_f0 = func_800136E4(func_8009BFD8(self) - 30.0f);
            if ((temp_f0 > 80.0f) && (temp_f0 < 300.0f)) 
            {
                temp_f0 = 300.0f;
            }
            func_8009BF5C(self, temp_f0);
            _bafly_entrypoint_21(self);
            if (sp38 != 0)
            {
                baphysics_set_vertical_velocity(self, sp38 * 400.0f);
            }
            if (sp38 == 0) 
            {
                anctrl_setDuration(anim_ctrl, 0.62f);
                _bafly_entrypoint_20(self);
                self->unk160.word = 0;
            }
            break;
    }
    if (anctrl_isAt(anim_ctrl, 0.1358f) != 0)
    {
        func_8009DFD4(self, 0x3FF, 0.6f, 0.7f, 0x2710, 0x2EE0);
    }
    _bafly_entrypoint_8(self, 300.0f, 80.0f, 600.0f, -300.0f, -99.9f, -700.0f, -1000.0f);
    if ((_bafpctrl_entrypoint_4(self) != 3)
        && (bainput_should_beak_bust(self) != 0))
    {
        next_state = 0xF;
    }
    self->kazfly->unk0 = func_800F0E00(self->kazfly->unk0 - time_getDelta(), 0);
    if ((self->kazfly->unk0 == 0.0f)
        && bakey_pressed(self, 9)
        && func_8008D0E0(self)
        && _bafly_entrypoint_12(self))
    {
        next_state = 0x2A;
    }
    if (player_inWater(self) != 0)
    {
        next_state = 0x2D;
    }
    if (_bafly_entrypoint_2(self) != 0) 
    {
        next_state = 1;
    }
    _baboost_entrypoint_5(self);
    bs_setState(self, next_state);
}

s32 bsbfly_entrypoint_1(s32 arg0) {
    return D_80801D58_bsbfly[arg0];
}

void func_808009D0_bsbfly(PlayerState* self) {
    f32 sp1C[3];

    func_8009C128(self, &sp1C);
    func_800EF04C(sp1C, self->kazfly->unk10);
    func_800A34AC(self, sp1C);
    func_8009DF58(self, 0x40D, 1.0f);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/bfly/func_80800A24_bsbfly.s")

void func_80800C38_bsbfly(PlayerState* self) {
    f32 unk0[3];
    f32 unk1[3];
    s32 pad2;
    f32 unk2;
    f32 unk3;

    func_800EE7F8(unk1, self->kazfly->unk10);
    func_800CA9D8(func_800A4C48(self), &unk3);
    func_800EFA4C(unk0, bastick_getX(self) * 1000.0f, 0.0f, 0.0f);
    func_800EF8BC(unk0, unk0, unk3);
    func_800EF934(unk0, unk0, unk2);
    func_800EF04C(unk1, unk0);
    func_800EFA4C(unk0, 0.0f, -bastick_getY(self) * 1000.0f, 0.0f);
    func_800EF8BC(unk0, unk0, unk3);
    func_800EF934(unk0, unk0, unk2);
    func_800EF04C(unk1, unk0);
    func_8009BA9C(self, unk1);
}

void func_80800D50_bsbfly(PlayerState* self) {
    func_80800128_bsbfly(self);
    self->unk160.word = 0;
    func_80800A24_bsbfly(self, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/bfly/func_80800D80_bsbfly.s")

void func_80800F10_bsbfly(PlayerState* self) {
    BanjoStateId next_state;
    AnimCtrl *animCtrl;
    f32 unk0[3];
    s32 pad0;

    next_state = BS_STATE_0_INVALID;
    animCtrl = baanim_getAnimCtrlPtr(self);
    _bafly_entrypoint_11(self);
    func_8009DDDC(self);
    switch (self->unk160.word) {                              
    case 1:
        if (anctrl_isAt(animCtrl, 0.6905) != 0) {
            func_80800A24_bsbfly(self, 2);
        }
        break;
    case 2:
        func_80800C38_bsbfly(self);
        if (anctrl_isStopped(animCtrl) != 0) {
            anctrl_setIndex(animCtrl, 0x47);
            anctrl_setDuration(animCtrl, 0.3);
            anctrl_setPlaybackType(animCtrl, 2);
            anctrl_start(animCtrl);
        }
        func_8009C128(self, unk0);
        func_800EF3DC(unk0, self->kazfly->unk4);
        _bafly_entrypoint_6(self, func_800F10B4(func_800EEFD4(unk0), 0, 16000000, 0.2, 0.7f));
        if (func_800EEFD4(unk0) > 1.6e7f) {
            if (bakey_held(self, 9) != 0) {
                func_80800A24_bsbfly(self, 3);
            } else {
                next_state = 0x57;
            }
        }
        func_80800000_bsbfly(self);
        next_state = func_80800D80_bsbfly(self, next_state);
        break;
    case 3:
        func_80800C38_bsbfly(self);
        if (bakey_released(self, 9) != 0) {
            next_state = 0x57;
        } else if (_batimer_decrement(self, 1) != 0) {
            if (_bafly_entrypoint_12(self) != 0) {
                _chusefeather_entrypoint_1(self->unk184, 0);
                _batimer_set(self, 1, 1);
            } else {
                next_state = 0x57;
            }
        }
        func_80800000_bsbfly(self);
        next_state = func_80800D80_bsbfly(self, next_state);
    }

    bs_setState(self, next_state);
}

void func_80801138_bsbfly(PlayerState* self)
{
    func_80800A24_bsbfly(self, 0);
    func_80800188_bsbfly(self);
}

s32 bsbfly_entrypoint_2(s32 arg0) {
    return D_80801D68_bsbfly[arg0];
}

void func_80801178_bsbfly(PlayerState* self) {
    s32 temp_v0;

    func_8009E0DC(self);
    func_8009E100(self);
    if (func_8009E74C(self, 9) != 0) {
        func_808000AC_bsbfly(self);
    }
    temp_v0 = bs_getNextState(self);
    if ((temp_v0 == 0x20) || (temp_v0 == 0x24) || (temp_v0 == 0x2D)) {
        func_8009DBF0(self, 0x3EA, 1.0f);
    }
    func_80800188_bsbfly(self);
    func_800A0CF4(self, 0);
}

void func_80801208_bsbfly(PlayerState* self) {
    AnimCtrl* temp_v0;

    temp_v0 = baanim_getAnimCtrlPtr(self);
    anctrl_reset(temp_v0);
    func_8008B1C8(temp_v0, 0.3f);
    anctrl_setIndex(temp_v0, 0xCC);
    anctrl_setDuration(temp_v0, 0.38f);
    anctrl_setPlaybackType(temp_v0, 2);
    anctrl_start(temp_v0);
    func_8009FFD8(self, BAANIM_UPDATE_1_NORMAL, YAW_TYPE_1_DEFAULT, 3, BA_PHYSICS_3_LOCKED_ROTATION);
    func_800A0CF4(self, 1);
    func_80800128_bsbfly(self);
    func_80095A40(self);
    func_800961AC(self, 1);
    baroll_setIdeal(self, 0.0f);
    func_8009BF5C(self, 0.0f);
    baphysics_reset_gravity(self);
    baphysics_reset_terminal_velocity(self);
    func_80093360(self, 0.0f);
    func_8009DF94(self, 0x420, 1.0f, 0x7FFF);
    func_8009DB04(self, 0x444, 1.0f, 0x7FFF);
    self->kazfly->unk0 = 0.35f;
    self->unk160.word = 0;
}

void func_80801334_bsbfly(PlayerState* self) {
    enum bs_state_e sp34;
    f32 sp28[3];

    sp34 = BS_STATE_0_INVALID;
    func_8009BB24(self, &sp28);
    switch (self->unk160.word) {
        case 1:
            break;
        case 0:
            if (func_8008DF8C(self, 0x5A) != 0) {
                baanim_playForDuration_onceSmoothStartingAt(self, 8, 2.0f, 0.6667f);
                self->unk160.word = 1;
            }
            break;
    }
    self->kazfly->unk0 -= time_getDelta();
    if (self->kazfly->unk0 < 0.0f) {
        self->unk15C.word = 1;
        sp34 = BS_STATE_24;
    }
    if (bainput_should_beak_bust(self) != 0) {
        sp34 = BS_STATE_F_BBUSTER;
    }
    if (player_isStable(self) != 0) {
        func_8009FE58(self);
        sp34 = BS_STATE_20_LANDING;
    }
    if (player_inWater(self) != 0) {
        sp34 = 0x2D;
    }
    bs_setState(self, sp34);
}

s32 bsbfly_entrypoint_3(s32 arg0) {
    return D_80801D78_bsbfly[arg0];
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/bfly/func_8080145C_bsbfly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/bfly/func_808014E8_bsbfly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/bfly/func_808015C4_bsbfly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/bfly/func_808016B4_bsbfly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/bfly/func_8080183C_bsbfly.s")

s32 bsbfly_entrypoint_4(s32 arg0) {
    return D_80801D88_bsbfly[arg0];
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/bfly/func_8080188C_bsbfly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/bfly/func_808018D0_bsbfly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/bfly/func_808018F4_bsbfly.s")

s32 bsbfly_entrypoint_5(s32 arg0) {
    return D_80801D98_bsbfly[arg0];
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/bfly/func_8080193C_bsbfly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/bfly/func_80801980_bsbfly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/bfly/func_808019A4_bsbfly.s")

s32 bsbfly_entrypoint_6(s32 arg0) {
    return D_80801DA8_bsbfly[arg0];
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/bfly/func_808019EC_bsbfly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/bfly/func_80801A1C_bsbfly.s")

void func_80801A44_bsbfly(PlayerState* self)
{
    _bafly_entrypoint_18();
    func_80800188_bsbfly(self);
}

s32 bsbfly_entrypoint_7(s32 arg0) {
    return D_80801DB8_bsbfly[arg0];
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/bfly/func_80801A80_bsbfly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/bfly/func_80801AEC_bsbfly.s")

void func_80801B80_bsbfly(PlayerState* self)
{
    func_80800188_bsbfly(self);
}

s32 bsbfly_entrypoint_8(s32 arg0) {
    return D_80801DC8_bsbfly[arg0];
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/bfly/func_80801BB4_bsbfly.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/bs/bfly/func_80801C58_bsbfly.s")

void func_80801C9C_bsbfly(PlayerState* self)
{
    _bsdrone_entrypoint_1(self);
}

void func_80801CBC_bsbfly(PlayerState* self)
{
    _bsdrone_entrypoint_2(self);
    func_80800188_bsbfly(self);
}

s32 bsbfly_entrypoint_9(s32 arg0) {
    return D_80801DD8_bsbfly[arg0];
}
