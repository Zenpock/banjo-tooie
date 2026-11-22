#include "nc/pod.h"

UNKPODSTRUCT* ncpod_entrypoint_2(s16);
void ncpod_entrypoint_12(UNKPODSTRUCT*, s32);
void ncpod_entrypoint_15(UNKPODSTRUCT*, s32, s32);
s32 ncpod_entrypoint_17(s32, s32);
void ncpod_entrypoint_19(UNKPODSTRUCT*, s32);

void func_80800000_ncpod(UNKPODSTRUCT* arg0)
{
    if (arg0->unk42 == 0)
    {
        arg0->unk42 = 1U;
        func_800F82D4(arg0->unk38, 2);
    }
}

void func_80800038_ncpod(UNKPODSTRUCT* arg0)
{
    if (arg0->unk42 != 0) {
        arg0->unk42 = 0U;
        func_800F82D4(arg0->unk38, 0);
    }
}

void func_8080006C_ncpod(UNKPODSTRUCT* arg0)
{
    if (!(arg0->unk10 & 0x800))
    {
        arg0->unk43 = 1;
        _glcutDll_entrypoint_6(map_getCurrent(), 0x79U);
    }
}

void func_808000AC_ncpod(UNKPODSTRUCT* arg0)
{
    if (arg0->unk43 != 0) {
        _glcutDll_entrypoint_17();
        arg0->unk43 = 0U;
    }
}

s32 ncpod_entrypoint_0(s32 arg0)
{
    s16 sp2E;
    s32 sp28;
    s32 sp24;
    UNKPODSTRUCT* temp_s0;

    sp2E = func_8001B668(0, 0x4C);
    temp_s0 = ncpod_entrypoint_2(sp2E);
    sp24 = func_800A940C(arg0);
    temp_s0->unk0 = 0;
    temp_s0->unk2 = 0;
    temp_s0->unk4 = 0;
    temp_s0->unk8 = 0;
    temp_s0->unkC = -1;
    ml_vec3f_clear(temp_s0->unk18);
    ml_vec3f_clear(temp_s0->unk24);
    temp_s0->unk34 = 1.0f;
    temp_s0->unk30 = 40.0f;
    temp_s0->unk14 = func_80015184();
    temp_s0->unk3E = 0;
    temp_s0->unk42 = 0;
    temp_s0->unk40 = 0;
    temp_s0->unk43 = 0;
    temp_s0->unk3C = 0;
    temp_s0->unk38 = arg0;
    temp_s0->unk10 = 0;
    temp_s0->unk41 = 0;
    temp_s0->unk44 = func_800C517C(sp24);
    temp_s0->unk48 = func_800C5190(sp24);
    return sp2E;
}

void ncpod_entrypoint_1(s16 arg0)
{
    s32 var_a2;
    s32 sp20;
    UNKPODSTRUCT* temp_v0;
    f32 var_f0;
    f32 var_f0_2;

    temp_v0 = ncpod_entrypoint_2(arg0);
    sp20 = func_800A940C(temp_v0->unk38);
    ncpod_entrypoint_12(temp_v0, 0);
    if (temp_v0->unk3E != 0)
    {

        if (temp_v0->unk10 & 0x4000)
        {
            var_a2 = 0;
        }
        else
        {
            var_a2 = 1;
        }
        ncpod_entrypoint_15(temp_v0, 0, var_a2);
    }
    if (!(temp_v0->unk10 & 0x8000))
    {
        if (temp_v0->unk10 & 0x80000)
        {
            var_f0 = 40.0f;
        }
        else
        {
            var_f0 = temp_v0->unk44;
        }
        func_800C5148(sp20, var_f0);
        if (temp_v0->unk10 & 0x80000)
        {
            var_f0_2 = 1.0f;
        }
        else
        {
            var_f0_2 = temp_v0->unk48;
        }
        func_800C51A4(sp20, var_f0_2);
    }
    func_80015178(temp_v0->unk14);
    func_808000AC_ncpod(temp_v0);
    func_8001B754(arg0);
}

UNKPODSTRUCT* ncpod_entrypoint_2(s16 arg0) {
    return func_8001B798(arg0);
}

void ncpod_entrypoint_3(UNKPODSTRUCT* arg0, s32 arg1) {
    arg0->unk3C = arg1;
}

s32 ncpod_entrypoint_4(UNKPODSTRUCT* arg0) {
    return arg0->unk38;
}

int func_808002E8_ncpod(ActorMarker* arg0, s32 arg1) {
    int ret;
    if (arg1 == -1) {
        ret = 0;
    }
    else {
        ret = (arg1 == arg0->unk12_1);
    }
    return ret;
}

s32 func_80800314_ncpod(s32 arg0, UNKPODSTRUCT* arg1, s32 arg2, s32 arg3, s32 arg4)
{
    u32 sp1C;

    switch (arg1->unk3C)
    {
        case 1:
            sp1C = _ncpoducam_entrypoint_5(_ncpoducam_entrypoint_1(arg1->unk2));
            if (arg2 == 0xB)
            {
                if (sp1C & 0x100)
                {
                    _glcutDll_entrypoint_17();
                }
                if (!(sp1C & 0x20))
                {
                    return ncpod_entrypoint_17(arg0, 0);
                }
                return 3;
            }
            break;
        case 6:
            return _gcdialogcamera_entrypoint_1(arg2, arg3, arg4);
        case 0:
        case 11:
        default:
            break;
    }
    return -1;
}

s32 ncpod_entrypoint_5(s32 arg0, UNKPODSTRUCT* arg1, ActorEventId arg2, s32 arg3, void* arg4)
{
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;

    if (func_808002E8_ncpod(arg1->unk8, arg1->unkC) != 0)
    {
        if (arg1->unk8->unk18_16)
        {
            func_80101074(arg4);
            temp_v0 = func_8010114C(arg1->unk8, arg2, arg3);
            switch (temp_v0)
            {
                case 4:
                    return 4;
                case 5:
                    return temp_v0;
                default:
                    temp_v0_2 = func_80800314_ncpod(arg0, arg1, arg2, arg3, (s32)arg4);
                    if (temp_v0_2 == 4)
                    {
                        return 4;
                    }
                    return temp_v0_2;
            }
        }
        var_v0 = -1;
    }
    else
    {
        var_v0 = func_80800314_ncpod(arg0, arg1, arg2, arg3, (s32)arg4);
        return var_v0;
    }
    return var_v0;
}

s32 ncpod_entrypoint_6(s32 arg0, UNKPODSTRUCT* arg1, ActorEventId arg2, s32 arg3, void* arg4)
{
    if ((func_808002E8_ncpod(arg1->unk8, arg1->unkC) != 0) && (arg1->unk8->unk18_16))
    {
        func_80101074(arg4);
        return func_8010114C(arg1->unk8, arg2, arg3);
    }
    return -1;
}

void ncpod_entrypoint_7(UNKPODSTRUCT* arg0, ActorMarker* arg1)
{
    arg0->unk8 = arg1;
    arg0->unkC = arg1->unk12_1;
}

void ncpod_entrypoint_8(UNKPODSTRUCT* arg0, f32* arg1, f32* arg2)
{
    ml_vec3f_copy(arg0->unk18, arg1);
    ml_vec3f_copy(arg0->unk24, arg2);
    arg0->unk40 = 1;
}

void ncpod_entrypoint_9(UNKPODSTRUCT* arg0, f32 arg1) {
    arg0->unk30 = arg1;
}

f32 ncpod_entrypoint_10(UNKPODSTRUCT* arg0) {
    return arg0->unk30;
}

void ncpod_entrypoint_11(UNKPODSTRUCT* arg0, f32 arg1) {
    arg0->unk34 = arg1;
}

void ncpod_entrypoint_12(UNKPODSTRUCT* arg0, s32 arg1)
{

    switch (arg0->unk41)
    {
        case 1:
            _ncpoddialog_entrypoint_3(arg0->unk0);
            arg0->unk0 = 0;
            break;
        case 2:
            _ncpoducam_entrypoint_6(arg0->unk2);
            arg0->unk2 = 0;
            break;
        case 3:
            _ncpodfixpos_entrypoint_1(arg0->unk4);
            arg0->unk4 = 0;
            break;
    }
    arg0->unk41 = arg1;
    switch (arg0->unk41)
    {
        case 1:
            arg0->unk0 = _ncpoddialog_entrypoint_2();
            return;
        case 2:
            arg0->unk2 = _ncpoducam_entrypoint_0();
            return;
        case 3:
            arg0->unk4 = _ncpodfixpos_entrypoint_0();
            return;
    }
}

s32 ncpod_entrypoint_13(UNKPODSTRUCT* arg0) {
    return arg0->unk41;
}

void ncpod_entrypoint_14(s16 arg0, s32 arg1)
{
    s32 var_a0;
    UNKPODSTRUCT* temp_v0;
    s32 sp24;
    temp_v0 = ncpod_entrypoint_2(arg0);
    var_a0 = 2;
    switch (temp_v0->unk41)
    {
    case 0:
        break;
    case 1:
        var_a0 = _ncpoddialog_entrypoint_1(temp_v0->unk0, arg1);
        break;
    case 2:
        var_a0 = _ncpoducam_entrypoint_7(temp_v0->unk2, arg1);
        break;
    case 3:
        var_a0 = _ncpodfixpos_entrypoint_6(temp_v0->unk4, arg1);
        break;
    }
    if ((var_a0 != 4) && (temp_v0->unk40 != 0))
    {
        sp24 = func_800A940C(temp_v0->unk38);
        func_8010FE14(arg1, temp_v0->unk18, temp_v0->unk24);
        func_800C5148(sp24, temp_v0->unk30);
        if (temp_v0->unk30 == 40.0f)
        {
            if (temp_v0->unk34 != 1.0f)
            {
                func_800C51A4(sp24, temp_v0->unk34);
                return;
            }
        }
        func_800C51A4(sp24, 1.0f);
    }
}

void func_808007D8_ncpod(UNKPODSTRUCT* arg0, s32 arg1)
{
    s32 var_a0;
    s32 var_a2;
    s32 var_a2_2;

    if (arg1 & 0x10)
    {
        func_80800000_ncpod(arg0);
    }
    else
    {
        func_80800038_ncpod(arg0);
    }
    if (arg1 & 0x60000)
    {
        if (arg1 & 0x40000)
        {
            var_a0 = 4;
        }
        else if (arg1 & 0x20000)
        {
            var_a0 = 3;
        }
        else
        {
            var_a0 = arg0->unk14;
        }
        func_80015178(var_a0);
    }
    if (arg1 & 4)
    {
        if (arg1 & 0x4000)
        {
            var_a2 = 0;
        }
        else
        {
            var_a2 = 1;
        }
        ncpod_entrypoint_15(arg0, 0, var_a2);
        return;
    }
    if (arg1 & 0x2000)
    {
        var_a2_2 = 0;
    }
    else
    {
        var_a2_2 = 1;
    }
    ncpod_entrypoint_15(arg0, 1, var_a2_2);
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlays/nc/pod/ncpod_entrypoint_15.s")

s32 ncpod_entrypoint_16(s32 arg0, ActorMarker* arg1, s32 arg2, s32 arg3)
{
    UNKPODSTRUCT* sp1C;

    if (func_8010FAE4(arg0) == 8)
    {
        return 0;
    }
    func_8010F9C0(arg0, 8);
    sp1C = func_80110024(arg0);
    ncpod_entrypoint_3(sp1C, arg2);
    if (arg1 != NULL)
    {
        ncpod_entrypoint_7(sp1C, arg1);
    }
    ncpod_entrypoint_19(sp1C, arg3);
    func_8080006C_ncpod(sp1C);
    return 1;
}

s32 ncpod_entrypoint_17(s32 arg0, s32 arg1)
{
    UNKPODSTRUCT* temp_v0;
    s32 sp20;
    s32 var_s0;

    temp_v0 = func_80110024(arg0);
    sp20 = func_800A940C(temp_v0->unk38);
    ncpod_entrypoint_12(temp_v0, 0);
    if (arg1 == 0)
    {
        if (!(temp_v0->unk10 & 0x8000))
        {
            ncpod_entrypoint_15(temp_v0, 0, temp_v0->unk10 & 0x4000 ? 0 : 1);
            func_800C5148(sp20, temp_v0->unk10 & 0x80000 ? 40.0f : temp_v0->unk44);
            func_800C51A4(sp20, temp_v0->unk10 & 0x80000 ? 1.0f : temp_v0->unk48);
        }
    }
    if (temp_v0->unk10 & 0x10)
    {
        func_80800038_ncpod(temp_v0);
    }
    func_808000AC_ncpod(temp_v0);
    if (arg1 != 0)
    {
        temp_v0->unk10 |= 0x8000;
    }
    func_80015178(temp_v0->unk14);
    if (temp_v0->unk10 & 0x200)
    {
        var_s0 = 0x200;
    }
    else
    {
        if (temp_v0->unk10 & 0x10000)
        {
            var_s0 = 0x10000;
        }
        else
        {
            var_s0 = 0;
        }
    }
    func_8010F9C0(arg0, 2);
    if (var_s0 == 0x200)
    {
        func_801108A0(func_80110014(arg0));
    }
    else if (var_s0 == 0x10000)
    {
        func_80110928(func_80110014(arg0));
    }
    if (arg1 == 0)
    {
        func_8010FD88(arg0);
    }
    return 4;
}

s32 ncpod_entrypoint_18(s32 arg0) {
    UNKPODSTRUCT* temp_v0;

    temp_v0 = func_80110024(arg0);
    if (temp_v0 == NULL) {
        return -1;
    }
    return temp_v0->unk3C;
}
void ncpod_entrypoint_19(UNKPODSTRUCT* arg0, s32 arg1) {
    func_808007D8_ncpod(arg0, arg1);
    arg0->unk10 = arg1;
}

s32 ncpod_entrypoint_20(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    UNKPODSTRUCT* sp1C;
    s32 sp18;

    sp1C = func_80110024(arg0);
    ncpod_entrypoint_12(sp1C, 2);
    sp18 = _ncpoducam_entrypoint_1(sp1C->unk2);
    _ncpoducam_entrypoint_4(sp18, arg3);
    ncpod_entrypoint_19(sp1C, arg3);
    if (arg1 != 0) {
        _ncpoducam_entrypoint_3(sp18, arg1);
    }
    _ncpoducam_entrypoint_2(sp18, arg0, arg2);
    func_8010FD88(arg0);
    return 4;
}
void ncpod_entrypoint_21(s32 arg0, s32 arg1, s32 arg2) {
    _ncpoddialog_entrypoint_9(_ncpoddialog_entrypoint_0(((UNKPODSTRUCT*)func_80110024(arg0))->unk0), arg0, arg1, arg2);
}

void ncpod_entrypoint_22(UNKPODSTRUCT* arg0, s32 arg1, s32 arg2) {
    _ncpoddialog_entrypoint_4(_ncpoddialog_entrypoint_0(arg0->unk0), arg1, arg2);
}

void ncpod_entrypoint_23(UNKPODSTRUCT* arg0, s32 arg1, s32 arg2) {
    _ncpoddialog_entrypoint_5(_ncpoddialog_entrypoint_0(arg0->unk0), arg1, arg2);
}

void ncpod_entrypoint_24(UNKPODSTRUCT* arg0, s32 arg1, s32 arg2) {
    _ncpoddialog_entrypoint_6(_ncpoddialog_entrypoint_0(arg0->unk0), arg1, arg2);
}

void ncpod_entrypoint_25(UNKPODSTRUCT* arg0, s32 arg1) {
    _ncpoddialog_entrypoint_7(_ncpoddialog_entrypoint_0(arg0->unk0), arg1);
}

s32 ncpod_entrypoint_26(s32 arg0, ActorMarker* arg1, ActorMarker* arg2, s32 arg3, s32 arg4)
{
    UNKPODSTRUCT* sp1C;
    s32 sp18;

    if (ncpod_entrypoint_16(arg0, NULL, 1, arg4) == 0) {
        return 0;
    }
    sp1C = func_80110024(arg0);
    ncpod_entrypoint_12(sp1C, 2);
    if (arg2 != NULL) {
        ncpod_entrypoint_7(sp1C, arg2);
    }
    else if (arg1 != NULL) {
        ncpod_entrypoint_7(sp1C, arg1);
    }
    sp18 = _ncpoducam_entrypoint_1(sp1C->unk2);
    if (arg1 != NULL) {
        _ncpoducam_entrypoint_3(sp18, (s32)arg1);
    }
    _ncpoducam_entrypoint_4(sp18, arg4);
    _ncpoducam_entrypoint_2(sp18, arg0, arg3);
    func_8010FD88(arg0);
    return 1;
}

s32 ncpod_entrypoint_27(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 sp18;

    func_80110024(arg0);
    sp18 = ncpod_entrypoint_17(arg0, arg1);
    func_8010F9C0(arg0, 2);
    return sp18;
}

s32 ncpod_entrypoint_28(s32 arg0, s32 arg1) {
    return _ncpoducam_entrypoint_8(_ncpoducam_entrypoint_1(((UNKPODSTRUCT*)func_80110024(arg0))->unk2), arg1);
}

s32 ncpod_entrypoint_29(s32 arg0, s32 arg1)
{
    return _ncpoducam_entrypoint_9(_ncpoducam_entrypoint_1(((UNKPODSTRUCT*)func_80110024(arg0))->unk2), arg1);
}

f32 ncpod_entrypoint_30(s32 arg0) {
    return _ncpoducam_entrypoint_10(_ncpoducam_entrypoint_1(((UNKPODSTRUCT*)func_80110024(arg0))->unk2));
}

void ncpod_entrypoint_31(s32 arg0, f32 arg1[3]) {
    _ncpoducam_entrypoint_11(_ncpoducam_entrypoint_1(((UNKPODSTRUCT*)func_80110024(arg0))->unk2), arg1);
}
s32 ncpod_entrypoint_32(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    UNKPODSTRUCT* sp1C;
    s32 sp18;

    sp1C = func_80110024(arg0);
    ncpod_entrypoint_12(sp1C, 3);
    sp18 = _ncpodfixpos_entrypoint_2(sp1C->unk4);
    _ncpodfixpos_entrypoint_5(sp18, arg3);
    if (arg1 != 0) {
        _ncpodfixpos_entrypoint_4(sp18, arg1);
    }
    _ncpodfixpos_entrypoint_3(sp18, arg0, arg2);
    return 4;
}

s32 ncpod_entrypoint_33(s32 arg0, ActorMarker* arg1, ActorMarker* arg2, s32 arg3, s32 arg4)
{
    UNKPODSTRUCT* sp1C;
    s32 sp18;

    if (ncpod_entrypoint_16(arg0, NULL, 0xB, arg4) == 0)
    {
        return 0;
    }
    sp1C = func_80110024(arg0);
    ncpod_entrypoint_12(sp1C, 3);
    if (arg2 != NULL)
    {
        ncpod_entrypoint_7(sp1C, arg2);
    }
    else if (arg1 != NULL)
    {
        ncpod_entrypoint_7(sp1C, arg1);
    }
    sp18 = _ncpodfixpos_entrypoint_2((s32)sp1C->unk4);
    _ncpodfixpos_entrypoint_5(sp18, arg4);
    if (arg1 != NULL)
    {
        _ncpodfixpos_entrypoint_4(sp18, (s32)arg1);
    }
    _ncpodfixpos_entrypoint_3(sp18, arg0, arg3);
    func_8010FD88(arg0);
    return 1;
}
