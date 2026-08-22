#include "ch/bigtopticket.h"

extern ActorData D_80800120_chbigtopticket;
ActorData* chbigtopticket_entrypoint_0()
{
    return &D_80800120_chbigtopticket;
}
void func_8080000C_chbigtopticket(s32 arg0) 
{
}
void func_80800014_chbigtopticket(Actor* arg0) {
    arg0->rotation[1] -= time_getDelta() * 175.0f;
    func_80103110(arg0, 0U);
}

void func_80800058_chbigtopticket(Actor* arg0, void* arg1) {
    func_80101870(arg0, arg1);
    func_80103110(arg0, arg0->unk7C_12);
}

s32 func_8080008C_chbigtopticket(Actor* arg0, s32 arg1, s32 arg2)
{
    switch (arg1) 
    {
        case 0x3E:
            _sudialog_entrypoint_0(0x19F, 4);
            func_800D0BD4(*(s32*)&arg0->unk54, 8);
            func_800D1844(0x4D);
            func_800FC6B0(0x73);
            _fxsparkle_entrypoint_1(arg0->position, 0x11U);
            func_8010A570(arg0);
            func_800FFAB0(arg0);
            break;
        case 0x13:
            *(s32*)&arg0->unk54 = arg2;
            break;
        default:
            return 0;
    }
    return 1;
}
