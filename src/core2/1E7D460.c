#include "core2/1E7D460.h"

s32 func_800A3B70() 
{
    return 0x40;
}

void func_800A3B78(PlayerState* arg0, s32 arg1) {
    PlayerState* temp_v0;

    temp_v0 = func_800A4CA8(arg0);
    if (temp_v0 != NULL) {
        func_801106A8(temp_v0, arg1);
    }
}

void func_800A3BA8(PlayerState* arg0, s32 arg1) {
    PlayerState* temp_v0;
    ba_unknown_38_s* temp_v0_2;
    f32 temp_f0;

    temp_v0 = func_800A4CA8(arg0);
    if (temp_v0 != NULL) {
        temp_v0_2 = arg0->unk38;
        switch (temp_v0_2->unk2) {
        case 1:
            temp_f0 = temp_v0_2->unk2C;
            func_80110CC0(temp_v0, (f32) temp_v0_2->unk8 * temp_f0, (f32) temp_v0_2->unkC * temp_f0, (f32) temp_v0_2->unk10 * temp_v0_2->unk30, (f32) temp_v0_2->unk34);
            break;
        case 2:
            temp_f0 = temp_v0_2->unk2C;
            func_80110CC0(temp_v0, (f32) temp_v0_2->unk14 * temp_f0, (f32) temp_v0_2->unk18 * temp_f0, (f32) temp_v0_2->unk1C * temp_v0_2->unk30, (f32) temp_v0_2->unk34);
            break;
        case 3:
            temp_f0 = temp_v0_2->unk2C;
            func_80110CC0(temp_v0, (f32) temp_v0_2->unk20 * temp_f0, (f32) temp_v0_2->unk24 * temp_f0, (f32) temp_v0_2->unk28 * temp_v0_2->unk30, (f32) temp_v0_2->unk34);
            break;
        case 4:
            func_80110CC0(temp_v0, 250.0f, 300.0f, 50.0f, (f32) temp_v0_2->unk34);
            break;
        }
        if (arg1 != 0) {
            func_80115564(temp_v0);
        }
    }
}

void func_800A3D78(PlayerState* arg0, s32 arg1, s32 arg2) {
    ba_unknown_38_s* temp_v0;

    temp_v0 = arg0->unk38;
    if (arg1 != temp_v0->unk2) {
        temp_v0->unk2 = arg1;
        func_800A3BA8(arg0, arg2);
    }
}

u8 func_800A3DAC(PlayerState* arg0) {
    return arg0->unk38->unk2;
}

void func_800A3DB8(PlayerState* arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    ba_unknown_38_s* temp_v0;

    temp_v0 = arg0->unk38;
    if ((arg1 != temp_v0->unk1) || (arg2 != temp_v0->unk34) || (arg3 != temp_v0->unk39)) {
        temp_v0->unk1 = (u8) arg1;
        temp_v0 = arg0->unk38;
        func_800A59B8(temp_v0->unk1, &temp_v0->unk8, &temp_v0->unkC, &temp_v0->unk10, &temp_v0->unk14, &temp_v0->unk18, &temp_v0->unk1C, &temp_v0->unk20, &temp_v0->unk24, &temp_v0->unk28);
        arg0->unk38->unk34 = (s16) arg2;
        arg0->unk38->unk39 = (u8) arg3;
        if ((func_800A3DAC(arg0) == 3) && ((temp_v0 = arg0->unk38, (temp_v0->unk20 == 0)) || (temp_v0->unk39 != 0))) {
            func_800A3D78(arg0, 2, arg4);
            return;
        }
        func_800A3BA8(arg0, arg4);
    }
}

void func_800A3EC8(PlayerState* arg0, s32 arg1) {
    ba_unknown_38_s* temp_v0;

    temp_v0 = arg0->unk38;
    if (arg1 != temp_v0->unk7) {
        temp_v0->unk7 = arg1;
        func_80110D08(func_800A4CA8(arg0), arg0->unk38->unk7, arg0);
    }
}

void func_800A3F14(PlayerState* arg0, s32 arg1) {
    u8 temp_v1;

    temp_v1 = arg0->unk38->unk6;
    if (arg1 != temp_v1) {
        switch (temp_v1) {
        case 5:
            func_80090C28(arg0, 1);
            break;
        case 7:
            func_800A3D78(arg0, arg0->unk38->unk3A, 1);
            arg0->unk38->unk3A = 0;
            break;
        }
        switch (arg1) {
        case 2:
            func_800A3B78(arg0, 0x13);
            break;
        case 7:
            func_800A3B78(arg0, 0x1A);
            arg0->unk38->unk3A = func_800A3DAC(arg0);
            func_800A3D78(arg0, 4, 1);
            break;
        case 8:
            func_800A3B78(arg0, 0x18);
            break;
        case 6:
            func_800A3B78(arg0, 2);
            break;
        }
        arg0->unk38->unk6 = arg1;
    }
}

void func_800A4030(PlayerState* arg0) {
    if (arg0->unk38->unk6 == 9) {
        func_800A4074(arg0, 9);
        return;
    }
    func_800A4074(arg0, 2);
}

void func_800A4074(PlayerState* arg0, s32 arg1) {
    ba_unknown_38_s* temp_v0;

    func_800A5A4C(arg0);
    func_80090B98(arg0);
    arg0->unk38->unk0 = 0;
    arg0->unk38->unk6 = 0;
    arg0->unk38->unk3 = 0;
    arg0->unk38->unk4 = 0;
    arg0->unk38->unk5 = 0;
    arg0->unk38->unk30 = 1.0f;
    temp_v0 = arg0->unk38;
    temp_v0->unk2C = temp_v0->unk30;
    func_800A3F14(arg0, arg1);
    arg0->unk38->unk2 = 2;
    arg0->unk38->unk1 = 0xFF;
    func_800A3DB8(arg0, 0, 0, 0, 1);
    arg0->unk38->unk7 = 0xFF;
    func_800A3EC8(arg0, 0);
    _batimer_set(arg0, 7, 0.5f);
    arg0->unk38->unk36 = -1;
}

void func_800A4160(s32 arg0) 
{

}

void func_800A4168(PlayerState* arg0) {
    arg0->unk38->unk3C = 0;
    func_800A4074(arg0, 2);
}

void func_800A4190(PlayerState* arg0) {
    ba_unknown_38_s* temp_v0;
    u8 temp_v1;

    if ((func_800A4D40(arg0) != 0) && (func_800F65D0(arg0->unk184) != 0) && (func_8009CC68(arg0) == 0) && (func_800F3ED0(arg0) != 4) && (_batimer_get(arg0, 7) == 0.0f) && (bainput_should_exit_first_person(arg0) != 0)) {
        temp_v0 = arg0->unk38;
        if ((temp_v0->unk4 == 0) && (temp_v0->unk3B == 0)) {
            temp_v1 = temp_v0->unk2;
            switch (temp_v1) {
            case 1:
                func_8009DB04(arg0, 0x488, 1.0f, 0x2EE0);
                func_800A3D78(arg0, 2, 1);
                break;
            case 2:
                if ((temp_v0->unk20 != 0) && (temp_v0->unk39 == 0)) {
                    func_8009DB04(arg0, 0x488, 1.2f, 0x2EE0);
                    func_800A3D78(arg0, 3, 1);
                } else {
                    func_8009DB04(arg0, 0x487, 1.0f, 0x2EE0);
                    func_800A3D78(arg0, 1, 1);
                }
                break;
            case 3:
                func_8009DB04(arg0, 0x487, 1.0f, 0x2EE0);
                func_800A3D78(arg0, 1, 1);
                break;
            }
            _batimer_set(arg0, 7, 0.4f);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E7D460/func_800A4338.s")



s32 func_800A4878(PlayerState* arg0) {
    PlayerState* sp24;
    PlayerState* temp_v0;

    if (!temp_v0) {
    }
    temp_v0 = func_800A4CA8(arg0);
    sp24 = temp_v0;
    if (arg0->unk38->unk5 != 0) {
        return func_80110EFC(temp_v0, 2, sp24);
    }
    if ((func_800A4D40(arg0) == 0) || (func_8009CC68(arg0) != 0) || (func_800F65D0(arg0->unk184) == 0) || (arg0->unk38->unk3B != 0)) {
        return 0;
    }
    if (bainput_func_80097B4C(arg0) != 0) {
        return func_80110EFC(sp24, 2);
    }
    if (bainput_should_rotate_camera_left(arg0) != 0) {
        return func_80110EFC(sp24, 0);
    }
    if (bainput_should_rotate_camera_right(arg0) != 0) {
        return func_80110EFC(sp24, 1);
    }
    return 0;
}

s32 func_800A4978(PlayerState* arg0) {
    s32 var_a1;

    if (func_800F40EC(arg0) != 2) {
        return 0;
    }

    switch (func_800A3274(arg0)) {
        case 0xB:
            var_a1 = 7;
            if (arg0->unk38->unk3 != 0) {
                arg0->unk38->unk3 = 4;
            }
            break;
        case 0xC:
            var_a1 = 8;
            break;
        default:
            var_a1 = 6;
            break;
    }

    func_800A3F14(arg0, var_a1);
    func_800A4878(arg0);
    func_800A4190(arg0);
    return 1;
}


void func_800A4A14(s32 arg0) {
    if (func_800A4338() == 0) {
        func_800A4190(arg0);
        func_800A4878(arg0);
    }
}

void func_800A4A4C(s32 arg0)
{
    func_800A4190(arg0);
    func_800A4878(arg0);
}

void func_800A4A74(PlayerState* arg0) {
    if ((func_800A4338() == 0) && (func_800A4978(arg0) == 0)) {
        func_800A4190(arg0);
        if (arg0) {
        }
        func_800A4878(arg0);
        func_800A3F14(arg0, 2);
    }
}

void func_800A4AD0(PlayerState* arg0) {
    if (_ncbaspline_entrypoint_8(func_800A4CA8(arg0)) != 0) {
        func_800A3F14(arg0, 2);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E7D460/func_800A4B08.s")

f32* func_800A4C48(PlayerState* arg0) {
    return func_800A93F8(arg0->unk184);
}

s32 func_800A4C68(PlayerState* arg0) {
    return func_800A940C(arg0->unk184);
}

s32 func_800A4C88(PlayerState* arg0) {
    return func_800A93E4(arg0->unk184);
}

PlayerState* func_800A4CA8(PlayerState* arg0) {
    PlayerState* var_v1;
    s32 temp_v0;

    temp_v0 = func_800A4C88(arg0);
    if (temp_v0 != 0) {
        var_v1 = func_80110014(temp_v0);
    } else {
        var_v1 = NULL;
    }
    return var_v1;
}

void func_800A4CE8(PlayerState* arg0, f32* arg1) {
    func_800CA7E4(func_800A4C48(arg0), arg1);
}

void func_800A4D14(PlayerState* arg0, s32 arg1) {
    func_800CA9D8(func_800A4C48(arg0), arg1);
}

s32 func_800A4D40(PlayerState* arg0) {
    return func_8010FAE4(func_800A4C88(arg0)) == 2;
}

void func_800A4D6C(PlayerState* arg0, f32 arg1, f32 arg2) {
    arg0->unk38->unk2C = arg1;
    arg0->unk38->unk30 = arg2;
    func_800A3BA8(arg0, 1);
}

void func_800A4DA4(PlayerState* arg0, s32 arg1) {
    u8 temp_v0;

    arg0->unk38->unk0 = (u8) arg1;
    temp_v0 = arg0->unk38->unk6;
    if ((temp_v0 != 4) && (temp_v0 != 5)) {
        func_800A3F14(arg0, 1);
        func_800A3B78(arg0, arg1);
    }
}

void func_800A4DFC(PlayerState* arg0, s32 arg1) {
    func_800A3F14(arg0, 3);
    func_800A3B78(arg0, arg1);
}

void func_800A4E30(PlayerState* arg0) {
    u8 temp_v0;

    arg0->unk38->unk0 = 0;
    temp_v0 = arg0->unk38->unk6;
    if ((temp_v0 != 4) && (temp_v0 != 5)) {
        func_800A3F14(arg0, 2);
    }
}

void func_800A4E74(s32 arg0)
{
    func_800A3F14(arg0,0x5);
}

void func_800A4E94(PlayerState* arg0) {
    func_800A3F14(arg0, 9);
    func_80110BF0(func_800A4CA8(arg0));
}

void func_800A4EC8(PlayerState* arg0) {
    func_800A3F14(arg0, 2);
    func_80110C2C(func_800A4CA8(arg0));
}

void func_800A4EFC(PlayerState* arg0, f32 arg1) {
    f32 sp34[3];
    s32 var_a3;
    ba_unknown_38_s* temp_v0;
    f32* var_v1;
    s32 var_v0;

    if (arg0 != NULL) {
        temp_v0 = arg0->unk38;
        if (temp_v0->unk4 == 0) {
            sp34[0] = mlAbsF(arg1 - (f32) temp_v0->unk8);
            sp34[1] = mlAbsF(arg1 - (f32) arg0->unk38->unk14);
            sp34[2] = mlAbsF(arg1 - (f32) arg0->unk38->unk20);
            var_a3 = 0;
            var_v0 = 1;
            var_v1 = &sp34[1];
            do {
                if (*var_v1 < sp34[var_a3]) {
                    var_a3 = var_v0;
                }
                var_v0 += 1;
                var_v1 += 1;
            } while (var_v0 != 3);
            func_800A3D78(arg0, var_a3 + 1, func_80090E30(arg0));
        }
    }
}

void func_800A5004(PlayerState* arg0) {
    if (arg0->unk38->unk3C == 0) {
        arg0->unk38->unk3C = func_800CA334();
        func_800A4E94(arg0);
    }
}

void func_800A5044(PlayerState* arg0) {
    if (arg0->unk38->unk3C != 0) {
        func_800A4EC8(arg0);
        func_800CA364(arg0->unk38->unk3C);
        arg0->unk38->unk3C = 0;
    }
}

s32 func_800A5090(PlayerState* arg0) {
    return arg0->unk38->unk3C;
}

void func_800A509C(PlayerState* arg0) {
    arg0->unk38->unk3B = 1;
}
