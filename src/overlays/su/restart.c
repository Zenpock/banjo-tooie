#include "su/restart.h"

typedef struct {
    s16 mapId;
    s16 transformationMap; //Used by Mumbo transformations to tell what level he is in
    u8 transformation;
    u8 entranceId;
} RestartData;

extern u8 D_8012762C;

RestartData D_808000D0_surestart[] = {
    {0x00B8,0x0010,0x0D,0x05},
    {0x00C7,0x000F,0x0D,0x08},
    {0x00E7,0x0012,0x0D,0x02},
    {0x01A7,0x0014,0x0D,0x0E},
    {0x0112,0x0015,0x0D,0x04},
    {0x0108,0x0016,0x0D,0x0A},
    {0x0127,0x0017,0x0D,0x03},
    {0x0136,0x0018,0x0D,0x16},
    {0x0136,0x0018,0x0D,0x16},
    {0x0155,0x001A,0x0D,0x08},
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
    if (arg0 == 1)
    {
        func_8009EBD0();
        return;
    }
    for (i = 0; i < 20; i++)
    {
        if ((arg0 == D_808000D0_surestart[i].transformation) && ((transformMap = D_808000D0_surestart[i].transformationMap, (transformMap == 0) || (D_8012762C == transformMap))))
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