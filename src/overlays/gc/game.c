#include "gc/game.h"

typedef struct {
    u16 isActive;
    u16 flag;
} FlagHolder;
FlagHolder flags[] = { {0,0} };
void gcgame_func_Custom();
void gcgame_entrypoint_0(s32 arg0) 
{
    func_80016864();
    func_800DC310();
    func_800EBB5C();
    func_80012128();
    func_800DA0B4();
    func_800DA0D8();
    func_800F8E08();
    func_8009E8D4();
    func_800D2438();
    func_800D1510();
    func_800DACD0();
    _gccollectDll_entrypoint_2();
    gcgame_func_Custom();
    func_800CB618();
    func_800D2014();
    func_800CEF6C();
    func_800C7170();
    if (arg0 != 0) {
        func_800D37FC();
        _gcgamefix_entrypoint_0();
    }
    func_800A1364();
    func_800D3FD4(0);
    func_800D162C();
}

void gcgame_entrypoint_1(void)
{
    func_800FE4E4();
    func_800CB610();
    _gccollectDll_entrypoint_3();
    func_800D1604();
    func_8009E8B4();
    func_800F8DD8();
    func_800DA188();
}

void gcgame_func_Custom(void)
{
    int i = 0;
    while (0 == 0)
    {
        if (i == 2)
            break;
        if (flags[i].isActive)
        {
            func_800DA544(flags[i].flag);
        }
        else
        {
            func_800DA524(flags[i].flag);
        }
        i++;
    }
}