#include "gc/game.h"

typedef struct {
    u8 inventoryId;
    u8 amountToGive;
} InventoryToGive;

InventoryToGive inventoryToGive[] = { {0x49,0},{0x48,0},{0x4A,0},{0x4E,0},{0x4D,0},{0x40,100},{0x41,100},{0x42,100},{0x43,100},{0x44,100},{0x46,100},{0x47,100}};

typedef struct {
    u16 isActive;
    u16 flag;
} FlagHolder;
FlagHolder flags[] = { {0,0} };

extern s8 D_8012B3F1;

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
    inventory_setup();
    func_800DACD0();
    _gccollectDll_entrypoint_2();
    gcgame_func_Custom();
    func_800CB618();
    func_800D2014();
    func_800CEF6C();
    func_800C7170();
    if (arg0 != 0) {
        //Load Save Data
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
    inventory_free();
    //Do Nothing
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
            flag_setValueTrue(flags[i].flag);
        }
        else
        {
            flag_setValueFalse(flags[i].flag);
        }
        i++;
    }
    i= 0;
    while (0 == 0)
    {
        if (i == ARRLEN(inventoryToGive))
        {
            break;
        }
        {
            int inventoryIndex = inventory_getIndex(inventoryToGive[i].inventoryId);
            inventory_setValue(inventoryIndex, inventoryToGive[i].amountToGive);
            i++;
        }
    }
}
