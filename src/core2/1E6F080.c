#include "core2/1E6F080.h"
#include "core2/1E700B0.h"

s32 func_80095790() 
{
    return sizeof(ba_unknown_94_s);
}

void func_80095798(PlayerState* arg0) {
    s32 t1;
    s32 t2;
    f32 sp3C;
    f32 sp38;
    f32 temp_f0;
    f32 sp30;
    f32 var_f2;

    sp38 = player_getPoleBottomHeight(arg0);
    temp_f0 = player_getPoleTopHeight(arg0);
    var_f2 = arg0->unk94->unk78[1];
    if (temp_f0 < var_f2) {
        arg0->unk94->unk78[1] = temp_f0;
        var_f2 = arg0->unk94->unk78[1];
    }
    if (var_f2 < sp38) {
        arg0->unk94->unk78[1] = sp38;
    }
    func_80098590(arg0, &sp3C);
    func_800F1E6C(arg0->unk94->unk78, &sp3C, &sp30);
    if (mlAbsF(func_800F1DCC(sp30, yaw_get(arg0))) > 1.0f) {
        yaw_setIdeal(arg0, sp30);
        yaw_applyIdeal(arg0);
    }
}

void func_80095870(PlayerState* arg0, f32* arg1, f32* arg2) {
    *arg1 = arg0->unk94->unk4;
    *arg2 = arg0->unk94->unk8;
}

s32 func_8009588C(PlayerState* arg0) {
    return arg0->unk94->unk14;
}

u8 func_80095898(PlayerState* arg0) {
    return arg0->unk94->unkA2;
}

s32 func_800958A4(PlayerState* arg0, f32 arg1, f32 arg2) {
    s32 var_v1;
    f32 sp28[3];
    f32 sp1C[3];

    player_getCoords(arg0, sp28);
    sp28[1] += arg1;
    if (func_800C6C94(sp28, arg2, sp1C, arg0->unk94->unk14) != 0) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}

void func_8009590C(PlayerState* arg0, f32 arg1) {
    if (arg1 == 0.0f) {
        func_800C68A0(arg0->unk94->unk0, 56.0f);
        return;
    }
    func_800C68A0(arg0->unk94->unk0, arg1);
}

void func_80095964(PlayerState* arg0, s32 arg1) {
    if (arg1 != 0) {
        func_80095A08(arg0, 8, 1);
        func_80095A08(arg0, 4, 0);
        return;
    }
    func_80095A08(arg0, 8, 0);
    func_80095A08(arg0, 4, 1);
}

void func_800959C8(PlayerState* arg0, f32 arg1, f32 arg2) {
    arg0->unk94->unk64 = arg1;
    arg0->unk94->unk4 = arg0->unk94->unk64;
    arg0->unk94->unk68 = arg2;
    arg0->unk94->unk8 = arg0->unk94->unk68;
}

void func_800959FC(PlayerState* arg0, s32 arg1) {
    arg0->unk94->unk14 = arg1;
}

void func_80095A08(PlayerState* arg0, s32 arg1, s32 arg2) {
    ba_unknown_94_s* temp_v0;
    ba_unknown_94_s* temp_v0_2;

    if (arg2 != 0) {
        temp_v0 = arg0->unk94;
        temp_v0->unk14 |= arg1;
        return;
    }
    temp_v0_2 = arg0->unk94;
    temp_v0_2->unk14 &= ~arg1;
}

void func_80095A40(PlayerState* arg0) {
    func_800959C8(arg0, 80.0f, 35.0f);
}

void func_80095A64(PlayerState* arg0) {
    arg0->unk50 = 0;
}

void func_80095A6C(s32 arg0, PlayerState* arg1) {
    arg1->unk50 = arg0;
}

void func_80095A74(PlayerState* arg0, s32 arg1) {
    if (map_getCurrent() == MAP_B8_MT_MAYAHEM_TEMPLE) {
        if (arg1 != 0) {
            func_80095A08(arg0, 8, 1);
            return;
        }
        func_80095A08(arg0, 8, 0);
    }
}

void func_80095AD0(PlayerState* arg0) {
    u8 temp_v0;

    arg0->unk94->unkA3 = 0;
    temp_v0 = arg0->unk94->unkA3;
    arg0->unk94->unk54 = temp_v0;
    arg0->unk94->atSurface = temp_v0;
    arg0->unk94->unk18[0] = temp_v0;
    arg0->unk94->unk56 = temp_v0;
    arg0->unk94->touchingWater = temp_v0;
    func_800959FC(arg0, 0x400005);
    arg0->unk94->unk0 = func_800C5A38();
    ml_vec3f_clear(arg0->unk94->movementDelta);
    ml_vec3f_clear(arg0->unk94->unk78);
    ml_vec3f_clear(arg0->unk94->unk84);
    ml_vec3f_clear(arg0->unk94->wallNormal);
    arg0->unk94->unk1C = 0;
    arg0->unk94->unkA2 = 0;
    func_80095A40(arg0);
    arg0->unk94->unk4 = arg0->unk94->unk64;
    arg0->unk94->unk8 = arg0->unk94->unk68;
    func_80096254(arg0, 1);
    func_8009590C(arg0, 0.0f);
    arg0->unk94->unk9C = 0;
    func_800961AC(arg0, 1);
    baflag_clear(arg0, BA_FLAG_1_ON_FLIGHT_PAD);
    baflag_clear(arg0, BA_FLAG_2_ON_SPRING_PAD);
    arg0->unk94->unkC = func_80095A6C;
    arg0->unk94->unk10 = func_80095A64;
    arg0->unk94->unkA4 = 0;
}

void func_80095C10(PlayerState* arg0) {
    func_800C5BA4(arg0->unk94->unk0);
}

f32 func_80095C34(f32 arg0, f32 arg1, f32 arg2) {
    if (arg1 < arg0) {
        arg1 = ml_min_f(arg0, arg1 + arg2);
    } else if (arg0 < arg1) {
        arg1 = ml_max_f(arg0, arg1 - arg2);
    }
    return arg1;
}

void func_80095C94(PlayerState* arg0)
{
    f32 sp5C[3];
    f32 sp50[3];
    f32 sp44[3];
    f32 sp40;
    f32 temp_f0;
    UNKfunc_800C68A0_ARG0* sp38;
    f32 sp34;
    s32 pad;

    arg0->unk94->unkA4 = 1;
    arg0->unk94->unk50 = NULL;
    if ((func_80091E80(arg0, 4) != 0) && (func_8008E454(arg0) != 0))
    {
        player_getCoords(arg0, sp5C);
        if (func_800BEAAC(sp5C, &sp40) != 0)
        {
            func_800C68E8(arg0->unk94->unk0, 1, sp40);
        }
        else
        {
            func_800C68E8(arg0->unk94->unk0, 0, sp40);
        }
        arg0->unk94->atSurface = 0;
        arg0->unk94->unk54 = 0;
        arg0->unk94->touchingWall = 0;
        arg0->unk94->unk1C = 0;
        arg0->unk94->unk18[0] = arg0->unk94->unk56;
        func_800CB840(1, arg0->unk184);
        arg0->unk94->unk4 = func_80095C34(arg0->unk94->unk64, arg0->unk94->unk4, 1.0f);
        arg0->unk94->unk8 = func_80095C34(arg0->unk94->unk68, arg0->unk94->unk8, 1.0f);
        switch (arg0->unk94->unk9C)
        {
            case 1:
            case 3:
            case 4:
            case 9:
                player_getCoords(arg0, arg0->unk94->unk78);
                player_getPrevCoords(arg0, arg0->unk94->unk84);
                if (arg0->unk94->unk9C == 3)
                {
                    sp38 = arg0->unk94->unk0;
                    if (func_800C670C(sp38) != 0)
                    {
                        sp34 = func_800C67D8(sp38);
                        temp_f0 = func_800A0E58(arg0);
                        if ((sp34 - temp_f0) < arg0->unk94->unk78[1])
                        {
                            arg0->unk94->unk78[1] = sp34 - temp_f0;
                            arg0->unk94->atSurface = 1;
                            baphysics_set_vertical_velocity(arg0, 1.0f);
                        }
                    }
                }
                ml_getdiff_vec3f(arg0->unk94->unk58, arg0->unk94->unk78, arg0->unk94->unk84);
                func_800D4584(arg0->unk94, arg0->unk94->unk84, arg0->unk94->unk78, arg0->unk94->unk58);
                player_setCoords(arg0, arg0->unk94->unk78);
                break;
            case 5:
                player_getCoords(arg0, arg0->unk94->unk78);
                player_getPrevCoords(arg0, arg0->unk94->unk84);
                ml_getdiff_vec3f(arg0->unk94->unk58, arg0->unk94->unk78, arg0->unk94->unk84);
                func_800D4584(arg0->unk94, arg0->unk94->unk84, arg0->unk94->unk78, arg0->unk94->unk58);
                func_80095798(arg0);
                player_setCoords(arg0, arg0->unk94->unk78);
                break;
            case 7:
                func_800978A4(arg0);
                break;
            case 8:
                func_80096768(arg0);
                break;
            case 10:
                _bahitspline_entrypoint_2(arg0);
            case 2:
            case 6:
                arg0->unk94->unk54 = 0;
                arg0->unk94->touchingWall = 0;
                arg0->unk94->unk56 = 0;
                break;
        }
        if (func_800C670C(arg0->unk94->unk0) != 0)
        {
            arg0->unk94->touchingWater = arg0->unk94->unk78[1] < func_800C67D8(arg0->unk94->unk0);
        }
        if (func_80096530(arg0) != 0)
        {
            arg0->unk94->unk56 = 1;
        }
        if (arg0->unk94->touchingWater && (arg0->unk94->unk78[1] < (func_800C67D8(arg0->unk94->unk0) - func_800A0E58(arg0))))
        {
            func_80096254(arg0, 3);
            if ((arg0->unk94->unk56 != 0) && (baphysics_get_vertical_velocity(arg0) < 0.0f))
            {
                baphysics_set_vertical_velocity(arg0, -1.0f);
            }
        }
        else if (arg0->unk94->unk56 != 0)
        {
            func_80096260(arg0);
            if ((baphysics_get_vertical_velocity(arg0) < 0.0f) && !(func_80096628(arg0) & 0x8000))
            {
                baphysics_set_vertical_velocity(arg0, -1.0f);
            }
        }
        else
        {
            func_80096254(arg0, 1);
        }
        if (arg0->unk94->unkA2 != 0)
        {
            player_setCoords(arg0, sp5C);
        }
        func_800CB870();
        if (arg0->unk94->unk54 != 0)
        {
            arg0->unk94->unkA3 = ml_min_i(arg0->unk94->unkA3 + 1, 3);
        }
        else
        {
            arg0->unk94->unkA3 = 0;
        }
        player_getPrevCoords(arg0, sp44);
        player_getCoords(arg0, sp50);
        ml_getdiff_vec3f(arg0->unk94->movementDelta, sp50, sp44);
        if (arg0->unk94->unk1C != 0)
        {
            func_800FB508(arg0->unk94->unk6C, arg0->unk94->unk1C);
            arg0->unk94->unk1C = (s32)arg0->unk94->unk6C;
        }
        baflag_clear(arg0, BA_FLAG_1_ON_FLIGHT_PAD);
        baflag_clear(arg0, BA_FLAG_2_ON_SPRING_PAD);
        if ((arg0->unk94->unk50 != NULL) && (player_isStable(arg0) != 0))
        {
            event_sendToActorByMarker(arg0->unk94->unk50, EVENT_91_ACTOR_STOOD_ON, arg0->unk184);
        }
    }
}

void func_800961A0(PlayerState* arg0, s32 arg1) {
    arg0->unk94->unkA2 = (u8) arg1;
}

void func_800961AC(PlayerState* arg0, s32 arg1) {
    switch (arg0->unk94->unk9C) 
    {
        case 7:
            func_80097858(arg0);
            break;
        case 0xA:
            _bahitspline_entrypoint_0(arg0);
            break;
    }
    arg0->unk94->unk9C = arg1;
    switch (arg1) 
    {
        case 7:
            func_8009788C(arg0);
            break;
        case 0xA:
            _bahitspline_entrypoint_1((s32) arg0);
            break;
    }
}

void func_80096254(PlayerState* arg0, s32 arg1) {
    arg0->unk94->unkA8 = arg1;
}

void func_80096260(PlayerState* arg0) {
    if (func_800C84B0(func_80096628(arg0)) == 0x18) {
        func_80096254(arg0, 4);
    } else {
        func_80096254(arg0, 2);
    }
}

void func_800962B0(PlayerState* arg0, s32 arg1) {
    func_800C68D4(arg0->unk94->unk0, arg1);
}

f32 func_800962D4(PlayerState* arg0) {
    f32 sp1C;

    sp1C = player_getCoordVertical(arg0);
    return sp1C - func_800C6784(arg0->unk94->unk0);
}

f32 func_8009630C(PlayerState* arg0) {
    f32 temp;
    f32 sp20;
    f32 sp1C;

    sp1C = player_getCoordVertical(arg0);
    sp20 = func_800C6784(arg0->unk94->unk0);
    return sp1C - ml_max_f(temp = sp20, func_800C67D8(arg0->unk94->unk0));
}

//Get the height of the ground beneath the player's feet
f32 player_getGroundHeight(PlayerState* arg0) {
    return func_800C6784(arg0->unk94->unk0);
}

s32 func_80096388(PlayerState* arg0) {
    return arg0->unk94->unk9C;
}

void player_getMovementDelta(PlayerState* arg0, f32* arg1) {
    ml_vec3f_copy(arg1, arg0->unk94->movementDelta);
}

void player_getFloorNormal(PlayerState* arg0, f32 arg1[3]) {
    func_800C675C(arg0->unk94->unk0, arg1);
}

f32 func_800963E4(PlayerState* arg0) {
    f32 sp1C[3];

    player_getFloorNormal(arg0, sp1C);
    return func_80013A7C(sp1C[1]);
}

s32 func_8009640C(PlayerState* arg0) {
    ba_unknown_94_s* temp_v1;
    s32 var_v0;

    temp_v1 = arg0->unk94;
    var_v0 = (u32)temp_v1->unk18[0] < 1;
    if (var_v0 != 0) {
        var_v0 = temp_v1->unk18[0x3E] != 0;
        return temp_v1->unk18[0x3E] != 0;
    }
}

s32 func_80096434(PlayerState* arg0) {
    return arg0->unk94->unk74;
}

//player_getWallTouchNormal
void player_getWallTouchNormal(PlayerState* arg0, f32* arg1) {
    ml_vec3f_copy(arg1, arg0->unk94->wallNormal);
}

//player_getWallVertices
void player_getWallTouchVertices(PlayerState* arg0, f32 arg1[3][3]) {
    s32 i;

    for (i = 0; i < 3; i++) {
        ml_vec3f_copy(arg1[i], arg0->unk94->unk20[i]);
    }
}

s32 func_800964D0(PlayerState* arg0) {
    return arg0->unk94->unkA8;
}

//Get the water level beneath or above the player
f32 player_getWaterHeight(PlayerState* arg0) {
    return func_800C67D8(arg0->unk94->unk0);
}

s32 player_atWaterSurface(PlayerState* arg0) {
    return arg0->unk94->atSurface;
}

s32 player_touchingWall(PlayerState* arg0) {

    return (s32) arg0->unk94->touchingWall;
}

s32 func_80096518(PlayerState* arg0) {
    return (s32) arg0->unk94->unk56;
}

s32 player_touchingWater(PlayerState* arg0) {
    return arg0->unk94->touchingWater;
}

s32 func_80096530(PlayerState* arg0) {
    return arg0->unk94->unkA3 == 3;
}

s32 func_80096544(PlayerState* arg0) {
    return func_800C670C(arg0->unk94->unk0);
}

s32 func_80096568(PlayerState* arg0, s32 arg1) {
    return arg1 == (func_800C6744(arg0->unk94->unk0) & 0x1F00);
}

s32 func_8009659C(PlayerState* arg0, s32 arg1) {
    return func_800C6744(arg0->unk94->unk0) & arg1;
}

s32 func_800965C8(PlayerState* arg0) {
    return arg0->unk94->unkA4;
}

ActorMarker* player_getFloorMarker(PlayerState* arg0) {
    return arg0->unk94->unk50;
}

void func_800965E0(PlayerState* arg0, void* arg1) {
    func_800C67F8(arg0->unk94->unk0, arg1);
}

void player_getFloorVertices(PlayerState* arg0, f32 arg1[3][3]) {
    func_800C6840(arg0->unk94->unk0, arg1);
}

s32 func_80096628(PlayerState* arg0) {
    return func_800C6744(arg0->unk94->unk0);
}

s32 func_8009664C(PlayerState* arg0) {
    return func_800C674C(arg0->unk94->unk0);
}

s32 func_80096670(PlayerState* arg0) {
    return func_800C67C8(arg0->unk94->unk0);
}

s32 func_80096694(PlayerState* a0)
{
    return func_800C84B0(func_80096628(a0));
}

s32 func_800966BC(PlayerState* arg0) {
    return func_800C67E0(arg0->unk94->unk0);
}

void func_800966E0(PlayerState* arg0) {
    func_800C67E8(arg0->unk94->unk0);
}

void func_80096704(PlayerState* arg0) {
    func_800C5B84(arg0->unk94->unk0);
}

void func_80096728(PlayerState* arg0) {
    if (arg0->unk94->unk0 != 0) {
        arg0->unk94->unk0 = func_800C5BC4(arg0->unk94->unk0);
    }
}

void func_80096768(PlayerState* arg0) {
    f32 sp1C[3];

    player_getCoords(arg0, sp1C);
    func_800D4D5C(sp1C, arg0->unk94);
}

void func_8009679C(PlayerState* arg0) {
    func_800C68DC(arg0->unk94->unk0);
}
