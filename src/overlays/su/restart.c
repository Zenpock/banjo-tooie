#include "su/restart.h"

typedef struct {
    s16 mapId;
    s16 transformationMap; //Used by Mumbo transformations to tell what level he is in
    u8 transformation;
    u8 entranceId;
} RestartData;

extern u8 D_8012762C;

RestartData D_808000D0_surestart[] = {
    {MAP_B8_MT_MAYAHEM_TEMPLE,0x0010,TRANSFORM_D_MUMBO,0x05},
    {MAP_C7_GGM_GLITTER_GULCH_MINE,0x000F,TRANSFORM_D_MUMBO,0x08},
    {MAP_E7_WW_INFERNO,0x0012,TRANSFORM_D_MUMBO,0x02},
    {MAP_1A7_JRL_JOLLY_ROGERS_LAGOON,0x0014,TRANSFORM_D_MUMBO,0x0E},
    {MAP_112_TDL_TERRYDACTYLAND,0x0015,TRANSFORM_D_MUMBO,0x04},
    {MAP_108_GI_FLOOR_3,0x0016,TRANSFORM_D_MUMBO,0x0A},
    {MAP_127_HP_LAVA_SIDE,0x0017,TRANSFORM_D_MUMBO,0x03},
    {MAP_136_CCL_CLOUD_CUCKOOLAND,0x0018,TRANSFORM_D_MUMBO,0x16},
    {MAP_136_CCL_CLOUD_CUCKOOLAND,0x0018,TRANSFORM_D_MUMBO,0x16},
    {MAP_155_IOH_CLIFF_TOP,0x001A,TRANSFORM_D_MUMBO,0x08},
    {MAP_128_HP_ICY_SIDE,0x0000,TRANSFORM_2_SNOWBALL,0x08},
    {MAP_136_CCL_CLOUD_CUCKOOLAND,0x0000,TRANSFORM_6_BEE,0x19},
    {MAP_106_GI_FLOOR_2,0x0000,TRANSFORM_7_WASHINGMACHINE,0x0A},
    {MAP_C4_MT_JADE_SNAKE_GROVE,0x0000,TRANSFORM_8_STONY,0x04},
    {MAP_1A8_JRL_ATLANTIS,0x0000,TRANSFORM_C_SUB,0x12},
    {MAP_C7_GGM_GLITTER_GULCH_MINE,0x0000,TRANSFORM_F_DETONATOR,0x0E},
    {MAP_D6_WW_WITCHYWORLD,0x0000,TRANSFORM_10_VAN,0x0A},
    {MAP_112_TDL_TERRYDACTYLAND,0x0000,TRANSFORM_12_TREXSMALL,0x06},
    {MAP_112_TDL_TERRYDACTYLAND,0x0000,TRANSFORM_13_TREXLARGE,0x16},
    {MAP_B8_MT_MAYAHEM_TEMPLE,0x0000,TRANSFORM_E_GOLDENGOLIATH,0x09}
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
                if (flag_getValue(FLAG_40A_RANDOMISER_CCL_SKULL_1) == 0)
                {
                    entranceId = 9;
                }
            }
            func_8009EB24(mapId, entranceId);
            return;
        }
    }
}
