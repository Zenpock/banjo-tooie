#include "su/restart.h"

typedef struct {
    s16 mapId;
    s16 transformationMap; //Used by Mumbo transformations to tell what level he is in
    u8 transformation;
    u8 entranceId;
} RestartData;
RestartData D_808000D0_surestart[] = {
    {0x00B8,0x00B7,0x0D,0x05},
    {0x00C7,0x00D9,0x0D,0x08},
    {0x00E7,0x0176,0x0D,0x02},
    {0x01A7,0x00EF,0x0D,0x0E},
    {0x0112,0x0171,0x0D,0x04},
    {0x0108,0x0172,0x0D,0x0A},
    {0x0127,0x0134,0x0D,0x03},
    {0x0136,0x013E,0x0D,0x16},
    {0x0136,0x013F,0x0D,0x16},
    {0x0155,0x0156,0x0D,0x08},
    {0x0128,0x0000,0x02,0x08},
    {0x0136,0x0000,0x06,0x19},
    {0x0106,0x0000,0x07,0x0A},
    {0x00C4,0x0000,0x08,0x04},
    {0x01A8,0x0000,0x0C,0x12},
    {0x00C7,0x0000,0x0F,0x0E},
    {0x00D6,0x0000,0x10,0x0A},
    {0x0112,0x0000,0x12,0x06},
    {0x0112,0x0000,0x13,0x16},
    {0x00B8,0x0000,0x0E,0x09}
};

void surestart_entrypoint_0(s32 arg0)
{
    s32 transformMap;
    s32 currentMap;
    s32 mapId;
    s32 entranceId;
    s32 i = 0;
    currentMap = func_800EA05C();
    if (arg0 == 1)
    {
        func_8009EBD0();
        return;
    }
    for (i = 0; i < 20; i++)
    {
        if ((arg0 == D_808000D0_surestart[i].transformation) && (transformMap = D_808000D0_surestart[i].transformationMap, (transformMap == 0) || (currentMap == transformMap)))
        {
            mapId = D_808000D0_surestart[i].mapId;
            entranceId = D_808000D0_surestart[i].entranceId;
            if ((transformMap == MAP_13E_CCL_MUMBO) || (transformMap == MAP_13F_CCL_MINGY_JONGO))
            {
                if (func_800DA298(FLAG_40A_RANDOMISER_CCL_SKULL_1) == 0)
                {
                    entranceId = 9;
                }
            }
            func_8009EB24(mapId, entranceId);
            return;
        }
    }
}