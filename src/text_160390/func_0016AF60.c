#include "common.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} unk_func_0016AF60_0;

typedef struct {
    unk_func_0016AF60_0 unk_00;
    unk_func_0016AF60_0 unk_10;
    unk_func_0016AF60_0 unk_20;
    unk_func_0016AF60_0 unk_30;
    unk_func_0016AF60_0 unk_40;
    unk_func_0016AF60_0 unk_50;
} unk_func_0016AF60_1;

extern u32 D_0035FBA0;
extern u32 D_0035FBA4;
extern s32 D_0035FBA8;
extern unk_func_0016AF60_1 D_0036D490[];

void func_0016AF60(unk_func_0016AF60_0 *arg0, unk_func_0016AF60_0 *arg1, unk_func_0016AF60_0 *arg2, unk_func_0016AF60_0 *arg3, s32 arg4) {
    u32 n;

    n = D_0035FBA0 + D_0035FBA4;
    if (n < 0x40) {
        D_0035FBA0++;
        D_0035FBA8 = arg4;
        D_0036D490[n].unk_00.x = arg0->x;
        D_0036D490[n].unk_00.y = arg0->y;
        D_0036D490[n].unk_00.z = arg0->z;
        D_0036D490[n].unk_10.x = arg1->x;
        D_0036D490[n].unk_10.y = arg1->y;
        D_0036D490[n].unk_10.z = arg1->z;
        D_0036D490[n].unk_20.x = arg2->x;
        D_0036D490[n].unk_20.y = arg2->y;
        D_0036D490[n].unk_20.z = arg2->z;
        D_0036D490[n].unk_30.x = arg0->x;
        D_0036D490[n].unk_30.y = arg0->y;
        D_0036D490[n].unk_30.z = arg0->z;
        D_0036D490[n].unk_40.x = arg2->x;
        D_0036D490[n].unk_40.y = arg2->y;
        D_0036D490[n].unk_40.z = arg2->z;
        D_0036D490[n].unk_50.x = arg3->x;
        D_0036D490[n].unk_50.y = arg3->y;
        D_0036D490[n].unk_50.z = arg3->z;
    }
}
