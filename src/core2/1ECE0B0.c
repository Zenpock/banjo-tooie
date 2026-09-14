#include "core2/1ECE0B0.h"

extern PlayerState* D_80135490[];
extern u8 D_801354DA;
extern Vector* D_801354F0;
extern u32 D_801354DC;
extern unkStructD_801354F8 D_801354F8;
extern u8 D_801354F9;
extern u8 D_801354FC;
extern u8 D_801354FD;
extern f32 D_80135500;
extern s8 D_801354B0;
extern f32 D_80135510;
extern u8 D_801354FA;
extern s32 D_8013551C;
extern unkStructD_80135520 D_80135520;
extern u8 D_8012762C;
extern f32 D_8013550C;

//Call a function on all active players
void func_800F47C0(void (*arg0)(PlayerState*))
{
    PlayerState* temp_a0;
    s32 index;

    for (index = 0; index < 0x8; index++)
    {
        if (D_80135490[index] != NULL && D_80135490[index]->unk17C)
            arg0(D_80135490[index]);
    }
}

void func_800F482C(s32 arg0)
{
    s32 index;

    for (index = 0; index < 8; index++)
    {
        if (D_80135490[index] != NULL)
        {
            if (arg0 == 0 || func_800A3274(D_80135490[index]) == arg0)
            {
                func_800F3880(D_80135490[index]);
                func_800A91F4(index);
                D_80135490[index] = NULL;
            }
        }
    }
}

void func_800F48BC(s32 arg0, f32* arg1)
{
    f32 sp2C[3];
    f32 sp20[3];
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    func_800F4200(sp1C, sp2C);
    func_800EFA20(sp20, arg1, time_getDelta());
    func_800EF04C(sp2C, sp20);
    func_800F4648(sp1C, sp2C);
}

void func_800F4924(s32 arg0,s32 a1)
{
    func_800A17A8(D_80135490[arg0],a1);
}

void func_800F4950(s32 arg0)
{
    _baattach_entrypoint_2(D_80135490[arg0]);
}

void func_800F497C(s32 arg0)
{
    _badrone_entrypoint_5(D_80135490[arg0]);
}

void func_800F49A8(s32 arg0)
{
    _badrone_entrypoint_10(D_80135490[arg0]);
}

void func_800F49D4(s32 arg0,void* arg1,s32 arg2)
{
    _badrone_entrypoint_11(D_80135490[arg0],arg1,arg2);
}

void func_800F4A00(s32 arg0)
{
    _badrone_entrypoint_12(D_80135490[arg0]);
}

void func_800F4A2C(s32 arg0)
{
    _badrone_entrypoint_13(D_80135490[arg0]);
}


void func_800F4A58(s32 arg0, s32 arg1, f32 arg2) {
    _badrone_entrypoint_14(D_80135490[arg0], arg1, arg2);
}

void func_800F4A8C(s32 arg0, s32 arg1, f32 arg2) {
    _badrone_entrypoint_15(D_80135490[arg0], arg1, arg2);
}

void func_800F4AC0(s32 arg0, s32 arg1, f32 arg2) {
    _badrone_entrypoint_16(D_80135490[arg0], arg1, arg2);
}

void func_800F4AF4(s32 arg0,s32 arg1)
{
    func_800A4DA4(D_80135490[arg0],arg1);
}

void func_800F4B20(s32 arg0)
{
    func_800A4E30(D_80135490[arg0]);
}

s32 func_800F4B4C(s32 arg0) {
    s32 var_v1;

    if (func_8009E674(D_80135490[arg0], 0x200000) != 0) {
        var_v1 = 0;
    } else {
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_800F4B8C(u32 a0, u32 a1, s32 a2)
{
    return func_800F3930(D_80135490[a0],a1,a2);
}

s32 func_800F4BB8(u32 arg0, u32 arg1, s32 arg2)
{
    return func_800F3A78(D_80135490[arg0],arg1,arg2);
}

s32 func_800F4BE4(s32 arg0) {
    s32 var_v1;

    if (func_8009E674(D_80135490[arg0], 0x20000) != 0) {
        var_v1 = 0;
    } else {
        var_v1 = 1;
    }
    return var_v1;
}

s32 func_800F4C24(s32 arg0) {
    PlayerState* sp1C;
    s32 temp_v0;

    sp1C = D_80135490[arg0];
    if (func_800F6D24(arg0) != 0) {
        return 0;
    }
    if (func_800F68B8(arg0) != 0) {
        return 0;
    }
    if (func_800F6CC8((u32) arg0) != 0) {
        return 0;
    }
    temp_v0 = bs_getCurrentState(sp1C);
    if ((temp_v0 == 0xED) || (temp_v0 == 0x157)) {
        return 0;
    }
    return 1;
}

void func_800F4CC0(s32 arg0)
{
    func_80091E6C(D_80135490[arg0]);
}

void func_800F4CEC(s32 arg0,u32 arg1)
{
    func_80091E48(D_80135490[arg0],arg1);
}

void func_800F4D18(s32 arg0, s32 arg1, s32 arg2) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    func_8009F678(sp1C, arg1, arg2, func_800A3048(sp1C) * 1000.0f);
}

void func_800F4D74(s32 arg0, Vec3f* arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 sp34[3];
    f32 sp28[3];
    PlayerState* sp24;

    sp24 = D_80135490[arg0];
    func_800EFA4C(sp34, arg1->pos.x - arg2, arg1->pos.y - arg3, arg1->pos.z - arg4);
    func_800EFA4C(sp28, arg1->pos.x + arg2, arg1->pos.y + arg3, arg1->pos.z + arg4);
    func_8009F678(sp24, sp34, sp28, func_800A3048(sp24) * 1000.0f);
}

void func_800F4E5C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    PlayerState* sp24;

    sp24 = D_80135490[arg0];
    func_8009F440(sp24, arg1, arg2, arg3, arg4, func_800A3048(sp24) * 1000.0f);
}

void func_800F4EC8(s32 arg0, s32 arg1, s32 arg2, volatile s32 arg3, f32 arg4) {
    PlayerState* sp24;

    sp24 = D_80135490[arg0];
    func_8009F860(sp24, arg1, arg2, arg3, arg4, func_800A3048(sp24) * 1000.0f);
}

void func_800F4F34(s32 arg0, f32* arg1, f32 arg2, f32 arg3) {
    PlayerState* sp24;

    sp24 = D_80135490[arg0];
    func_8009FA20(sp24, arg1, arg2, arg3, func_800A3048(sp24) * 1000.0f);
}

void func_800F4F98(s32 arg0)
{
    _baattach_entrypoint_5(D_80135490[arg0]);
}

void func_800F4FC4(void) {
    s32 temp_v0;

    temp_v0 = _plsu_entrypoint_1(0x11);
    if (temp_v0 != -1) {
        func_800F7B9C(temp_v0, 0x1FU);
    }
    func_80101180(0x15E, 0x2C, 0);
}


#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F5008.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F50D0.s")

void func_800F5184(void) {
    func_800F47C0(func_80093528);
}

void func_800F51A8(void) {
    func_800F47C0(func_80093584);
}

void func_800F51CC(void) {
    func_800F47C0(func_80098BE0);
}

void func_800F51F0(s32 arg0)
{
    func_80093504(D_80135490[arg0]);
}

void func_800F521C(s32 arg0, s32 arg1) {
    PlayerState* sp1C;
    sp1C = D_80135490[arg0];
    bs_setState(sp1C, _badata_entrypoint_35(sp1C));
    func_800F457C(sp1C, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F5268.s")

void func_800F52B8(s32 arg0)
{
    func_8008EF3C(D_80135490[arg0]);
}

void func_800F52E4(s32 arg0)
{
    func_8008F4F0(D_80135490[arg0]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F5310.s")

AnimCtrl* func_800F5378(s32 arg0)
{
    return baanim_getAnimCtrlPtr(D_80135490[arg0]);
}

void func_800F53A4(s32 arg0)
{
    func_8008E938(D_80135490[arg0]);
}

PlayerState* func_800F53D0(s32 arg0) {
    return D_80135490[arg0];
}

PlayerState* func_800F53E4(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 8)) {
        return D_80135490[arg0];
    }
    return NULL;
}

TransformationId func_800F5410(s32 arg0)
{
    return func_800A3274(D_80135490[arg0]);
}

s32 func_800F543C(s32 arg0)
{
    return 1 << (func_800A3274(D_80135490[arg0]) + 0x1F);
}

void func_800F5470(s32 arg0)
{
    func_80098590(D_80135490[arg0]);
}

f32 func_800F549C(s32 arg0, s32 arg1) {
    PlayerState* temp_a2;

    temp_a2 = D_80135490[arg0];
    if (temp_a2 != NULL) {
        return bastatetimer_get(temp_a2, arg1);
    }
    return 0.0f;
}

//Get Which Character is in Control
u32 func_800F54E4(void) 
{
	return D_801354DC;
}

s32 func_800F54F0(s32 arg0)
{
    return bakey_getControllerIndex(D_80135490[arg0]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F551C.s")

void func_800F554C(s32 arg0)
{
    func_80092BDC(D_80135490[arg0]);
}

s32 func_800F5578(s32 arg0)
{
    return func_800A1718(D_80135490[arg0]);
}

void func_800F55A4(s32 arg0)
{
    func_800A1760(D_80135490[arg0]);
}

void func_800F55D0(s32 arg0)
{
    func_800965D4(D_80135490[arg0]);
}

s32 func_800F55FC(s32 arg0)
{
    return func_80096628(D_80135490[arg0]);
}

void func_800F5628(s32 arg0)
{
    func_80096364(D_80135490[arg0]);
}

void func_800F5654(s32 arg0)
{
    func_80096670(D_80135490[arg0]);
}

void func_800F5680(s32 arg0,f32 arg1[3])
{
    func_800963C0(D_80135490[arg0],arg1);
}

s32 func_800F56AC(s32 arg0)
{
    return func_80096694(D_80135490[arg0]);
}

Unk80132ED0* func_800F56D8(s32 arg0)
{
    return _bahold_entrypoint_5(D_80135490[arg0]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F5704.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F5754.s")

void func_800F5794(s32 arg0)
{
    func_800F3B3C(D_80135490[arg0]);
}

void func_800F57C0(s32 arg0) {
    s32 sp18[2];

    func_8008E9B8(D_80135490[arg0], sp18);
}

void func_800F57F0(s32 arg0, f32* arg1)
{
    func_800F3B90(D_80135490[arg0],arg1);
}

s32 func_800F581C(s32 arg0) {
    PlayerState* sp1C;
    s32 var_v1;
    sp1C = D_80135490[arg0];
    if (func_8009650C(sp1C) != 0) {
        var_v1 = func_80096434(sp1C);
    } else {
        var_v1 = 0;
    }
    return var_v1;
}

void func_800F586C(s32 arg0)
{
    func_80098B5C(D_80135490[arg0]);
}

s32 func_800F5898(void) 
{
	return 8;
}

void func_800F58A0(s32 arg0)
{
    _bswalk_entrypoint_0(D_80135490[arg0]);
}

void func_800F58CC(s32 arg0,f32* arg1)
{
    func_80096394(D_80135490[arg0],arg1);
}

void func_800F58F8(s32 arg0)
{
    func_800A3354(D_80135490[arg0]);
}

void func_800F5924(s32 arg0)
{
    func_800A3360(D_80135490[arg0]);
}

void func_800F5950(s32 arg0, f32* arg1, f32* arg2, f32* arg3) {
    f32 sp24;
    f32 sp20;
    f32 sp1C;

    func_800A3148(D_80135490[arg0], &sp24, &sp20, &sp1C);
    *arg1 = (sp1C * 0.5f) + sp20;
    *arg2 = sp20 - (sp1C * 0.5f);
    *arg3 = sp24;
}

void func_800F59D4(s32 arg0)
{
    _bapackctrl_entrypoint_1(D_80135490[arg0]);
}

void func_800F5A00(s32 arg0,f32* a1)
{
    func_800F3BB0(D_80135490[arg0],a1);
}

void func_800F5A2C(s32 arg0)
{
    func_800F3BD0(D_80135490[arg0]);
}

void func_800F5A58(s32 arg0, unkStruct800F5A58* arg1) {
    f32 sp1C[3];

    func_800F3BB0(D_80135490[arg0], sp1C, arg1);
    arg1->unk0 = (s32) sp1C[0];
    arg1->unk4 = (s32) sp1C[1];
    arg1->unk8 = (s32) sp1C[2];
}

f32 func_800F5AD0(s32 arg0) {
    return 4.0f;
}

f32 func_800F5AE0(s32 arg0)
{
    return func_8009BFCC(D_80135490[arg0]);
}

void func_800F5B0C(s32 arg0)
{
    func_8009CC68(D_80135490[arg0]);
}

void func_800F5B38(s32 arg0)
{
    func_800F3E84(D_80135490[arg0]);
}

f32 func_800F5B64(s32 arg0, f32* arg1) {
    f32 sp24;
    f32 sp20;
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    func_80095870(sp1C, &sp20, &sp24);
    func_8009C128(sp1C, arg1);
    arg1[1] += sp20;
    return sp24;
}

void func_800F5BC4(s32 arg0)
{
    func_80092B8C(D_80135490[arg0]);
}



f32 func_800F5BF0(s32 arg0, f32* arg1) {
    f32 sp2C;
    f32 sp20[3];
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    sp2C = func_80092B8C(sp1C, arg1);
    func_8009C128(sp1C, sp20);
    func_800EF04C(arg1, sp20);
    return sp2C;
}

f32 func_800F5C44(s32 arg0) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    if (func_800A3274(sp1C) != TRANSFORM_2_SNOWBALL) {
        return 0.0f;
    }
    return _basnowball_entrypoint_4(sp1C);
}

void func_800F5C94(s32 arg0)
{
    func_800F3ED0(D_80135490[arg0]);
}

void func_800F5CC0(s32 arg0)
{
    bastick_getAngle(D_80135490[arg0]);
}

void func_800F5CEC(s32 arg0)
{
    bastick_distance(D_80135490[arg0]);
}

void func_800F5D18(s32 arg0)
{
    func_800F40EC(D_80135490[arg0]);
}

void func_800F5D44(s32 arg0, f32* arg1) 
{
    func_800A33CC(D_80135490[arg0],arg1);
}

void func_800F5D70(s32 arg0, f32* arg1)
{
    func_8009BB24(D_80135490[arg0],arg1);
}

void func_800F5D9C(s32 arg0, f32* arg1)
{
    func_800F4200(D_80135490[arg0],arg1);
}

void func_800F5DC8(s32 arg0, Vec3f* arg1) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    arg1->pos.x = func_8009BFD8(sp1C);
    arg1->pos.y = yaw_getIdeal(sp1C);
    arg1->pos.z = baroll_getIdeal(sp1C);
}

void func_800F5E24(s32 arg0)
{
    func_800966BC(D_80135490[arg0]);
}

void func_800F5E50(s32 arg0)
{
    func_800966E0(D_80135490[arg0]);
}

void func_800F5E7C(s32 arg0) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    if (func_80096544(sp1C) != 0) {
        func_800964DC(sp1C);
        return;
    }
    func_8009C150(sp1C);
}

void func_800F5ECC(s32 arg0)
{
    func_800A4C68(D_80135490[arg0]);
}

s32 func_800F5EF8(s32 arg0)
{
    return func_800A4C88(D_80135490[arg0]);
}

f32 func_800F5F24(u32 arg0)
{
    return yaw_get(D_80135490[arg0]);
}

f32 func_800F5F50(s32 arg0)
{
    return yaw_getIdeal(D_80135490[arg0]);
}

void func_800F5F7C(s32 arg0)
{
    func_8009C150(D_80135490[arg0]);
}

s32 func_800F5FA8(s32 arg0) {
    bakey_setState(D_80135490[arg0], BUTTON_B, 2);
    return 1;
}

s32 func_800F5FE0(s32 arg0) {
    bakey_setState(D_80135490[arg0], 9, 0);
    return 1;
}

void func_800F6018(s32 arg0) {
    bakey_setState(D_80135490[arg0], 8, 2);
}

void func_800F604C(PlayerState* arg0, s32 arg1) {
    func_8009EAD0(arg1);
    bs_setState(arg0, _badata_entrypoint_35(arg0));
    func_8009EAD0(1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F608C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F6140.s")

void func_800F61E4(void) {
    func_800F6140(-1);
}

void func_800F6204()
{
    func_800F6140();
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F6224.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F6308.s")

void func_800F6388(s32 arg0, s32 arg1)
{
    func_8008F788(D_80135490[arg0],arg1);
}

void func_800F63B4(s32 arg0)
{
    func_8008F7B4(D_80135490[arg0]);
}

void func_800F63E0(s32 arg0, u32 arg1)
{
    func_8008F854(D_80135490[arg0],arg1);
}

void func_800F640C(s32 arg0)
{
    func_8008F828(D_80135490[arg0]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F6438.s")

s32 func_800F6478(s32 arg0)
{
    return func_800F424C(D_80135490[arg0]);
}

//Tranformation Type is a bitfield so you can check multiple transformations at once
s32 func_800F64A4(s32 characterIndex, AllowedTransformation transformationType)
{
    return func_800F543C(characterIndex) & transformationType ? 1 : 0;
}

void func_800F64DC(s32 arg0) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    func_8009CA70(sp1C, bs_getCurrentState(sp1C), 0x400000);
}

s32 func_800F651C(u32 arg0) {
    PlayerState* sp1C;
    sp1C = D_80135490[arg0];
    if (baphysics_get_target_horizontal_velocity(sp1C) == 0.0f) {
        return 1;
    }
    if (bs_getCurrentState(sp1C) == 1) {
        return 1;
    }
    return func_8009E674(sp1C, 0x1000);
}

s32 func_800F6590(s32 arg0) {
    PlayerState* sp1C;
    sp1C = D_80135490[arg0];
    return func_8009CBDC(sp1C, bs_getCurrentState(sp1C)) == 0xA;
}

s32 func_800F65D0(s32 arg0) {
    s32 var_v0;

    if (D_8012762C == 0x1B) {
        var_v0 = 1;
    } else {
        var_v0 = arg0 == D_801354DC;
    }
    return var_v0;
}

s32 func_800F6604(s32 arg0) {
    return _bacough_entrypoint_1(D_80135490[arg0]) == 2;
}

s32 func_800F6634(s32 arg0) 
{
	return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F6640.s")

void func_800F6690(s32 arg0)
{
    func_80092EB0(D_80135490[arg0]);
}

void func_800F66BC(s32 arg0, s32 arg1, f32 arg2) {
    func_8008DAE8(D_80135490[arg0], arg1, arg2);
}

s32 func_800F66F0(u32 arg0) {
    return bs_getCurrentState(D_80135490[arg0]) == 0x6F;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F6720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F6774.s")

void func_800F67EC(s32 arg0) {
    PlayerState* sp1C;
    sp1C = D_80135490[arg0];
    func_8009CA70(sp1C, bs_getCurrentState(sp1C), 0x200);
}

s32 func_800F682C(s32 arg0) {
    if (func_800F6D24(arg0) != 0) {
        return 0;
    }
    if (func_800F6478(arg0) == 0) {
        return 0;
    }
    if (func_8009BD44(D_80135490[arg0]) == 3) {
        return 0;
    }
    if (func_800F6C1C(arg0) == 0) {
        return 0;
    }
    return 1;
}

s32 func_800F68B8(s32 arg0) {
    PlayerState* sp1C;
    sp1C = D_80135490[arg0];
    if (func_8009E674(sp1C, 8) != 0) {
        return _badrone_entrypoint_3(sp1C) == 1;
    }
    return 0;
}

s32 func_800F690C(s32 arg0) {
    return baflag_isTrue(D_80135490[arg0], BA_FLAG_17_FIRST_PERSON_VIEW);
}

s32 func_800F693C(s32 arg0)
{
    return func_8008DD70(D_80135490[arg0]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F6968.s")

int func_800F69E8(s32 arg0) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    return (player_isStable(sp1C) != 0) && (func_8009659C(sp1C, 0x2000) != 0);
}

s32 func_800F6A38(s32 arg0) {
    PlayerState* sp1C;
    s32 var_v1;

    sp1C = D_80135490[arg0];
    if (player_inWater(sp1C) == 0) {
        return 0;
    }
    if ((func_800966BC(sp1C) & 0x22000) == 0x22000) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}

int func_800F6AA4(s32 arg0) {
    s32 temp_v0;

    temp_v0 = bs_getCurrentState(D_80135490[arg0]);
    return temp_v0 == 0x1B || temp_v0 == 0x1C || temp_v0 == 0x1D || temp_v0 == 0x1E || temp_v0 == 0x1A || temp_v0 == 0xA4 || temp_v0 == 0xA5;
}

u8 func_800F6B34(void) {
	return D_801354DA;
}

s32 func_800F6B40(s32 arg0) {
    if (func_800F690C(arg0) != 0) {
        return 1;
    }
    return _ncba1p_entrypoint_10(func_800A4CA8(D_80135490[arg0])) == 3;
}

int func_800F6B94(s32 arg0) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    return (func_800A3274(sp1C) == TRANSFORM_2_SNOWBALL) && (func_800A1718(sp1C) >= 5);
}

s32 func_800F6BE4(s32 arg0) {
    if ((arg0 >= 0) && (arg0 < 8) && (D_80135490[arg0] != NULL)) {
        return 1;
    }
    return 0;
}

s32 func_800F6C1C(s32 arg0) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    return func_8009CB44(sp1C, bs_getCurrentState(sp1C)) != 0;
}

s32 func_800F6C5C(s32 arg0)
{
    return player_isStable(D_80135490[arg0]);
}

s32 func_800F6C88(s32 arg0) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    return func_8009CBDC(sp1C, bs_getCurrentState(sp1C)) == 2;
}

s32 func_800F6CC8(u32 arg0) {
    if (func_8009E674(D_80135490[arg0], 4) != 0) {
        return 1;
    }
    if (func_800F8B64() != 0) {
        return 1;
    }
    return 0;
}

s32 func_800F6D24(s32 arg0)
{
    return func_8008E124(D_80135490[arg0]);
}

int func_800F6D50(s32 arg0) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    return (func_8008E124(sp1C) != 0) && (func_8009E674(sp1C, 0x10) != 0);
}

s32 func_800F6DA0(s32 arg0) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    return func_8009CBDC(sp1C, bs_getCurrentState(sp1C)) == 0x12;
}

s32 func_800F6DE0(f32* arg0)
{
    return _bsbabykaz_entrypoint_14(arg0);
}

void func_800F6E00(s32 arg0) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    func_8009CA70(sp1C, bs_getCurrentState(sp1C), 0x100000);
}

s32 func_800F6E40(s32 arg0) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    return func_8009CBDC(sp1C, bs_getCurrentState(sp1C)) == 0x13;
}

void func_800F6E80(s32 arg0)
{
    func_800A336C(D_80135490[arg0]);
}

s32 func_800F6EAC(s32 arg0) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    if (func_8009E674(sp1C, 8) != 0) {
        return _badrone_entrypoint_3(sp1C) == 9;
    }
    return 0;
}

s32 func_800F6F00(s32 arg0) {
    f32 sp2C[3];
    f32 sp20[3];
    PlayerState* sp1C;
    f32* sp18;

    sp1C = D_80135490[arg0];
    if (_badata_entrypoint_14(sp1C) == 0) {
        return 1;
    }
    sp18 = sp2C;
    func_800F58CC(arg0, sp2C);
    if (*sp18 != 0.0f || sp2C[2] != 0.0f) {
        return 0;
    }
    if (func_800F6C5C(arg0) == 0) {
        return 0;
    }
    func_800F5D70(arg0, sp20);
    if (func_800F55FC(arg0) & 0x8000) {
        if (sp20[1] < 0.0f && sp20[1] >= -1.0f) {
            return 1;
        }
        return 0;
    }
    if (sp20[1] != -1.0f) {
        return 0;
    }
    return 1;
}

s32 func_800F7018(s32 arg0) {
    PlayerState* sp1C;
    PlayerState* temp_a0;
    sp1C = D_80135490[arg0];
    return func_8009CBDC(sp1C, bs_getCurrentState(sp1C)) == 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F7058.s")

s32 func_800F70BC(u32 arg0) {
    return func_8009E71C(D_80135490[arg0], 0xE);
}

s32 func_800F70EC(s32 arg0) {
    return func_8009BD44(D_80135490[arg0]) != 3;
}

s32 func_800F711C(s32 arg0) {
    return func_8009E674(D_80135490[arg0], 8) == 0;
}

s32 func_800F7150(s32 arg0) {
    return func_80094510(D_80135490[arg0]) == 7;
}

s32 func_800F7180(s32 arg0) {
    PlayerState* sp1C;
    sp1C = D_80135490[arg0];
    if (func_8009E674(sp1C, 8) != 0) {
        return _badrone_entrypoint_3(sp1C) == 0xE;
    }
    return 0;
}

s32 func_800F71D4(u32 arg0)
{
    return func_8008E37C(D_80135490[arg0]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F7200.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F7270.s")


int func_800F72DC(u32 arg0) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    return (func_8009640C(sp1C) != 0) || (baflag_isTrue(sp1C, 0x26) != 0);
}

void func_800F732C(void) {
    D_801354DA = 1;
    func_800F482C(0x11);
    func_800F482C(0);
    D_801354DA = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F7364.s")

void func_800F739C(s32 arg0, s32 arg1) {
    func_800C7074(arg1, 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F73C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F759C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F7620.s")

void func_800F7664(u32 arg0, s32 arg1, s32 arg2) {
    PlayerState* sp1C;
    sp1C = D_80135490[arg0];
    func_8009AD20(sp1C, (s32) arg1);
    func_8009AD2C(sp1C, (s32) arg2);
    func_8009E7C8(sp1C, 0x7D);
}

s32 func_800F76B0(s32 arg0, s32 arg1, Unk80132ED0* arg2) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    func_8009AD20(sp1C, arg1);
    func_8009AD14(sp1C, arg2);
    return func_8009E7C8(sp1C, 0x24) == 2;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F7700.s")

s32 func_800F7750(s32 arg0, s32 arg1, f32 arg2, s32 arg3, s32 arg4) {
    s32 sp24;
    PlayerState* temp_s0;

    temp_s0 = D_80135490[arg0];
    if (arg4 != 0) {
        sp24 = 0x98;
    } else {
        sp24 = 0x2D;
    }
    func_8009ACF4(temp_s0, arg2);
    func_8009AD04(temp_s0, arg3);
    func_8009AD20(temp_s0, 0xE);
    func_8009AD44(temp_s0, arg1);
    return func_8009E7C8(temp_s0, sp24) == 2;
}

void func_800F77E8(s32 arg0, s32 arg1) {
    func_800F7750(arg0, arg1, 840.0f, 0xC4BB8000, 0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F7814.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F7844.s")

s32 func_800F7874(s32 arg0, Unk80132ED0* arg1, s32 arg2) {
    PlayerState* sp1C;
    sp1C = D_80135490[arg0];
    func_8009AD44(sp1C, arg2);
    func_8009AD14(sp1C, arg1);
    return func_8009E7C8(sp1C, 0x66) == 2;
}

void func_800F78C8(s32 arg0,s32 arg1)
{
    func_800F7C58(arg0,0x17,arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F78EC.s")

void func_800F796C(s32 arg0,s32 arg1)
{
    func_800F798C(arg0,arg1,0x1);
}

s32 func_800F798C(s32 arg0, s32 arg1, s32 arg2) {
    PlayerState* sp1C;
    sp1C = D_80135490[arg0];
    func_8009AD20(sp1C, arg1);
    func_8009AD2C(sp1C, arg2);
    return func_8009E7C8(sp1C, 0x1F) == 2;
}

s32 func_800F79DC(s32 arg0, s32 arg1, Unk80132ED0* arg2) {
    PlayerState* sp1C;
    sp1C = D_80135490[arg0];
    func_8009AD20(sp1C, arg1);
    func_8009AD14(sp1C, arg2);
    return func_8009E7C8(sp1C, 0x21) == 2;
}


s32 func_800F7A2C(s32 arg0, s32 arg1, s32 arg2) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    func_8009AD20(sp1C, arg1);
    func_8009AD44(sp1C, arg2);
    return func_8009E7C8(sp1C, 0x20) == 2;
}

s32 func_800F7A7C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    PlayerState* temp_s0;

    temp_s0 = D_80135490[arg0];
    func_8009AD38(temp_s0, arg1);
    func_8009AD20(temp_s0, arg2);
    func_8009AD2C(temp_s0, arg3);
    func_8009AD44(temp_s0, arg4);
    return func_8009E7C8(temp_s0, 0x4E) == 2;
}

void func_800F7AF4(s32 arg0, s32 arg1) {
    func_800F7B1C(arg0, arg1, 840.0f, 0xC4BB8000);
}

s32 func_800F7B1C(s32 arg0, s32 arg1, f32 arg2, s32 arg3) {
    PlayerState* temp_s0;

    temp_s0 = D_80135490[arg0];
    func_8009ACF4(temp_s0, arg2);
    func_8009AD04(temp_s0, arg3);
    func_8009AD20(temp_s0, 0x10);
    func_8009AD44(temp_s0, arg1);
    return func_8009E7C8(temp_s0, 0x2E) == 2;
}

s32 func_800F7B9C(s32 arg0,u32 a1)
{
    return func_8009E7C8(D_80135490[arg0],a1);
}


void func_800F7BC8(s32 arg0, s32 arg1, Unk80132ED0* arg2) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    func_8009AD14(sp1C, arg2);
    func_8009E7C8(sp1C, arg1);
}

void func_800F7C0C(s32 arg0, s32 arg1, f32 arg2) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    func_8009ACF4(sp1C, arg2);
    func_8009E7C8(sp1C, arg1);
}

s32 func_800F7C58(s32 arg0, s32 arg1, s32 arg2) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];

    func_8009AD20(sp1C, arg2);
    return func_8009E7C8(sp1C, arg1);
}

void func_800F7C9C(u32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    func_8009AD20(sp1C, arg2);
    func_8009AD2C(sp1C, arg3);
    func_8009E7C8(sp1C, arg1);
}

void func_800F7CF4(s32 arg0, s32 arg1, f32* arg2) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    func_8009AD44(sp1C, (s32) arg2);
    func_8009E7C8(sp1C, arg1);
}

void func_800F7D38(s32 arg0, s32 arg1, s32 arg2, f32 arg3) {
    PlayerState* sp1C;
    PlayerState* temp_a0;

    sp1C = D_80135490[arg0];
    func_8009AD44(sp1C, arg2);
    func_8009ACF4(sp1C, arg3);
    func_8009E7C8(sp1C, arg1);
}

void func_800F7D90(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    PlayerState* sp1C;
    
    sp1C = D_80135490[arg0];
    func_8009AD44(sp1C, arg2);
    func_8009AD20(sp1C, arg3);
    func_8009E7C8(sp1C, arg1);
}

s32 func_800F7DE8(s32 arg0, Unk80132ED0* arg1, s32 arg2) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    func_8009AD20(sp1C, arg2);
    func_8009AD14(sp1C, arg1);
    return func_8009E7C8(sp1C, 0x48) == 2;
}

s32 func_800F7E3C(s32 arg0, s32 arg1) {
    return func_800F7C58(arg0, 0x84, arg1) == 2;
}

void func_800F7E64(s32 arg0, s32 arg1) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    func_800A3410(sp1C, arg1);
    func_80092778(sp1C);
}

void func_800F7E9C(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        func_800A4E74(D_80135490[arg0]);
    }
}

void func_800F7ECC(s32 arg0, s32 arg1, f32 arg2) {
    bastatetimer_set(D_80135490[arg0], arg1, arg2);
}



s32 func_800F7F00(s32 arg0, s32 arg1, s32 arg2, f32 arg3, s32 arg4, s32 arg5, f32 arg6) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    return func_80098778(sp1C, arg1, arg2, arg3, arg4, arg5, arg6);
}


void func_800F7F50(u32 arg0, f32* arg1, f32* arg2, f32 arg3, s32 arg4, s32 arg5) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    func_80098730(sp1C, arg1, arg2, arg3, arg4, arg5);
}

void func_800F7F98(u32 arg0, s32 arg1) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    if (arg1 != 0) {
        bakey_func_80091C14(sp1C, 1);
        bastick_func_8009F18C(sp1C, 1);
    } else {
        bakey_func_80091C14(sp1C, 0);
        bastick_func_8009F18C(sp1C, 0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F8004.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F8088.s")

void func_800F80D8(u32 arg0) {
	D_801354DC = arg0;
}

void func_800F80E4(s32 arg0, u32 arg1) {
    PlayerState* sp1C;
    s32 var_a2;

    sp1C = D_80135490[arg0];
    if (arg1 != 0) {
        var_a2 = 0;
    } else {
        var_a2 = 1;
    }
    func_800947EC(sp1C, 1, var_a2);
}

void func_800F8128(s32 arg0)
{
    func_800F80D8(arg0);
    func_800A91A8(arg0);
}
void func_800F8150(s32 arg0)
{
    func_80093370(D_80135490[arg0]);
}

void func_800F817C(s32 arg0)
{
    func_8009337C(D_80135490[arg0]);
}

void func_800F81A8(s32 arg0)
{
    func_800A1870(D_80135490[arg0]);
}

void func_800F81D4(s32 arg0)
{
    _bafpctrl_entrypoint_12(D_80135490[arg0]);
}

void func_800F8200(s32 arg0)
{
    func_800F4524(D_80135490[arg0]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F822C.s")

void func_800F8268(s32 arg0,s32 a1, s32 a2)
{
    func_800A38F0(D_80135490[arg0],a1,a2);
}

void func_800F8294(s32 arg0,f32* a1)
{
    func_800F452C(D_80135490[arg0],a1);
}
void func_800F82C0(s32 arg0) {
    *(&D_801354B0 + arg0) = 1;
}


void func_800F82D4(s32 arg0,s32 arg1)
{
    func_800F457C(D_80135490[arg0],arg1);
}

void func_800F8300(s32 arg0, s32 arg1, f32* arg2)
{
    func_800F45B0(D_80135490[arg0],arg1,arg2);
}

void func_800F832C(s32 arg0,f32* a1)
{
    func_800F45E0(D_80135490[arg0],a1);
}

void func_800F8358(s32 arg0, s32 arg1) {
    _baduo_entrypoint_7(D_80135490[arg0], 3);
}

void func_800F838C(s32 arg0)
{
    func_8008F748(D_80135490[arg0]);
}

void func_800F83B8(s32 arg0)
{
    func_800A3514(D_80135490[arg0]);
}

void func_800F83E4(s32 arg0, f32 arg1) {
    baphysics_set_vertical_velocity(D_80135490[arg0], arg1);
}

void func_800F8418(s32 arg0, f32* arg1)
{
    func_800F4648(D_80135490[arg0],arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F8444.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F849C.s")

void func_800F84D0(s32 arg0)
{
    func_8009659C(D_80135490[arg0]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F84FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F86C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F86D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F8730.s")

s32 func_800F87A4(s32 arg0) {
    PlayerState* sp1C;

    sp1C = D_80135490[arg0];
    if ((func_800F56D8(arg0) != NULL) && (func_8009E674(sp1C, 0x400) != 0)) {
        return func_8009E7C8(sp1C, 0x16) == 2;
    }
    return 0;
}

void func_800F8804(s32 arg0,f32* arg1)
{
    func_8009CD70(D_80135490[arg0],arg1);
}

void func_800F8830(s32 arg0)
{
    func_8009E7C8(arg0,0x99);
}

void func_800F8850(void) {
    func_800F47C0((void (*)(PlayerState*)) func_800F8830);
}

void func_800F8874(s32 arg0)
{
    func_8009224C(D_80135490[arg0]);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F88A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F8914.s")

s32 func_800F89BC(void) {
    if (D_801354F8.unk0 == 2) {
        return 0xB;
    }
    return 1;
}

s32 func_800F89E4(s32 arg0, f32* arg1) {
    s32 sp1C;

    if (arg0 == 0xA) {
        func_800EE7F8(arg1, &D_80135500);
        sp1C = D_8013551C;
    } else if (arg0 == 0xB) {
        func_800EE7F8(arg1, &D_80135510);
        sp1C = D_8013551C;
    }
    return sp1C;
}


f32 func_800F8A50(void)
{
	return D_8013550C;
}

s16 func_800F8A5C(s32 arg0) {
    return *(s16*)(func_800F88A0(arg0) + 0x22);
}

u8 func_800F8A80(s32 arg0) {
    return *(s16*)(func_800F88A0(arg0) + 0x20);
}

u8 func_800F8AA4(void) {
    UnkStruct800F8AA4* sp1C;
    UnkStruct800F8AA4* var_v1;
    u32 temp_v0;

    sp1C = vector_begin(D_801354F0);
    temp_v0 = vector_end(D_801354F0);
    var_v1 = sp1C;
    if ((u32)var_v1 < temp_v0) {
        do {
            if (var_v1->unk1 != 0) {
                return var_v1->unk0;
            }
            var_v1++;
        } while ((u32)var_v1 < temp_v0);
    }
    return 0;
}

void func_800F8B0C(s32 arg0, s32 arg1) {
    u8* v0;

    v0 = func_800F88A0(arg0);
    func_800EE7F8(arg1, v0 + 0x24);
}

void func_800F8B38(s32 arg0, s32 arg1) {
    u8* v0;

    v0 = func_800F88A0(arg0);
    func_800EE7F8(arg1, v0 + 0x30);
}

s32 func_800F8B64(void) {
    return (s32)D_801354F8.unk1;
}

u8 func_800F8B70(void) {
    return D_801354F8.unk4;
}

u8 func_800F8B7C(void) {
    return D_801354F8.unk5;
}

u8 func_800F8B88(void) {
    return D_801354F8.unk0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F8B94.s")

void func_800F8D50(s32 arg0, s32 arg1) {
    func_800F8D80(arg0, func_800F88A0(arg1));
}

void func_800F8D80(s32 arg0, u8* arg1) {
    _plcamera_entrypoint_12(arg0, arg1 + 4, arg1 + 0x10);
}

s32 func_800F8DA8(s32 arg0) {
    s32 var_v1;

    if (func_800F88A0(arg0) != 0) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}





void func_800F8DD8(void) {
    func_800F9A24();
    vector_free(D_801354F0);
    D_801354F0 = NULL;
}


void func_800F8E08(void) {
    D_801354F0 = vector_new(0x3C, 2);
    D_801354F8.unk1 = 0;
    D_801354F8.unk4 = 0;
    D_801354F8.unk5 = 0;
    D_801354F8.unk0 = 0;
    func_800F911C(1);
    func_800EFD24(&D_80135500);
    func_800EFD24(&D_80135510);
    D_8013551C = 0;
    func_800F9A44();
}

void func_800F8E78(s32 arg0) {
    void* temp_v0;

    temp_v0 = func_800F88A0(arg0);
    if (temp_v0 != 0) {
        vector_erase(D_801354F0, vector_index_of(D_801354F0, temp_v0));
    }
}

void func_800F8EBC(s32 a0)
{
    func_800F8E78(func_800F5410(a0));
}

void func_800F8EE4(s32 arg0) {
    void* temp_v0;

    temp_v0 = func_800F88A0(func_800F5410(arg0));
    if (temp_v0 != NULL) {
        func_800F8914(temp_v0, arg0);
        return;
    }
    func_800F8914(vector_push_back(&D_801354F0), arg0);
}


void func_800F8F3C(void) {
    void* temp_v0;
    unkStruct800F8F3C* temp_s2;
    unkStruct800F8F3C* s0;

    if (D_801354F8.unk0 == 2 && D_801354F0 != 0) {
        temp_s2 = vector_begin(D_801354F0);
        temp_v0 = vector_end(D_801354F0);
        s0 = temp_s2;
        if ((u32)temp_s2 < (u32)temp_v0) {
            do {
                if (s0->unk0 == 0xA) {
                    func_800EE7F8((u8*)s0 + 0x24, &D_80135500);
                    s0->unk22 = (s16)D_801354F8.unk24;
                    func_800EFA4C((u8*)s0 + 0x30, 0.0f, D_801354F8.unk14, 0.0f);
                } else if (s0->unk0 == 0xB) {
                    func_800EE7F8((u8*)s0 + 0x24, &D_80135510);
                    s0->unk22 = (s16)D_801354F8.unk24;
                    func_800EFA4C((u8*)s0 + 0x30, 0.0f, D_801354F8.unk14, 0.0f);
                }
                s0 = (unkStruct800F8F3C*)((u8*)s0 + 0x3C);
            } while ((u32)s0 < (u32)temp_v0);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F9070.s")

void func_800F9098(s32 arg0, f32* arg1) {
    if (arg0 == 0xA) {
        func_800EE7F8(&D_80135500, arg1);
    } else if (arg0 == 0xB) {
        func_800EE7F8(&D_80135510, arg1);
    }
    D_8013551C = func_800EA05C();
}

void func_800F90EC(f32 arg0) {
    D_8013550C = arg0;
}

void func_800F90F8(s32 arg0) {
    D_801354F8.unk1 = arg0;
}

void func_800F9104(s32 arg0) {
    D_801354FC = arg0;
}

void func_800F9110(s32 arg0) {
    D_801354FD = arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F911C.s")

void func_800F9178(void) {
    D_801354FA = 0;
}

s32 func_800F9184(void) {
    return D_801354FA == 0;
}

void func_800F9198(void) {
    if (D_801354FA == 0) {
        func_800F90F8(0);
        func_800F9104(0);
        func_800F9110(0);
        D_801354FA = 1;
    }
    func_800F9C6C();
}


void func_800F91EC(void) {
    D_801354F0 = vector_defrag(D_801354F0);
}

s32 func_800F9214(void) {
    if (func_800F6720() != 0) {
        return 2;
    }
    return 1;
}


#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F9240.s")

s32 func_800F929C(void) {
    if (func_800F8B88() == 2) {
        return 0xB;
    }
    return 1;
}

void func_800F92CC(u32* arg0, enum transform_e* arg1, s32* arg2, s32* arg3) {
    enum transform_e temp_v0_2;
    u32 temp_v0;

    temp_v0 = func_800F54E4();
    *arg0 = temp_v0;
    temp_v0_2 = func_800F5410((s32) temp_v0);
    *arg1 = temp_v0_2;
    switch (temp_v0_2) {                            /* irregular */
    case TRANSFORM_A_BANJO:
        *arg3 = 0xB;
        break;
    case TRANSFORM_B_KAZOOIE:
        *arg3 = 0xA;
        break;
    }
    *arg2 = _plsu_entrypoint_1(*arg3);
}

void func_800F9354(u32* arg0, enum transform_e* arg1, s32* arg2) {
    enum transform_e temp_v0_2;
    u32 temp_v0;

    temp_v0 = func_800F54E4();
    *arg0 = temp_v0;
    temp_v0_2 = func_800F5410((s32) temp_v0);
    *arg1 = temp_v0_2;
    switch (temp_v0_2) {                            /* irregular */
    case TRANSFORM_A_BANJO:
        *arg2 = 0xB;
        return;
    case TRANSFORM_B_KAZOOIE:
        *arg2 = 0xA;
        return;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F93C4.s")

void func_800F9400(s32 arg0) {
    if ((arg0 == 0xA) || (arg0 == 1)) {
        func_800C964C(0xC);
        return;
    }
    func_800C964C(0xE);
}


void func_800F9444(s32 arg0) {
    if ((arg0 == 0xA) || (arg0 == 1)) {
        func_800C964C(0xD);
        return;
    }
    func_800C964C(0xF);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F9488.s")

s32 func_800F99E8(void) {
    return D_80135520.unk0 != 1;
}

s32 func_800F99FC(void) {
    if (D_80135520.unk0 == 0xE) {
        return 1;
    }
    return 0;
}

s32 func_800F9A24(void) {
    func_800F9488(0);
}

void func_800F9A44(void) {
    D_80135520.unk0 = 0;
    func_800F9488(1);
}


void func_800F9A6C(void) {
    if (_plsu_entrypoint_2() != 0) {
        func_800F9488(2);
        return;
    }
    func_800F9488(4);
}


extern unkStructD_80135520 D_80135520;

void func_800F9AAC(s32 arg0, s32 arg1) {
    D_80135520.unk1 = arg0;
    D_80135520.unk2 = arg1;
    func_800F9488(0xB);
}

void func_800F9ADC()
{
    func_800F9488(0xC);
}

void func_800F9AFC(void) {
    s32 sp24;
    s32 sp20;
    s32 sp1C;

    func_800F93C4(&sp20, &sp24);
    sp1C = _plsu_entrypoint_1(func_800F929C());
    func_800F8128(sp1C);
    func_800F8EBC(sp1C);
    func_800F8268(sp1C, 1, 1);
}

void func_800F9B54(void) {
    u32 sp1C;
    s32 sp18;

    sp1C = func_800F54E4();
    sp18 = _plsu_entrypoint_1(0x11);
    func_800F8128((s32) sp1C);
    func_800F8268((s32) sp1C, 1, 1);
    func_800F82C0(sp18);
}


void func_800F9BA4()
{
    func_800D9240(0x11);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F9BC4.s")

void func_800F9C38(void) {
    if (func_800F8B88() == 3) {
        func_800F9488(0x13);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/1ECE0B0/func_800F9C6C.s")
