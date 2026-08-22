#include "core2/1E66990.h"

extern f32 D_80124AD4;

//Can Beak Barge
int func_8008D0A0(PlayerState* arg0)
{
    return ability_getValue(0) && (func_800A3304(arg0) != 0);
}

//Can Beak Bomb
int func_8008D0E0(PlayerState* arg0)
{
    return ability_getValue(0x1) && baflag_isFalse(arg0, 0x39) && (func_800A3304(arg0) || func_800A3274(arg0) == TRANSFORM_B_KAZOOIE);
}

//Can Beak Bust
int func_8008D14C(PlayerState* arg0) {
    return ability_getValue(0x2) && (func_800A3304(arg0) != 0);
}


int func_8008D18C(PlayerState* arg0)
{
    return ability_getValue(0x3);
}

//Can Peck
int func_8008D1B0(PlayerState* arg0) {
    return ability_getValue(0x4) && (func_800A3304(arg0) != 0);
}

//Can Climb
int func_8008D1F0(PlayerState* arg0)
{
    return ability_getValue(0x5);
}

//Can Dive
int func_8008D214(PlayerState* arg0) {

    return ability_getValue(0xF) && func_800964DC(arg0) - func_80096364(arg0) > 100.0f;

}

//Can Use Eggs
s32 func_8008D280(PlayerState* arg0)
{
    enum transform_e temp_v0;

    if (ability_getValue(6) == 0)
    {
        return 0;
    }
    if (flag_getValue(FLAG2_6B6_UNK) != 0)
    {
        return 0;
    }
    temp_v0 = func_800A3274(arg0);
    if (((temp_v0 == TRANSFORM_1_BK) || (temp_v0 == TRANSFORM_A_BANJO)) && (func_800A3304(arg0) == 0)) {
        return 0;
    }
    return 1;
}

//Can use feathery flap
int func_8008D304(PlayerState* arg0) {
    return baflag_isFalse(arg0, BA_FLAG_12_HAS_FLAPPED)
        && baflag_isFalse(arg0, BA_FLAG_5_HAS_PECKED)
        && ability_getValue(7)
        && func_800A3304(arg0);
}

//Can use flap flip
int func_8008D370(s32 arg0) {
    return ability_getValue(8) && func_800A3304(arg0);
}

//Can Fly
int func_8008D3B0(PlayerState* arg0) {
    return baflag_isTrue(arg0, BA_FLAG_1_ON_FLIGHT_PAD) && ability_getValue(9) && func_800F64A4(arg0->unk184, ALLOW_KAZOOIE | ALLOW_BK);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E66990/func_8008D40C.s")

//Can Full Jump Height
s32 func_8008D544(PlayerState* arg0)
{
    return ability_getValue(0xA);
}

//Can Pack Whack
int func_8008D568(PlayerState* arg0) {
    return ability_getValue(0x29) != 0 && baflag_isFalse(arg0, BA_FLAG_5_HAS_PECKED) != 0 && baflag_isFalse(arg0, BA_FLAG_12_HAS_FLAPPED) != 0;
}

//Can Rat a Tat Rap
int func_8008D5C4(PlayerState* arg0) {
    return baflag_isFalse(arg0, BA_FLAG_5_HAS_PECKED)
        && baflag_isFalse(arg0, BA_FLAG_12_HAS_FLAPPED)
        && ability_getValue(0xB)
        && func_800A3304(arg0);
}

s32 func_8008D630(PlayerState* arg0) {
    if ((baflag_isTrue(arg0, BA_FLAG_14_LOSE_BOGGY_RACE) != 0) || (baflag_isTrue(arg0, BA_FLAG_19) != 0))
    {
        return 0;
    }
    if (bs_getCurrentState(arg0) == 0x56)
    {
        return 0;
    }
    return 1;
}

//Can Roll
int func_8008D694(s32 arg0)
{
    return ability_getValue(0xC) && func_800A3304(arg0);
}

//Can Shock Spring Jump
int func_8008D6D4(PlayerState* arg0) {
    return ability_getValue(0xD) && func_800A3304(arg0);
}


int func_8008D714(PlayerState* arg0)
{
    return _baduo_entrypoint_3(arg0) && func_800A3304(arg0);
}

//Can Wading Boots
int func_8008D750(PlayerState* arg0) {
    return ability_getValue(0xE) && func_800A3304(arg0);
}

int func_8008D790(PlayerState* arg0) {
    return _baduo_entrypoint_4(arg0)
        && func_8008E39C(arg0) == 0
        && player_isStable(arg0) != 0
        && func_800C954C() == 0
        && func_800DB9B0() == 0
        && func_800F8004(arg0->unk184) == 0
        && func_800F6D24(arg0->unk184) == 0
        && baflag_isFalse(arg0, 0x34) != 0;
}

//Can Talon Torpedo
s32 func_8008D850(PlayerState* arg0)
{
    f32 sp1C[3];

    if ((ability_getValue(0x1E) != 0) && (func_800A3304(arg0) != 0) && (_bafpctrl_entrypoint_5(arg0) == 0))
    {
        func_8009C128(arg0, sp1C);
        //Restrict Talon Torpedo when in the waterfall
        if ((func_800EA05C() == MAP_117_TDL_RIVER_PASSAGE) && (sp1C[2] < D_80124AD4))
        {
            return 0;
        }
        return 1;
    }
    return 0;
}

//Can Talon Trot
int func_8008D8E4(PlayerState* arg0) {
    return ability_getValue(0x10) && func_800A3304(arg0);
}

//Can Talon Trot Duplicate?
int func_8008D924(PlayerState* arg0) {
    return ability_getValue(0x10) && func_800A3304(arg0);
}

//Can Wonderwing
int func_8008D964(PlayerState* arg0) {
    return ability_getValue(0x12) && func_800A3304(arg0);
}

s32 func_8008D9A4(PlayerState* arg0) {
    if (_ncba1p_entrypoint_10(func_800A4CA8(arg0)) == 3) {
        return 0;
    }
    if (func_800A4D40(arg0) == 0) {
        return 0;
    }
    if ((player_isStable(arg0) == 0) && (player_inWater(arg0) == 0)) {
        return 0;
    }
    return 1;
}

//Can Grip Grab
int func_8008DA24(PlayerState* arg0) {
    return ability_getValue(0x14)
        && baphysics_get_vertical_velocity(arg0) < 100.0f
        && func_800A0FCC(arg0) == 0
        && func_800976DC(arg0) != 0;
}

s32 func_8008DAA8(PlayerState* arg0) {
    return func_800F65D0(arg0->unk184);
}

s32 func_8008DAC8(s32 arg0) {
    return func_800DB9B0();
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E66990/func_8008DAE8.s")

int func_8008DC90(PlayerState* arg0, f32* arg1, f32 arg2)
{
    f32 sp2C[3];
    f32 sp20[3];
    f32 sp18[2];

    func_8009C128(arg0, sp20);
    func_8008FF40(sp2C);
    func_800F18FC(sp20, arg1, sp18);
    return func_800F20BC(sp2C[0], sp18[0], arg2) && func_800F20BC(sp2C[1], sp18[1], arg2);
}

int func_8008DD04(PlayerState* arg0)
{
    return (func_8009C150(arg0) - func_80096364(arg0)) > 60.0f
        && player_isStable(arg0) == 0;
}

s32 func_8008DD70(s32 arg0)
{
    return func_8009E71C(arg0,0x5);
}

s32 func_8008DD90(PlayerState* arg0) {
    if (func_8009E674(arg0, 0x10) != 0)
    {
        return 1;
    }
    if (func_8009E674(arg0, 8) != 0) {
        return _badrone_entrypoint_1(arg0) == 0;
    }
    return 0;
}

void func_8008DDEC(PlayerState* arg0, s32 arg1, f32 arg2) 
{
    f32 sp1C[3];

    func_8009C128(arg0, sp1C);
    func_800F0064(arg1, arg2, sp1C);
}

s32 func_8008DE24(PlayerState* arg0)
{
    return func_80096568(arg0,0xE00);
}

s32 func_8008DE44(s32 arg0) {
    return 0;
}

s32 func_8008DE50(PlayerState* arg0) {
    return func_80096694(arg0) == 3;
}

s32 func_8008DE74(PlayerState* arg0) {
    return func_8009CA70(arg0, bs_getCurrentState(arg0), 0x4000);
}

int func_8008DEA4(PlayerState* arg0, f32* arg1, f32 arg2)
{
    f32 sp1C[3];

    func_8009C128(arg0, sp1C);
    return ((arg1[1] - arg2) <= sp1C[1]) && (sp1C[1] <= (arg1[1] + arg2));

}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E66990/func_8008DF18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E66990/func_8008DF8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E66990/player_isStable.s")

s32 func_8008E0C8(s32 arg0)
{
    return _bapackctrl_entrypoint_1(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E66990/func_8008E0E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E66990/func_8008E124.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E66990/func_8008E148.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E66990/func_8008E1A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E66990/func_8008E1C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E66990/func_8008E23C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E66990/func_8008E260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E66990/func_8008E2AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E66990/func_8008E300.s")

s32 player_inWater(PlayerState* arg0)
{
    return func_800A0FD8(arg0);
}

s32 func_8008E37C(PlayerState* self)
{
    func_800A0FE4(self);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E66990/func_8008E39C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E66990/func_8008E3E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E66990/func_8008E40C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E66990/func_8008E430.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E66990/func_8008E454.s")
