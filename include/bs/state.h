#ifndef __BS_STATE_H__
#define __BS_STATE_H__

#include "ba/playerstate.h"

// TODO validate that the rest of these state
typedef enum bs_state_e {
    BS_STATE_0_INVALID = 0x0,
    BS_STATE_1_IDLE,
    BS_STATE_1_SLOW_WALK,

    BS_STATE_5_JUMP = 0x5,

    BS_STATE_7_CROUCH = 0x7,
    BS_STATE_8_TTROT_JUMP=0x8,

    BS_STATE_F_BBUSTER = 0xF,
    BS_STATE_14_TTROT_ENTER = 0x14,
    BS_STATE_16_TTROT_WALK = 0x16,
    BS_STATE_17_TTROT_EXIT = 0x17,
    BS_STATE_20_LANDING = 0x20,

    BS_STATE_24 = 0x24, // Fly

    BS_STATE_2F_FALL = 0x2F,
    BS_STATE_30_DIVE = 0x30,
    BS_STATE_3D_FALL_TUMBLING = 0x3D,

    BS_STATE_48 = 0x48,
    BS_STATE_49,
    BS_STATE_4A,
    BS_STATE_4B,
    BS_STATE_4C_LANDING_IN_WATER,
    BS_STATE_4D,

    BS_STATE_57 = 0x57,

    BS_STATE_67 = 0x67,
    BS_STATE_68,

    BS_STATE_72 = 0x72,

    BS_STATE_77 = 0x77,

    BS_STATE_84 = 0x84,

    BS_STATE_95 = 0x95,

    BS_STATE_A6 = 0xA6,
    BS_STATE_A7,
    BS_STATE_A8,
    BS_STATE_A9,
    BS_STATE_AA,
    BS_STATE_AE_STONY_JUMP = 0xAE,
    BS_STATE_B2_STONY_WALK = 0xB2,
    BS_STATE_B3_STONY_IDLE = 0xB3,
    BS_STATE_B4_STONY_ATTACK = 0xB4,
    BS_STATE_B6_BILL_DRILL = 0xB6,

    BS_STATE_BB = 0xBB,
    BS_STATE_BC,
    BS_STATE_BD,
    BS_STATE_BE,
    
    BS_STATE_C1 = 0xC1,
    BS_STATE_C2,
    BS_STATE_C3,
    BS_STATE_C4,
    BS_STATE_C5,
    BS_STATE_C6,
    BS_STATE_C7,
    BS_STATE_C8_FP_ENTER_SLOW = 0xC8,
    BS_STATE_C9_PUTTING_AWAY_FP_KAZOOIE,
    BS_STATE_CA_FP_IDLE =0xCA,
    BS_STATE_CB_FP_ENTER_FAST = 0xCB,
    BS_STATE_CC_PUT_AWAY_KAZ_FAST = 0xCC,
    BS_STATE_CE_3P_KAZ_GUN_WALK = 0xCE,
    BS_STATE_D1_FP_WALK = 0xD1,
    BS_STATE_D2_BEAK_BAYONET = 0xD2,
    BS_STATE_D6_FP_HEAVY_EGG_FIRE = 0xD6,
    BS_STATE_D8_FP_EGG_FIRE = 0xD8,
    BS_STATE_D9_FP_FROZEN = 0xD9,
    BS_STATE_DA_FP_HURT = 0xDA,
    BS_STATE_DB_FP_SMALL_DIE = 0xDB,
    BS_STATE_DC_FP_EXPLODE_DIE = 0xDC,
    BS_STATE_DD = 0xDD,
    BS_STATE_DE,
    BS_STATE_DF,
    BS_STATE_E0,

    BS_STATE_E5 = 0xE5,
    BS_STATE_E6, // stick zone = 1 => move somewhere
    BS_STATE_E7, // stick zone = 2 => move somewhere
    BS_STATE_E8, // maybe jump
    BS_STATE_E9,

    BS_STATE_EB = 0xEB,

    BS_STATE_EE = 0xEE,
    BS_STATE_EF,
    BS_STATE_F0,
    BS_STATE_F1,
    
    BS_STATE_F4 = 0xF4,
    
    BS_STATE_F7 = 0xF7, // maybe attack

    BS_STATE_FF = 0xFF,

    BS_STATE_101 = 0x101,

    BS_STATE_11E = 0x11E,

    BS_STATE_154 = 0x154,
    BS_STATE_155,

    BS_STATE_159 = 0x159,
    BS_STATE_15A,
    BS_STATE_15B,
    BS_STATE_15C,
    BS_STATE_15D,
    BS_STATE_15E,
    BS_STATE_15F,
    BS_STATE_160,
    BS_STATE_161,
    BS_STATE_162,

    BS_STATE_173 = 0x173,
    BS_STATE_174,
    BS_STATE_175,
    BS_STATE_176,
    BS_STATE_177,

    BS_STATE_186 = 0x186,
    BS_STATE_187,
    BS_STATE_188,

    BS_STATE_18B = 0x18B
} BanjoStateId;

typedef struct bs_state_s {
    /* 0x00 */ BanjoStateId previous;
    /* 0x04 */ BanjoStateId current;
    /* 0x08 */ BanjoStateId next;
    /* 0x0C */ s16 unkC;
} BanjoState;

BanjoStateId bs_getTypeOfJump(PlayerState *self);
void bs_setState(PlayerState *self, BanjoStateId nextState);

#endif // __BS_STATE_H__
