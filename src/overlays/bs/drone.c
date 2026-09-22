#include "bs/drone.h"
typedef struct unkbsdrone {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
    void* (*unk4)(PlayerState*);
    void* (*unk8)(PlayerState*);
    void* (*unkC)(PlayerState*);
    void* (*unk10)(PlayerState*);
} UNKBSDRONE;
extern UNKBSDRONE D_80800180_bsdrone[];

s32 func_80800000_bsdrone(PlayerState* arg0)
{
    s32 temp_v0;
    s32 var_a1;

    temp_v0 = _badrone_entrypoint_3(arg0);
    var_a1 = 0;
    while (D_80800180_bsdrone[var_a1].unk0 != 0)
    {
        if (D_80800180_bsdrone[var_a1].unk0 == temp_v0)
            return var_a1;
        var_a1++;
    }
    return 0;
}

void bsdrone_entrypoint_0(PlayerState* arg0)
{
    _badrone_entrypoint_4(arg0);
    D_80800180_bsdrone[func_80800000_bsdrone(arg0)].unk4(arg0);
}

void bsdrone_entrypoint_1(PlayerState* arg0)
{
    D_80800180_bsdrone[func_80800000_bsdrone(arg0)].unk8(arg0);
}

void bsdrone_entrypoint_2(PlayerState* arg0)
{
    D_80800180_bsdrone[func_80800000_bsdrone(arg0)].unkC(arg0);
}

void bsdrone_entrypoint_3(PlayerState* arg0)
{
    void* (*temp_v1)(PlayerState*);

    temp_v1 = D_80800180_bsdrone[func_80800000_bsdrone(arg0)].unk10;
    if (temp_v1 != NULL) {
        temp_v1(arg0);
    }
}