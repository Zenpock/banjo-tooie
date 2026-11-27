#include "ch/alienbeam.h"

extern ActorData D_808001A0_chalienbeam;
ActorData* chalienbeam_entrypoint_0()
{
    return &D_808001A0_chalienbeam;
}
void func_8080000C_chalienbeam(Actor* actor)
{
    ml_vec3f_copy((f32*)actor->actorData, actor->position);
    actor->position[1] += 600.0f;
    ml_vec3f_copy((f32*)&actor->actorData[4], actor->position);
    actor->unk58 = 3.0f;
    actor->unk7A_14 = 2;
    _subaddiefade_entrypoint_1(actor, 0xC0);
}

void func_80800088_chalienbeam(Actor* actor)
{
    s32 sp2C;

    if (actor->unk70_10 == 1)
    {
        sp2C = timer_reachedZero(&actor->unk58);
        func_800EFE50(actor->position, (f32*)&actor->actorData[4], (f32*)&actor->actorData[0], func_800F12D4(actor->unk58, 0.0f, 3.0f, 1.0f, 0.0f));
        if (sp2C != 0)
        {
            func_80102424(actor, 2);
        }
    }
}

s32 func_80800110_chalienbeam(Actor* actor, s32 arg1, s32 arg2)
{
    switch (arg1)
    {
        case 0x4F:
            _subaddiefade_entrypoint_3(actor);
            func_80102424(actor, 3);
            break;
        default:
            return 0;
    }
    return 1;
}

void func_8080015C_chalienbeam(Actor* actor, GraphicsBuffers* arg1) {
    Vec3f sp1C;

    func_800E3A58(&sp1C);
    actor->rotation[1] = sp1C.pos.y;
    func_80101870(actor, arg1);
}

