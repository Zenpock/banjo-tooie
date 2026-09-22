#ifndef __BANJOSTATE_H__
#define __BANJOSTATE_H__

#include "common.h"

#include "buttons.h"
#include "core1/mlmtx.h"

typedef struct ba_unknown_c_s {
    u8 pad0[0xC];
    s32 unkC[3];
    u8 pad18[4];
} BaUnknownC;

typedef struct ba_unknown_2C_s {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    f32 unkC[3];
    u8 unk18;
    u8 unk19;
    u8 unk1A;
} BaUnknown2C;

typedef struct {
    s32 unk0;
    Vec3f unk4[0x17];
} UNKfunc_800DBEB0_ARG0;

typedef struct ba_unknown_38_s {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    f32 unk2C;
    f32 unk30;
    s16 unk34;
    s16 unk36;
    u8 pad38;
    u8 unk39;
    u8 unk3A;
    u8 unk3B;
    s32 unk3C;
} ba_unknown_38_s;

typedef struct ba_unknown_50_s {
    u16 unk0;
    u16 unk2;
    UNKfunc_800DBEB0_ARG0* unk4;
    s32 unk8;
    s16 unkC;
    s16 unkE;
    u8 unk10;
    u8 unk11;
    u8 unk12;
    u8 unk13;
    u8 unk14;
    u8 unk15;
    u8 unk16;
    u8 unk17;
    u8 unk18;
    u8 unk19;
    u8 unk1A;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
    f32 unk2C[3];
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44[3];
    s32 unk50[3];
    f32 unk5C;
    f32 unk60;
    s32 unk64[3];
    f32 unk70;
    f32 unk74;
    f32 unk78;
    u8 unk7C;
    u8 unk7D;
    u8 unk7E;
    u8 unk7F;
    u8 unk80;
    u8 unk81;
    u8 unk82;
    u8 unk83;
    s32 unk84;
    u8 unk88;
    u8 unk89;
    u8 unk8A;
    u8 unk8B;
    u8 unk8C;
    u8 unk8D;
    u8 unk8E;
    u8 unk8F;
    u16 unk90;
    u16 unk92;
    s32 unk94;
    f32 unk98;
    s16 unk9C;
    s16 unk9E;
    u8 unkA0;
    u8 unkA1;
    u8 unkA2;
    u8 unkA3;
    s8 unkA4;
    s8 unkA5;
    s8 padA6[0x1E];
    u8 unkC4;
    u8 unkC5;
    u8 unkC6;
    u8 unkC7;
    f32 unkC8;
    MtxF unkCC;
} BaUnknown50;
typedef struct ba_unk54_s {
	u8 unk0;
	u8 unk1;
	u8 unk2;
	u8 unk3;
	u8 unk4;
	u8 unk5;
	u8 unk6;
	u8 unk7;
	f32 unk8;
	f32 unkC;
	f32 unk10[3];
	void* (*unk1C)(s32,s32,s32);
	s32 unk20;
	f32 unk24[3];
    u8 unk30;
    u8 unk31;
    u8 unk32;
    u8 unk33;
    f32 unk34[3];
	s32 unk40;
	s32 unk44;
	s32 unk48;
} BaUnknown54;
typedef struct ba_dust_s {
    s32 unk0;
    s32 unk4;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
} BaDust;
typedef struct ba_cursor_s {
    f32 unk0;
    f32 unk4;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 unkB;
    f32 unkC;
    s8 unk10;
    s8 unk11;
    s8 unk12;
    s8 unk13;
    s32 unk14;
    f32 unk18;
} BaCursor;
typedef struct ba_unknown_6C_s {
	f32 unk0;
	s32 unk4;
	s32 unk8;
	s32 unkC;
	u8 unk10;
	u8 unk11;
	u8 unk12;
	u8 unk13;
} BaUnknown6C;

typedef struct ba_unknown_8C_s {
    f32 unk0;
    f32 unk4;
    u8 unk8;
    u8 unk9;
    s8 unkA;
    s8 unkB;
    s16 unkC;
    u8 unkE;
} BaUnknown8C;

typedef struct ba_hold_s {
    f32 unk0;
    f32 unk4;
    s32 unk8;
    u8 unkC;
    s8 unkD;
    s8 unkE;
    s8 unkF;
    s8 unk10;
    s8 unk11;
    s8 unk12;
    s8 unk13;
    s32 unk14;
    f32 unk18;
} BaHold;

typedef struct ba_unknown_C8_s {
    s32 unk0;
    f32 unk4[3];
    f32 unk10[3];
    f32 unk1C[3];
    f32 unk28[3];
    f32 unk34[3];
    f32 unk40[3];
    f32 unk4C[3];
    u8 pad58[0x54];
    f32 unkAC[3];
    f32 unkB8[3];
} ba_unknown_C8_s;

typedef struct ba_unknown_134_s {
    f32 unk0;
    f32 unk4;
} BaUnknown134;

typedef struct ba_deathmatch_s {
    s16 unk0[4];
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    u8 unk20;
    u8 unk21;
    u8 unk22;
    u8 unk23;
} BaDeathmatch;

typedef struct bs_kazfly_s {
    f32 unk0;
    f32 unk4[3];
    f32 unk10[3];
    u8 unk1C;
} BsKazFly;

typedef struct bs_firstp_s {
    s32 unk0;
    f32 unk4[3];
    f32 unk10[2];
	f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    s32 unk28;
    f32 unk2C[3];
    f32 unk38[3];
    f32 unk44[3];
    f32 unk50;
    f32 unk54;
    f32 unk58;
    f32 unk5C;
    f32 unk60;
    u8 pad64[0x28];
    s32 unk8C;
    f32 unk90;
    u8 pad94[0x4C];
    s16 unkE0;
    s16 unkE2;
    s16 unkE4;
    s16 unkE6;
    s16 unkE8;
    s16 unkEA;
    u8 padEC[0x120];
    f32 unk20C;
} BsFirstP;

typedef struct player_state_s {
    /* 0x00 */ struct ba_alarm_s *alarm;
    /* 0x04 */ struct ba_anim_s *anim;
    /* 0x08 */ struct ba_attach_s *attach;
    /* 0x0C */ struct ba_unknown_c_s *unkC; // baavatar? from BK XBox debug strings?
    /* 0x10 */ struct ba_babykaz_s *babykaz;
    /* 0x14 */ struct ba_backpack_s *backpack;
    u8 pad18[0x4];
    /* 0x1C */ struct ba_bee_s *bee;
    /* 0x20 */ struct ba_unknown_20_s *unk20;
    /* 0x24 */ struct ba_boost_s *boost;
    /* 0x28 */ struct ba_bounce_s *bounce;
    /* 0x2C */ struct ba_unknown_2C_s *unk2C; //something with camera
    u8 pad30[0x4];
    /* 0x34 */ struct ba_buzz_s *buzz;
    /* 0x38 */ struct ba_unknown_38_s *unk38;
    /* 0x3C */ struct ba_state_timer_list_s *state_timer; // clock?
    /* 0x40 */ struct ba_key_s *key; // controller?
    /* 0x44 */ struct ba_cough_s *cough;
    u8 unk48;
    u8 pad49[0x7];
    struct ba_unknown_50_s* unk50;
    /* 0x54 */  BaUnknown54* unk54;
    u8 pad58[0x4];
    /* 0x5C */ BaDust* dust;
    u8 pad60[0x4];
    u8* unk64;
    /* 0x68 */ BaCursor* cursor;
	struct ba_unknown_6C_s* unk6C;
	u8 pad70[0x10];
    /* 0x80 */ struct ba_flag_s *flag;
    u8 pad84[0x8];
    /* 0x8C */ struct ba_unknown_8C_s* unk8C;
    u8 pad90[0xC];
    /* 0x9C */ BaHold* hold;
    u8 padA0[0x4];
    /* 0xA4 */ struct ba_input_s *input;
    u8 padA8[0x18];
    /* 0xC0 */ struct ba_unknown_C0_s *unkC0; // 1E72EA0
    /* 0xC4 */ u8 *unkC4;
    /* 0xC8 */ struct ba_unknown_C8_s *unkC8;
    u8 padCC[0xF4 - 0xCC];
    /* 0xF4 */ struct ba_roll_s *roll;
    /* 0xF8 */ struct ba_yaw_s *yaw;
    u8 padFC[0x24];
    /* 0x120 */ struct bs_state_s *state;
    u8 pad124[4];
    /* 0x128 */ struct ba_stick_s *stick;
    u8 pad12C[0x8];
    /* 0x134 */ BaUnknown134* swim;
    u8 pad138[0x4];
    /* 0x13C */ struct ba_timer_s *timer;
    /* 0x140 */ struct ba_translate_s *translate;
    /* 0x144 */ struct ba_van_s *van;
    /* 0x148 */ struct ba_wandglow_s *wandglow;
    /* 0x14C */ struct ba_washer_s *washer;
    u8 pad150[0x4];
    /* 0x154 */ struct ba_wobble_s *wobble;
    /* 0x158 */ BaDeathmatch* deathmatch;
    union {
        s32 word;
        u8 bytes[4];
    } unk15C; // Some sort of state
    union {
        s32 word;
        u8 bytes[4];
    } unk160;
    union {
        s32 word;
        u8 bytes[4];
    } unk164;
    union {
        s32 word;
        u8 bytes[4];
    } unk168;
    f32 unk16C;
    f32 unk170;
    f32 unk174;
    f32 unk178;
    s32 unk17C;
    s32 unk180;
    s32 unk184;
    union var188 {
        /* 0x188 */ BsKazFly* kazfly;
        /* 0x188 */ BsFirstP* firstp;
    };
    s32 unk18C;
    u8 unk190;
    u8 unk191;
} PlayerState;
#endif
