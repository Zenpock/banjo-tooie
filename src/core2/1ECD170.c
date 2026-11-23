#include "core2/1ECD170.h"

typedef struct {
    s32 unk0;
    s32(*unk4)();
} UNKD_801235D0;

extern UNKD_801235D0 D_801235D0[];


void player_destroy(PlayerState* self)
{
    func_80098E64(self);
    heap_free(self);
}

int func_800F38A8(PlayerState* self, s32 arg1)
{
    return
        ((arg1 & 4) && func_800F40EC(self) == 2) ||
        ((arg1 & 2) && func_800F40EC(self) == 1) ||
        ((arg1 & 1) && func_800F3ED0(self) == 0xA);
}

s32 func_800F3930(PlayerState* arg0, s32 arg1, s32 arg2)
{
    s32 sp24;

    sp24 = func_800F38A8(arg0, arg2);
    if (func_800F9184() != 0)
    {
        return 0;
    }
    if (func_800F6774(arg0->unk184) == 0)
    {
        return 0;
    }
    if (func_800F6CC8(arg0->unk184) != 0)
    {
        return 0;
    }
    if (func_8008EF3C(arg0, 0) == 0x13)
    {
        return 0;
    }
    if ((player_isStable(arg0) == 0) && (sp24 == 0))
    {
        return 0;
    }
    if (character_includedInTransformMask(arg0->unk184, ALLOW_CLOCKWORK | ALLOW_GOLDENGOLIATH) != 0)
    {
        return 0;
    }
    if (character_includedInTransformMask(arg0->unk184, arg1) == 0)
    {
        return 0;
    }
    if (baflag_isTrue(arg0, 0x3F) != 0) {
        return 0;
    }
    if (func_8009CA70(arg0, bs_getCurrentState(arg0), 0x20) != 0)
    {
        return 0;
    }
    if (func_800A9C98() != 0)
    {
        return 0;
    }
    return 1;
}

s32 func_800F3A78(PlayerState* self, s32 arg1, s32 arg2)
{
    s32 sp24;

    if (func_800F3930(self, arg1, arg2) == 0)
    {
        return 0;
    }
    if (func_8009E674(self, 0x8000) != 0)
    {
        return 0;
    }
    sp24 = func_800F38A8(self, arg2);
    if ((bastick_distance(self) != 0.0f) && (sp24 == 0))
    {
        return 0;
    }
    if (func_800F5FA8(self->unk184) == 0)
    {
        return 0;
    }
    if (func_800A9C98() != 0)
    {
        return 0;
    }
    return 1;
}

f32 func_800F3B3C(PlayerState* self, f32* arg1, s32 arg2)
{
    s32* sp1C;

    func_8009E154(self, arg2, arg1);
    func_8008E9B8(self, &sp1C);
    return sp1C[arg2];
}

void func_800F3B90(PlayerState* self, f32* arg1) {
    func_800F3B3C(self, arg1, 0);
}

void player_getCoords_Dupe(PlayerState* self, f32* arg1)
{
    player_getCoords(self,arg1);
}

void func_800F3BD0(PlayerState* self, s32 arg1, f32* arg2)
{

    switch (arg1)
    {

    case 1:
        func_80092D44(self, arg2);
        return;
    case 2:
        func_80092E5C(self, arg2);
        return;
    case 3:
        func_80092C00(self, arg2);
        return;
    case 4:
        func_80092C24(self, arg2);
        return;
    case 6:
        func_80092C48(self, arg2);
        return;
    case 5:
        player_getCoords(self, arg2);
        switch (player_getTransformation(self))
        {
        case TRANSFORM_2_SNOWBALL:
            arg2[1] += 85.0f;
            return;
        case TRANSFORM_F_DETONATOR:
            arg2[1] += 90.0f;
            return;
        case TRANSFORM_6_BEE:
            arg2[1] += 85.0f;
            return;
        case TRANSFORM_7_WASHINGMACHINE:
            arg2[1] += 130.0f;
            return;
        case TRANSFORM_E_GOLDENGOLIATH:
            arg2[1] += 575.0f;
            return;
        case TRANSFORM_10_VAN:
            arg2[1] += 130.0f;
            return;
        case TRANSFORM_C_SUB:
            arg2[1] += 45.0f;
            return;
        case TRANSFORM_11_CLOCKWORK:
            arg2[1] += 40.0f;
            return;
        case TRANSFORM_12_TREXSMALL:
            arg2[1] += 130.0f;
            return;
        case TRANSFORM_13_TREXLARGE:
            arg2[1] += 400.0f;
            return;
        case TRANSFORM_B_KAZOOIE:
            arg2[1] += 55.0f;
            return;
        case TRANSFORM_1_BK:
            if ((func_800F40EC(self) == 2) || (func_800F6720(self->unk184) != 0))
            {
                arg2[1] += 70.0f;
                return;
            }
            arg2[1] += 100.0f;
            return;
        default:
            arg2[1] += 100.0f;
            return;
        }
        break;
    case 7:
        func_80092DC0(self, arg2);
        return;
    case 8:
        func_8009C188(self, arg2);
        return;
    case 9:
        func_80092D9C(self, arg2);
        return;
    case 0:
    default:
        player_getCoords_Dupe(self, arg2);
        return;
    }
}

void player_getRotation(PlayerState* self, f32 arg1[3])
{
    arg1[0] = bapitch_get(self);
    arg1[1] = yaw_get(self);
    arg1[2] = baroll_get(self);
}

s32 func_800F3ED0(PlayerState* self)
{
    BanjoStateId curState;

    curState = bs_getCurrentState(self);
    if (baflag_isTrue(self, BA_FLAG_1B_TRANSFORMING) != 0)
    {
        return 0xD;
    }
    if (baflag_isTrue(self, BA_FLAG_17_FIRST_PERSON_VIEW) != 0)
    {
        return 4;
    }
    if (bs_getStateType(self, curState) == BS_STATETYPE_9_FLYING)
    {
        return 0xA;
    }
    if (bs_getStateType(self, curState) == BS_STATETYPE_12_BANSACK)
    {
        return 0xC;
    }
    if (bs_getStateType(self, curState) == BS_STATETYPE_13_BANSHACK)
    {
        return 0xE;
    }
    if (bs_getStateType(self, curState) == BS_STATETYPE_8_STILT)
    {
        return 9;
    }
    if (bs_getStateType(self, curState) == BS_STATETYPE_A_CLIMB)
    {
        return 5;
    }
    if (baflag_isTrue(self, BA_FLAG_9))
    {
        return 1;
    }
    if (func_8009E674(self, 0x80))
    {
        switch (_bashoes_entrypoint_1(self))
        {
        case SHOETYPE_TURBO_TRAINER:
            return 6;
        case SHOETYPE_CLAW_CLAMBER:
            return 0x10;
        case SHOETYPE_SPRINGY_STEP:
            return 0xF;
        }
    }
    switch (curState)
    {
    case 0xE:
    case 0x34:
    case 0x3C:
    case 0x3F:
    case BS_STATE_41_FALL_DEATH:
    case 0x44:
    case 0x120:
        return 1;
    case BS_STATE_1A_WONDERWING_START:
    case BS_STATE_1B_WONDERWING_IDLE:
    case BS_STATE_1C_WONDERWING_WALK:
    case BS_STATE_1D_WONDERWING_JUMP:
    case BS_STATE_1E_WONDERWING_EXIT:
    case 0xA4:
    case 0xA5:
        return 3;
    case BS_STATE_8_TTROT_JUMP:
    case 0x15:
    case BS_STATE_16_TTROT_WALK:
    case BS_STATE_17_TTROT_EXIT:
    case 0x45:
        if (bastatetimer_isActive(self, BA_STATE_TIMER_ID_3_TURBO_TALON) != 0)
        {
            return 6;
        }
        return 8;
    case 0xB:
        return 2;
    default:
        if (func_8008EF3C(self, 0) != 0)
        {
            return 0xB;
        }
        return 0;
    }
}

s32 func_800F40EC(PlayerState* self)
{
    BanjoStateId sp24;
    f32 sp20;

    sp24 = bs_getCurrentState(self);
    if (player_getTransformation(self) == TRANSFORM_C_SUB)
    {
        if (func_80096544(self) == 0)
        {
            return 0;
        }
        sp20 = player_getWaterHeight(self);
        if ((sp20 - player_getGroundHeight(self)) < 50.0f)
        {
            return 0;
        }
    }
    if ((func_8009CA70(self, sp24, 1) != 0) || (func_8009CA70(self, sp24, 0x40000) != 0))
    {
        return 1;
    }
    if (sp24 == BS_STATE_5_JUMP)
    {
        if (_bsjump_entrypoint_16(self) != 0)
        {
            return 1;
        }
        return 0;
    }
    if (func_8009CA70(self, sp24, 2) != 0)
    {
        return 2;
    }
    return 0;
}

void func_800F4200(PlayerState* arg0, f32* arg1) {
    f32 sp24[3];
    f32 sp18[3];

    player_getCoords(arg0, &sp24);
    func_8009C1CC(arg0, &sp18);
    ml_vec3f_sum(arg1, &sp24, &sp18);
}

s32 func_800F4244(PlayerState* self)
{
    return self->unk17C;
}

s32 func_800F424C(PlayerState* self)
{
    u32 charIndex;
    u32 pad1;
    u32 is_clockwork;
    u32 pad2;
    u32 temp3;

    if (self->unk17C == 0)
    {
        return 0;
    }
    if (func_8009E674(self, 4))
    {
        return 0;
    }
    if (func_8009E674(self, 0x2000))
    {
        return 0;
    }
    if (func_8008E124(self))
    {
        return 0;
    }
    if (func_8008E974(self) == 0)
    {
        return 0;
    }
    if (func_800F8004(self->unk184))
    {
        return 0;
    }
    if (func_8008DAA8(self) == 0)
    {
        charIndex = character_getActiveIndex();
        if (charIndex != -1)
        {
            is_clockwork = character_getTransform(charIndex) == TRANSFORM_11_CLOCKWORK;
            temp3 = func_800F6D24(charIndex);
            if (is_clockwork && temp3)
            {
                return 0;
            }
        }
    }
    return 1;
}

s32 func_800F4354(u32 arg0)
{
    if (D_801235D0[arg0].unk0 >= 0)
    {
        return D_801235D0[arg0].unk0;
    }
    D_801235D0[arg0].unk0 = D_801235D0[arg0].unk4();
    return D_801235D0[arg0].unk0;
}

PlayerState* func_800F43A8(s32 arg0)
{
    PlayerState* newPlayerStateMem;
    s32 componentSize;
    s32 temp_v1;
    s32 round;
    s32 playerStateSize;
    u32 idx;

    playerStateSize = 0x19C;
    newPlayerStateMem = heap_alloc(0x19C);
    for (idx = 0; idx < 0x56; idx++)
    {
        //Get Size of each component of PlayerState
        componentSize = func_800F4354(idx);
        //Round up to nearest 4 bytes
        temp_v1 = componentSize % 4;
        if (temp_v1 != 0)
        {
            round = 4 - temp_v1;
        }
        else
        {
            round = 0;
        }
        playerStateSize = playerStateSize + componentSize + round;
        newPlayerStateMem = heap_realloc(newPlayerStateMem, playerStateSize);
    }
    bzero(newPlayerStateMem, playerStateSize);
    playerStateSize = 0x19C;
    for (idx = 0; idx < 0x56; idx++)
    {
        *(s32*)((s32*)newPlayerStateMem + idx) = (u8*)newPlayerStateMem + playerStateSize;
        //Get Size of each component of PlayerState
        componentSize = func_800F4354(idx);
        temp_v1 = componentSize % 4;
        if (temp_v1 != 0)
        {
            round = 4 - temp_v1;
        }
        else
        {
            round = 0;
        }
        playerStateSize = playerStateSize + componentSize + round;
    }
    newPlayerStateMem->unk180 = 0;
    newPlayerStateMem->unk184 = arg0;
    func_80098C48(newPlayerStateMem);
    func_800F44DC(newPlayerStateMem, 1);
    return newPlayerStateMem;
}

void func_800F44DC(PlayerState* self, s32 arg1)
{
    s32 temp_a0;
    s32 var_a1;

    self->unk17C = arg1;
    temp_a0 = func_800A4C88(self);

    if (arg1 != 0)
    {
        var_a1 = 2;
    }
    else
    {
        var_a1 = 1;
    }
    func_8010F9C0(temp_a0, var_a1);
}

void func_800F4524(PlayerState* self, s32 arg1)
{
    self->unk180 = arg1;
}

void func_800F452C(PlayerState* self, f32* arg1)
{
    func_8009C0BC(self, arg1);
    func_80095C94(self);
    func_800A10A0(self);
    func_800A4030(self);
    func_800A4B08(self);
    func_800A380C(self);
}

void func_800F457C(PlayerState* arg0, s32 arg1)
{
	if (arg1 == 0) {
		func_8009CCA4(arg0);
		return;
	}
	func_8009CCFC(arg0,arg1);
}

void func_800F45B0(PlayerState* self, s32 arg1, f32* arg2)
{
    func_8009CCFC(self, arg1);
    func_8009CD70(self, arg2);
}

void player_setRotation(PlayerState* self, f32 arg1[3])
{
    bapitch_setIdeal(self, arg1[0]);
    yaw_setIdeal(self, arg1[1]);
    baroll_setIdeal(self, arg1[2]);
    bapitch_applyIdeal(self);
    yaw_applyIdeal(self);
    baroll_applyIdeal(self);
}

void func_800F4648(PlayerState* self, f32 arg1[3])
{
    f32 sp24[3];
    f32 sp18[3];

    player_getCoords(self, sp24);
    ml_getdiff_vec3f(sp18, arg1, sp24);
    func_8009C1F8(self, sp18);
}

void func_800F468C(PlayerState* self)
{
    if ((self->unk17C != 0) && (self->unk180 == 0) && (func_800EA09C() == 2))
    {
        func_800991B0(self);
    }
}

//PlayerState defrag
PlayerState* func_800F46D8(PlayerState* self)
{
    s32 temp_t0;
    s32 diff;
    PlayerState* old_self;
    func_80099544(self);
    old_self = self;
    self = defrag(self);
    if (old_self == self)
    {
        return self;
    }
    diff = (u8*)self - (u8*)old_self;
    for (temp_t0 = 0; temp_t0 < 0x56; temp_t0++)
    {
        *(s32*)((s32*)self + temp_t0) += diff;
    }
    return self;
}