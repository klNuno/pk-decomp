/* profile: o0 */
#include "common.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} unk_func_001E6D30_0;

typedef struct {
    unk_func_001E6D30_0 unk_00[8];
    u8 pad_60[8];
} unk_func_001E6D30_1;

typedef struct {
    unk_func_001E6D30_1 *unk_00;
    u8 pad_04[2];
    u8 unk_06;
} unk_func_001E6D30_2;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001E6D30_2 *unk_10;
} unk_func_001E6D30_3;

typedef struct {
    u8 pad_00[4];
    unk_func_001E6D30_3 *unk_04;
    unk_func_001E6D30_3 *unk_08;
    u8 pad_0C[4];
    u8 unk_10;
} unk_func_001E6D30_4;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_001E6D30_5;

unk_func_001E6D30_5 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_001E6D30_4 *fn_p_stBrainGetMind(s32);

void func_001E6D30(u8 arg0, s32 arg1, unk_func_001E6D30_0 *arg2) {
    unk_func_001E6D30_3 *p;

    p = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg1)->unk_0C)->unk_10 ? fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg1)->unk_0C)->unk_04 : fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg1)->unk_0C)->unk_08;
    p->unk_10->unk_00[p->unk_10->unk_06].unk_00[arg0].x = arg2->x;
    p->unk_10->unk_00[p->unk_10->unk_06].unk_00[arg0].y = arg2->y;
    p->unk_10->unk_00[p->unk_10->unk_06].unk_00[arg0].z = arg2->z;
}
