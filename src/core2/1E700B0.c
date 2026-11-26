#include "core2/1E700B0.h"

typedef struct {
    s32 unk0;
    f32 unk4;
    f32 unk8[3];
    f32 unk14[3];
    f32 unk20[3];
    f32 unk2C[2]; // ?? should be Vec3f, too
} Unk80126E30;

extern Unk80126E30 D_80126E30[];

s32 func_800967C0()
{
    return 0x28;
}

void func_800967C8(f32* arg0, f32* arg1, f32* arg2, f32* arg3) {
    f32 sp94;
    s32 pad2[2];
    f32 temp_f2;
    f32 sp7C[3];
    f32 temp_f0_2;
    f32 sp6C[3];
    f32 sp60[3];
    s32 pad;
    f32 sp50[3];
    f32 sp44[3];
    f32 sp38[3];
    f32 sp2C[3];
    s32 i;
    f32 sp24;

    ml_getdiff_vec3f(sp38, arg1, arg0);
    ml_vec3f_assign_value(sp50, 0.0f, 1.0f, 0.0f);
    ml_vec3f_assign_value(sp44, sp38[0], 0.0f, sp38[2]);
    ml_vec3f_normalizeMagnitude(sp44);
    ml_vec3f_cross_product(sp60, sp44, sp50);
    sp94 = ml_vec3f_dot_product(arg3, sp60);
    if (sp94 > 0.0f || sp94 == 0.0f) {
        return;
    }

    sp24 = ml_vec3f_dot_product(sp60, arg0);
    temp_f0_2 = ml_vec3f_dot_product(sp60, arg2);
    temp_f2 = (sp24 - temp_f0_2) / sp94;
    if (temp_f0_2 < sp24) {
        return;
    }

    for (i = 0; i < 3; i++) {
        sp7C[i] = arg2[i] + (arg3[i] * temp_f2);
    }
    ml_vec3f_assign_value(sp6C, sp38[0], 0.0f, sp38[2]);
    ml_vec3f_normalizeMagnitude(sp6C);
    ml_vec3f_assign_value(sp2C, sp7C[0] - arg0[0], 0.0f, sp7C[2] - arg0[2]);
    temp_f2 = ml_vec3f_dot_product(sp2C, sp6C);
    if (temp_f2 < 0.0f) {
        return;
    }

    if (ml_vec3f_magnitude(sp38) < temp_f2) {
        return;
    }

    if (func_800BEE40(arg0, arg1, sp60, 0.028f) == 0) {
        return;
    }

    temp_f0_2 = ml_vec3f_distance(arg2, sp7C);
    temp_f2 = D_80126E30[0].unk4;
    if (temp_f2 < temp_f0_2) {
        return;
    }

    if (temp_f0_2 < temp_f2) {
        D_80126E30[0].unk0 = 0;
    }
    D_80126E30[D_80126E30[0].unk0].unk4 = temp_f0_2;
    ml_vec3f_copy(D_80126E30[D_80126E30[0].unk0].unk8, arg0);
    ml_vec3f_copy(D_80126E30[D_80126E30[0].unk0].unk14, arg1);
    ml_vec3f_copy(D_80126E30[D_80126E30[0].unk0].unk20, sp60);
    ml_vec3f_copy(D_80126E30[D_80126E30[0].unk0].unk2C, sp7C);
    D_80126E30[0].unk0 = (s32)(D_80126E30[0].unk0 + 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1E700B0/func_80096ACC.s")

s32 func_80096DD4(f32 arg0[3], f32 arg1[3], f32 arg2[3], f32 arg3[3]) {
    f32 sp24[3];
    f32 sp18[3];

    ml_vec3f_copy(sp24, arg2);
    ml_vec3f_copy(sp18, arg3);
    if (func_80096ACC(sp24, sp18, arg0, arg1) == 0) {
        return 0;
    }
    return 1;
}

s32 func_80096E30(ba_unknown_98_s* arg0, f32* arg1, f32* arg2, f32 arg3, f32 arg4, f32 arg5) {
    s32 var_v1;
    f32 spB8[3];
    f32 spAC[3];
    f32 spA0[3];
    f32 sp94[3];
    f32 sp88[3];
    f32 sp7C[3];
    f32 sp70[3];
    f32 sp64[3];
    f32 sp58[3];
    f32 sp4C[3];
    f32 sp40[3];
    f32 sp34[3];
    f32 sp28[3];
    f32 sp1C[3];

    ml_getScaledVec3f(sp28, arg0->unk0, arg4);
    ml_vec3f_sum(sp1C, arg2, sp28);
    ml_getScaledVec3f(sp28, arg0->unk0, arg3);
    func_800EF934(sp7C, sp28, -arg5);
    func_800EF934(sp34, sp28, arg5);
    ml_vec3f_assign_value(sp88, sp28[2], sp28[1], -sp28[0]);
    ml_vec3f_assign_value(sp40, -sp28[2], sp28[1], sp28[0]);
    ml_vec3f_set_length(sp88, 30.0f);
    ml_vec3f_set_length(sp40, 30.0f);
    ml_vec3f_sum(sp94, sp1C, sp88);
    ml_vec3f_sum(sp4C, sp1C, sp40);
    ml_vec3f_sum(spB8, sp94, sp7C);
    ml_vec3f_sum(sp70, sp4C, sp34);
    if (func_80096DD4(spA0, spAC, sp94, spB8) == 0) {
        return 0;
    }
    if (func_80096DD4(sp58, sp64, sp4C, sp70) == 0) {
        return 1;
    }
    if (ml_vec3f_dot_product(spAC, sp64) <= 0.1000000015f) {
        return 4;
    }
    func_800EFE50(arg1, spA0, sp58, 0.5f);
    ml_vec3f_sum(arg0->unk0, spAC, sp64);
    ml_vec3f_apply_scale(arg0->unk0, -0.5f);
    ml_vec3f_normalizeMagnitude(arg0->unk0);
    if (ml_vec3f_is_equal(spAC, sp64) != 0) {
        var_v1 = 2;
    }
    else {
        var_v1 = 3;
    }
    return var_v1;
}

s32 func_8009700C(PlayerState* arg0, f32* arg1, f32* arg2, f32 arg3, f32 arg4) {
    f32 sp2C[3];
    f32 sp20[3];

    ml_vec3f_assign_value(sp20, arg2[0], arg2[1] + arg3, arg2[2]);
    ml_vec3f_assign_value(sp2C, arg2[0], arg2[1] + arg4, arg2[2]);
    if (func_800C6A7C(sp20, sp2C, arg1, 0x420025) != 0) {
        return 1;
    }
    return 0;
}

s32 func_800970A4(f32* arg0, f32* arg1, f32 arg2) {
    s32 var_v1;
    f32 sp28[3];
    f32 sp1C[3];

    ml_vec3f_scaled_sum(sp28, arg0, arg1, arg2);
    if (func_800C6A7C(arg0, sp28, sp1C, 0x420025) != 0) {
        var_v1 = 1;
    }
    else {
        var_v1 = 0;
    }
    return var_v1;
}

s32 func_80097104(PlayerState* arg0, f32* arg1, f32 arg2) {
    f32 sp6C[3];
    f32 sp60[3];
    f32 sp54[3];
    f32 sp48[3];
    f32 sp3C[3];
    f32 sp30[3];
    f32 sp18;
    f32 sp28;
    f32 sp1C[3];

    ml_getScaledVec3f(sp6C, arg0->unk98->unk0, arg2);
    ml_getdiff_vec3f(sp60, arg1, sp6C);
    ml_vec3f_assign_value(sp48, 0.0f, 1.0f, 0.0f);
    ml_vec3f_cross_product(sp3C, arg0->unk98->unk0, sp48);
    ml_getScaledVec3f(sp30, sp3C, -1.0f);
    func_8009BB24(arg0, sp1C);
    sp1C[1] = 0.0f;
    ml_vec3f_normalizeMagnitude(sp1C);
    sp28 = ml_vec3f_dot_product(sp3C, sp1C);
    ml_vec3f_assign_value(sp54, sp60[0], sp60[1] - 50.0f, sp60[2]);
    if (0.0f < sp28) {
        sp18 = arg2 + 4.0f;
        if (func_800970A4(sp60, sp3C, sp18) != 0) {
            return 0;
        }
        if (func_800970A4(sp54, sp3C, sp18) != 0) {
            return 0;
        }
    }
    if (sp28 < 0.0f) {
        sp18 = -(arg2 + 4.0f);
        if (func_800970A4(sp60, sp3C, sp18) != 0) {
            return 0;
        }
        if (func_800970A4(sp54, sp3C, sp18) != 0) {
            return 0;
        }
    }
    return 1;
}

s32 func_800972BC(PlayerState* arg0, f32* arg1) {
    f32 temp_f0;
    f32 sp60;
    f32 sp5C;
    f32 sp50[3];
    f32 sp44[3];
    f32 sp38[3];
    f32 sp2C[3];

    ml_vec3f_copy(sp50, arg1);
    func_80095870(arg0, &sp5C, &sp60);
    sp50[1] = sp50[1] + (sp5C - sp60);
    if (arg0->unk98->unk24 != 0) {
        temp_f0 = 15.0f;
    }
    else {
        temp_f0 = 0.0f;
    }
    switch (func_80096E30(arg0->unk98, sp44, sp50, sp60 + 30.0f, -sp60 * 0.5f, temp_f0)) {
    case 0:
        arg0->unk98->unk25 = 2;
        return 0;
    case 1:
        arg0->unk98->unk25 = 3;
        return 0;
    case 4:
        arg0->unk98->unk25 = 3;
        return 0;
    case 2:
        arg0->unk98->unk24 = 1;
        break;
    case 3:
        arg0->unk98->unk24 = 0;
        break;
    }
    ml_vec3f_copy(arg0->unk98->unkC, sp44);
    if (func_80097104(arg0, sp44, sp60) == 0) {
        return 0;
    }
    ml_getScaledVec3f(sp2C, arg0->unk98->unk0, sp60 + -18.0f);
    ml_getdiff_vec3f(sp50, sp44, sp2C);
    sp50[1] = (sp44[1] - sp5C) + -43.0f;
    if (func_8009700C(arg0, sp38, sp50, sp60 * 0.75f + sp5C, -50.0f) != 0) {
        if (0.0f < sp38[1]) {
            arg0->unk98->unk25 = 4;
        }
        else {
            arg0->unk98->unk25 = 5;
        }
        return 0;
    }
    ml_vec3f_copy(arg0->unk98->unk18, sp50);
    arg0->unk98->unk25 = 1;
    return 1;
}


f32 func_800974FC(PlayerState* arg0) {
    f32 sp1C;

    func_800F1EA4((f32*)arg0->unk98, &sp1C);
    return sp1C;
}

u8 func_80097524(PlayerState* arg0) {
    return arg0->unk98->unk25;
}

s32 func_80097530(PlayerState* arg0) {
    f32 sp54;
    f32 sp50;
    f32 sp44[3];
    f32 sp38[3];
    f32 sp2C[3];
    f32 sp20[3];

    func_80095870(arg0, &sp50, &sp54);
    ml_getScaledVec3f(sp2C, arg0->unk98->unk0, 25.0f);
    ml_vec3f_add(sp2C, arg0->unk98->unkC);
    ml_vec3f_assign_value(sp44, sp2C[0], sp2C[1] + 6.0f, sp2C[2]);
    ml_vec3f_assign_value(sp38, sp2C[0], sp2C[1] + sp50 + sp54 + 5.0f, sp2C[2]);
    if (func_800C6A7C(sp44, sp38, sp20, 0x420025) != 0) {
        return 0;
    }
    ml_vec3f_assign_value(sp44, sp2C[0], sp2C[1] + sp50, sp2C[2]);
    if (func_800C6C94(sp44, sp54 + 5.0f, sp20, 0x420025) != 0) {
        return 0;
    }
    ml_vec3f_assign_value(sp44, sp2C[0], (sp2C[1] + sp50) - (sp54 * 0.75f), sp2C[2]);
    if (func_800C6C94(sp44, sp54 + 5.0f, sp20, 0x420025) != 0) {
        return 0;
    }
    return 1;
}

s32 func_800976DC(PlayerState* arg0) {
    f32 sp74;
    f32 sp70;
    f32 sp64[3];
    f32 wallNormal[3];
    f32 sp4C[3];
    f32 vertices[3][3];
    ba_unknown_98_s* temp_v0;

    if (bastatetimer_isActive(arg0, BA_STATE_TIMER_ID_7_UNKNOWN) != 0) {
        return 0;
    }
    if (player_touchingWall(arg0) == 0) {
        return 0;
    }
    player_getWallTouchNormal(arg0, wallNormal);

    //Reject most wall normals that point up
    if ((0.028f < wallNormal[1]) && (wallNormal[1] < 0.98f)) {
        return 0;
    }
    player_getCoords(arg0, sp64);
    func_80095870(arg0, &sp70, &sp74);
    sp64[1] = sp64[1] + sp70;
    player_getWallTouchVertices(arg0, vertices);
    func_800F0410(sp4C, vertices, sp64);
    ml_getdiff_vec3f(arg0->unk98->unk0, sp4C, sp64);
    arg0->unk98->unk0[1] = 0.0f;
    ml_vec3f_normalizeMagnitude(arg0->unk98->unk0);
    temp_v0 = arg0->unk98;
    if ((temp_v0->unk0[0] == 0.0f) && (temp_v0->unk0[2] == 0.0f)) {
        return 0;
    }
    temp_v0->unk24 = 1;
    player_getCoords(arg0, sp64);
    if (func_800972BC(arg0, sp64) == 0) {
        return 0;
    }
    return func_800972BC(arg0, arg0->unk98->unk18);
}

void func_80097858(PlayerState* arg0) {
    arg0->unk98->unk24 = 1;
    bastatetimer_set(arg0, 7, 0.2f);
}

void func_8009788C(PlayerState* arg0) {
    arg0->unk98->unk24 = 1;
    arg0->unk98->unk26 = 1;
}

void func_800978A4(PlayerState* arg0) {
    f32 sp3C[3];
    f32 sp30[3];
    f32 sp24[3];

    player_getPrevCoords(arg0, sp3C);
    if (arg0->unk98->unk26 != 0) {
        arg0->unk98->unk26 = 0;
        ml_vec3f_copy(sp30, arg0->unk98->unk18);
    }
    else {
        player_getCoords(arg0, sp30);
    }
    ml_vec3f_copy(sp24, arg0->unk98->unk0);
    if (func_800972BC(arg0, sp30) != 0) {
        ml_vec3f_copy(sp30, arg0->unk98->unk18);
        baphysics_set_vertical_velocity(arg0, 1.0f);
    }
    else {
        ml_vec3f_copy(sp30, sp3C);
        ml_vec3f_copy(arg0->unk98->unk0, sp24);
    }
    player_setCoords(arg0, sp30);
}
