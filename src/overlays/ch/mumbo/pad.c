#include "ch/mumbo/pad.h"

extern s16 D_80801086_chmumbopad[][2];
extern s16 D_808010C8_chmumbopad[];
extern s16 D_808010EC_chmumbopad[];
extern ActorData D_80801110_chmumbopad;

void func_80800674_chmumbopad(Actor*, s32);
void func_808008CC_chmumbopad(Actor*, s32);

s16 chmumbopad_entrypoint_0(s32 arg0)
{
    return D_80801086_chmumbopad[arg0][0];
}

void func_80800014_chmumbopad(s32 arg0, f32* arg1, PropId arg2)
{
    _gspropctrl_entrypoint_11(_gccubesearch_entrypoint_1(arg2, arg1), arg1);
}

s32 func_80800048_chmumbopad(Actor* arg0)
{
    s16 temp_a1;

    temp_a1 = D_808010C8_chmumbopad[arg0->unk6C_0];
    if (temp_a1 != -1)
    {
        return flag_getValue((enum flag_e)temp_a1);
    }
    return 0;
}

int func_80800098_chmumbopad(Actor* arg0)
{
    s16 temp_a0;

    switch (arg0->unk6C_0)
    {
    case 12:
        return flag_getValue(FLAG_358_UNK) && flag_getValue(FLAG_359_UNK);
    case 13:
        return flag_getMultipleValue(FLAG_1CA_PROGRESS_SABREMAN_STATE_1, 2) != 0;
    default:
        temp_a0 = D_808010EC_chmumbopad[arg0->unk6C_0];
        if (temp_a0 != -1)
        {
            return flag_getValue(temp_a0);
        }
        break;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/ch/mumbo/pad/func_80800140_chmumbopad.s")

void func_8080044C_chmumbopad(Actor* arg0)
{
    u32 temp_t6;

    switch (arg0->unk70_10)
    {
    case 1:
        if (!(arg0->unk74_29))
        {
            func_80103110(arg0, 0U);
            if (func_80800098_chmumbopad(arg0) != 0)
            {
                _subaddiefade_entrypoint_3(arg0);
                func_80101FDC(arg0, 3U);
            }
        }
        arg0->unk74_29 = 0;
        return;
    case 2:
        if (!(arg0->unk74_29))
        {
            _subaddiefade_entrypoint_3(arg0);
            func_80101FDC(arg0, 3U);
        }
        arg0->unk74_29 = 0;
        return;
    }
}

s32 func_80800514_chmumbopad(Actor* arg0, s32 arg1, s32 arg2)
{

    switch (arg1)
    {
    case EVENT_91_ACTOR_STOOD_ON:

        if (!(arg0->unk64_19) && !(arg0->unk74_29) && !(arg0->unk0->unk28_13))
        {
            func_808008CC_chmumbopad(arg0, arg2);
        }
        func_80103110(arg0, 1U);
        break;
    case 0x32:
        func_80800674_chmumbopad(arg0, arg2);
        break;
    case 0xBB:
        if (arg2 == (arg0->unk6C_0))
        {
            arg0->unk0->unk28_13 = 0;
        }
        break;
    case EVENT_2E_ACTOR_DIALOG_ENDED:
        if (((s16*)&arg2)[0] == ASSET_11DE_TEXT_HOPETHISWORKS)
        {
            _chintrotext_entrypoint_1(ASSET_18BD_TEXT_MAGICTITLES, arg0->unk6C_0, 0, 1);
            arg0->unk64_19 = 0;
        }
    default:
        return 0;
    }
    return 1;
}

void func_8080063C_chmumbopad(Actor* arg0, s32 charIndex)
{
    func_800F7874(charIndex, arg0->unk0, arg0->position);
    func_800F5FA8(charIndex);
}

void func_80800674_chmumbopad(Actor* arg0, s32 arg1)
{
    func_800F7CF4(arg1, 0x43, (f32*)arg0->actorData);
    func_800C067C(ASSET_11DD_TEXT_PRESSBTOMUMBO);
    if (func_80800048_chmumbopad(arg0) == 0)
    {
        _subaddiedialog_entrypoint_11(arg0->unk0, ASSET_11DE_TEXT_HOPETHISWORKS, 6U, arg0->position, 0U);
        arg0->unk64_19 = 1;
    }
    arg0->unk64_20 = 1;
    arg0->unk74_30 = 0;
    func_800C067C(ASSET_11DD_TEXT_PRESSBTOMUMBO);
    switch (arg0->unk6C_0)
    {
        case 2:
            arg0->unk64_20 = 0;
            break;
        case 3:
            event_sendToActorsOfType(0x337, 0xA, 0);
            break;
        case 4:
            event_sendToActorsOfType(0x39D, 0xA, 0);
            break;
        case 5:
            event_sendToActorsOfType(0x39C, 0xA, 0);
            break;
        case 6:
            event_sendToActorsOfType(0x297, EVENT_4B_MUMBO_MAGIC, 0);
            break;
        case 7:
            event_sendToActorsOfType(0x292, EVENT_4B_MUMBO_MAGIC, 0);
            break;
        case 8:
            event_sendToActorsOfType(PROP_28E_SWAMP_PLATFORM, EVENT_4B_MUMBO_MAGIC, 8);
            break;
        case 9:
            event_sendToActorsOfType(PROP_28D_WUMBA_WIGWAM, EVENT_4B_MUMBO_MAGIC, 9);
            arg0->unk64_20 = 0;
            break;
        case 11:
            event_sendToActorsOfType(0x3EE, EVENT_4B_MUMBO_MAGIC, 0);
            arg0->unk64_20 = 0;
            break;
        case 10:
            event_sendToActorsOfType(0x3F5, EVENT_4B_MUMBO_MAGIC, 0);
            arg0->unk64_20 = 0;
            break;
        case 12:
            event_sendToActorsOfType(0x40E, EVENT_4B_MUMBO_MAGIC, 0xC);
            arg0->unk64_20 = 0;
            break;
        case 13:
            event_sendToActorsOfType(0x346, EVENT_4B_MUMBO_MAGIC, 0);
            break;
        case 14:
            event_sendToActorsOfType(0x45A, EVENT_4B_MUMBO_MAGIC, 0);
            break;
        case 15:
            event_sendToActorsOfType(0x457, EVENT_4B_MUMBO_MAGIC, 0);
            break;
        case 16:
            event_sendToActorsOfType(0x4D8, EVENT_4B_MUMBO_MAGIC, 0);
            break;
        case 0:
        case 1:
        default:
            break;
    }
    if (arg0->unk64_20);
    arg0->unk0->unk28_13 = arg0->unk64_20 < 1;
}
void func_808008CC_chmumbopad(Actor* arg0, s32 charIndex)
{
    s32 sp30[6];

    if (character_getActiveIndex() == charIndex)
    {
        if (character_getTransform(charIndex) == TRANSFORM_D_MUMBO)
        {
            func_80015E80(0, &sp30);
            arg0->unk74_29 = 1;
            if (flag_getValue(FLAG_09B_FTT_MUMBO_PAD_INSTRUCTIONS) == 0)
            {
                flag_setValueTrue(FLAG_09B_FTT_MUMBO_PAD_INSTRUCTIONS);
                _subaddiedialog_entrypoint_11(arg0->unk0, ASSET_11DD_TEXT_PRESSBTOMUMBO, 6U, arg0->position, 0U);
            }
            if ((sp30[1] == 1) && !(arg0->unk64_20) && (flag_getValue(FLAG3_9DE_UNK) == 0))
            {
                switch (arg0->unk6C_0)
                {
                    case 0:
                        if (flag_getValue(FLAG_095_PROGRESS_MUMBO_MAGIC_LEVITATE_CHUFFY_RAISED) == 0)
                        {
                            func_8080063C_chmumbopad(arg0, charIndex);
                            return;
                        }
                        break;
                    case 1:
                        if (flag_getMultipleValue(FLAG_4FC_UNK, 4) == 0)
                        {
                            func_8080063C_chmumbopad(arg0, charIndex);
                            return;
                        }
                        break;
                    case 2:
                        func_8080063C_chmumbopad(arg0, charIndex);
                        return;
                    case 3:
                        func_8080063C_chmumbopad(arg0, charIndex);
                        return;
                    case 4:
                        func_8080063C_chmumbopad(arg0, charIndex);
                        return;
                    case 5:
                        func_8080063C_chmumbopad(arg0, charIndex);
                        return;
                    case 6:
                        if (flag_getValue(FLAG_0E9_MAGIC_SUNLIGHT_OXYGENATED_WATER) == 0)
                        {
                            func_8080063C_chmumbopad(arg0, charIndex);
                            return;
                        }
                        break;
                    case 7:
                        if (flag_getValue(FLAG_15F_UNK) == 0)
                        {
                            func_8080063C_chmumbopad(arg0, charIndex);
                            return;
                        }
                        break;
                    case 8:
                        if (flag_getValue(FLAG_160_UNK) == 0)
                        {
                            func_8080063C_chmumbopad(arg0, charIndex);
                            return;
                        }
                        break;
                    case 9:
                        func_8080063C_chmumbopad(arg0, charIndex);
                        return;
                    case 11:
                        if ((flag_getValue(FLAG3_A05_UNK) == 0) && (flag_getValue(FLAG_329_PHYSICAL_GI_WallCrusherTurnedOff) == 0))
                        {
                            if (flag_getValue(FLAG3_A06_UNK) == 0)
                            {
                                func_8080063C_chmumbopad(arg0, charIndex);
                                return;
                            }
                            if (!((s32)arg0->unk74_30))
                            {
                                arg0->unk74_30 = 1;
                                _subaddiedialog_entrypoint_11(arg0->unk0, ASSET_11E9_TEXT_MUMBOMAGICONETHING, 0xEU, arg0->position, 0x10U);
                                return;
                            }
                        }
                        break;
                    case 10:
                        if (flag_getValue(FLAG3_A06_UNK) == 0)
                        {
                            if (flag_getValue(FLAG3_A05_UNK) == 0)
                            {
                                func_8080063C_chmumbopad(arg0, charIndex);
                                return;
                            }
                            if (!((s32)arg0->unk74_30))
                            {
                                arg0->unk74_30 = 1;
                                _subaddiedialog_entrypoint_11(arg0->unk0, ASSET_11E9_TEXT_MUMBOMAGICONETHING, 0xEU, arg0->position, 0x10U);
                                return;
                            }
                        }
                        break;
                    case 12:
                        if ((flag_getValue(FLAG_1E1_PHYSICAL_CCL_RainbowSpawned) == 0) || (flag_getValue(FLAG_358_UNK) == 0) || (flag_getValue(FLAG_359_UNK) == 0) || (flag_getValue(FLAG_35A_UNK) == 0)) {
                            func_8080063C_chmumbopad(arg0, charIndex);
                            return;
                        }
                        break;
                    case 13:
                        if (flag_getMultipleValue(FLAG_1CA_PROGRESS_SABREMAN_STATE_1, 2) == 0)
                        {
                            func_8080063C_chmumbopad(arg0, charIndex);
                            return;
                        }
                        break;
                    case 14:
                        if ((flag_getValue(FLAG_375_PROGRESS_HFP_UFO_LANDED) != 0) && (flag_getValue(FLAG_376_PROGRESS_MUMBO_MAGIC_LIFEFORCE_ALIEN_ALIVE) == 0))
                        {
                            func_8080063C_chmumbopad(arg0, charIndex);
                            return;
                        }
                        if (!((s32)arg0->unk74_30))
                        {
                            arg0->unk74_30 = 1;
                            _subaddiedialog_entrypoint_11(arg0->unk0, ASSET_11EC_TEXT_MUMBONOTFIND, 0xEU, arg0->position, 0x10U);
                            return;
                        }
                        break;
                    case 15:
                        if ((flag_getValue(FLAG_373_PROGRESS_HFP_SAVED_KID_2) == 0) && (flag_getValue(FLAG2_6B4_UNK) != 0))
                        {
                            func_8080063C_chmumbopad(arg0, charIndex);
                            return;
                        }
                        if (!(arg0->unk74_30))
                        {
                            arg0->unk74_30 = 1;
                            _subaddiedialog_entrypoint_11(arg0->unk0, ASSET_11EC_TEXT_MUMBONOTFIND, 0xEU, arg0->position, 0x10U);
                            return;
                        }
                        break;
                    case 16:
                        if ((flag_getValue(FLAG_4F3_STATION_TRAIN_PARKED_IN_IoH) != 0) && (flag_getValue(FLAG_15E_UNK) == 0))
                        {
                            if (func_800C0638() == 0)
                            {
                                if (flag_getValue(FLAG_189_UNK) != 0)
                                {
                                    func_8080063C_chmumbopad(arg0, charIndex);
                                    return;
                                }
                                if (flag_getValue(FLAG2_6DB_UNK) != 0)
                                {
                                    _subaddiedialog_entrypoint_11(arg0->unk0, 0x150EU, 0xEU, arg0->position, 0x10U);
                                    return;
                                }
                                _subaddiedialog_entrypoint_11(arg0->unk0, 0x150FU, 0xEU, arg0->position, 0x10U);
                                flag_setValueTrue(FLAG2_6DB_UNK);
                                return;
                            }
                        }
                        else if (func_800C0638() == 0)
                        {
                            if (flag_getValue(FLAG2_6DC_UNK) != 0)
                            {
                                _subaddiedialog_entrypoint_11(arg0->unk0, 0x150DU, 0xEU, arg0->position, 0x10U);
                                return;
                            }
                            _subaddiedialog_entrypoint_11(arg0->unk0, 0x150CU, 0xEU, arg0->position, 0x10U);
                            flag_setValueTrue(FLAG2_6DC_UNK);
                            return;
                        }
                        break;
                }
            }
        }
        else if (flag_getValue(FLAG_09A_FTT_MUMBO_PAD) == 0)
        {
            flag_setValueTrue(FLAG_09A_FTT_MUMBO_PAD);
            _subaddiedialog_entrypoint_11(arg0->unk0, ASSET_11DC_TEXT_THISMUMBOPAD, 6U, arg0->position, 0U);
        }
    }
}

ActorData* chmumbopad_entrypoint_1()
{
    return &D_80801110_chmumbopad;
}
