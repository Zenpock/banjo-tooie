#include "core1/1E32FE0.h"

typedef struct
{
    void* unk0;
    s32 unk4;
} UNKD_8007BF10;

extern UNKD_8007BF10 D_8007BF10[];
extern s32 D_8007C6E0;
extern s32 D_8007C6E4;

void func_8001B4B0(void)
{
    s32 index;

    for (index = 1; index < 0xFA; index++)
    {
        D_8007BF10[index].unk0 = 0;
    }
}

void func_8001B4E8(void)
{
	int index;
	for (index = 2; index < 0xFA; index++)
	{
		if (D_8007BF10[index].unk0)
		{

		}
	}
}

void func_8001B50C(void)
{
    D_8007C6E0 = 0;
}

void func_8001B518(s32 arg0)
{
	s32 var_s2;
	s32 var_s4;
	void* temp_a0;

	if ((D_8007C6E0 != 0) && (arg0 == 0))
	{
		return;
	}
	D_8007C6E0 = 1;
	if (arg0 != 0)
	{
		var_s4 = 0xFA;
	}
	else
	{
		var_s4 = 0x14;
	}
	for (var_s2 = 1; var_s2 < var_s4; var_s2++)
	{
		D_8007C6E4++;
		if (D_8007C6E4 >= 250)
		{
			D_8007C6E4 = 0;
		}
		if (D_8007BF10[D_8007C6E4].unk0 == NULL)
		{
			continue;
		}
		temp_a0 = D_8007BF10[D_8007C6E4].unk0;
		D_8007BF10[D_8007C6E4].unk0 = defrag(D_8007BF10[D_8007C6E4].unk0);
		if (D_8007BF10[D_8007C6E4].unk0 != temp_a0)
		{
			switch (D_8007BF10[D_8007C6E4].unk4)
			{
			case 0:
				break;
			case 1:
				func_800E0040(D_8007BF10[D_8007C6E4].unk0);
				break;
			case 3:
				func_800E0AC0(D_8007BF10[D_8007C6E4].unk0);
				break;
			case 5:
				vector_update_pointers(D_8007BF10[D_8007C6E4].unk0);
				break;
			}
		}
	}
}

s16 func_8001B668(s32 arg0, s32 size)
{
    s32 index = 1;
    while (D_8007BF10[index].unk0 != 0)
    {
        index++;
    }
    if (index < 0xFA)
    {
        D_8007BF10[index].unk0 = heap_alloc_sided(size, 2);
        D_8007BF10[index].unk4 = arg0;
        func_8001B3A0(D_8007BF10[index].unk0);
        return index;
    }
    return 0;
}

void* func_8001B710(s16 index, s32 size)
{
	D_8007BF10[index].unk0 = heap_realloc(D_8007BF10[index].unk0, size);
	return D_8007BF10[index].unk0;
}

void func_8001B754(s16 index)
{
    heap_free(D_8007BF10[index].unk0);
    D_8007BF10[index].unk0 = NULL;
}

void* func_8001B798(s16 index)
{
    return D_8007BF10[index].unk0;
}

s32 func_8001B7B8(s16 index)
{
    return heap_get_allocation_size(D_8007BF10[index].unk0);
}

void func_8001B7F0(s16 index, u8 arg1, s32 arg2)
{
    rare_memset(D_8007BF10[index].unk0, arg1, arg2);
}