#include "ch/sparkle.h"
extern s16 D_80800120_chsparkle[];
extern s32 D_8080012C_chsparkle;
extern ActorData D_80800164_chsparkle;

void func_80800000_chsparkle(Actor* arg0)
{
    f32 sp54[3];
    f32 sp48[3];
    f32 sp3C[3];
    f32 sp34[2];
    s32 randInt;
    s32 temp_v0;

    randInt = func_800DC128(0, 5);
    temp_v0 = func_800B53A4(1);
    func_800BA3FC(temp_v0, (enum asset_e)D_80800120_chsparkle[randInt]);
    func_800E3980(sp54);
    func_800EE7F8(sp48, arg0->position);
    sp48[1] -= 200.0f;
    func_800F18FC(arg0->position, sp54, sp34);
    func_800EEB9C(sp3C, sp34[1] + func_800DC178(-90.0f, 90.0f), 40.0f);
    func_800EF04C(sp3C, arg0->position);
    sp3C[1] += func_800DC178(0.0f, 120.0f);
    func_800BABB8(temp_v0, sp3C, &sp48, 1.0f, &D_8080012C_chsparkle);
}

ActorData* chsparkle_entrypoint_0()
{
    return &D_80800164_chsparkle;
}
