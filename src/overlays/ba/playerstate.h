#ifndef __BANJOSTATE_H__
#define __BANJOSTATE_H__

#include <ultra64.h>

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

typedef struct ba_unknown_50_s {
    u16 unk0;
    u16 unk2;
    s32 unk4;
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

typedef struct ba_unknown_8C_s {
    f32 unk0;
    f32 unk4;
    s8 unk8;
    s8 unk9;
    s8 unkA;
    s8 unkB;
    s16 unkC;
    u8 unkE;
} BaUnknown8C;

typedef struct player_state_s {
               struct ba_alarm_s *alarm;
               struct ba_anim_s *anim;
               struct ba_attach_s *attach;
               struct ba_unknown_c_s *unkC;
               struct ba_babykaz_s *babykaz;
               struct ba_backpack_s *backpack;
    u8 pad18[0x4];
               struct ba_bee_s *bee;
               struct ba_unknown_20_s *unk20;
               struct ba_boost_s *boost;
               struct ba_bounce_s *bounce;
               struct ba_unknown_2C_s *unk2C;
    u8 pad30[0x4];
               struct ba_buzz_s *buzz;
    u8 pad38[0x4];
               struct ba_state_timer_list_s *state_timer;
               struct ba_key_s *key;
               struct ba_cough_s *cough;
    u8 pad48[0x8];
    struct ba_unknown_50_s* unk50;
    u8 pad54[0x10];
    u8* unk64;
    u8 pad68[0x18];
               struct ba_flag_s *flag;
    u8 pad84[0x8];
               struct ba_unknown_8C_s* unk8C;
    u8 pad90[0xC];
               struct ba_unk_9C* unk9C;
    u8 padA0[0x4];
               struct ba_input_s *input;
    u8 padA8[0x18];
               struct ba_unknown_C0_s *unkC0;
    u8 padC4[0x30];
               struct ba_roll_s *roll;
               struct ba_yaw_s *yaw;
    u8 padFC[0x24];
                struct bs_state_s *state;
    u8 pad124[4];
                struct ba_stick_s *stick;
    u8 pad12C[0x10];
                struct ba_timer_s *timer;
                struct ba_translate_s *translate;
                struct ba_van_s *van;
                struct ba_wandglow_s *wandglow;
                struct ba_washer_s *washer;
    u8 pad150[0x4];
                struct ba_wobble_s *wobble;
    u8 pad158[0x4];
    union {
        s32 word;
        u8 bytes[4];
    } unk15C;
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
    s32 unk178;
    s32 unk17C;
    s32 unk180;
    s32 unk184;
                struct bs_kazfly_s *kazfly;
} PlayerState;

#endif
