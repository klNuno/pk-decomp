/* profile: o0 */
#include "common.h"

typedef struct unk_func_001E6C40_0 {
    s32 unk_00;
    u8 pad_04[8];
} unk_func_001E6C40_0;

typedef struct unk_func_001E6C40_1 {
    unk_func_001E6C40_0 unk_00[8];
    u8 pad_60[8];
} unk_func_001E6C40_1;

typedef struct unk_func_001E6C40_2 {
    unk_func_001E6C40_1 *unk_00;
    u8 pad_04[2];
    u8 unk_06;
} unk_func_001E6C40_2;

typedef struct unk_func_001E6C40_3 {
    u8 pad_00[0x10];
    unk_func_001E6C40_2 *unk_10;
} unk_func_001E6C40_3;

typedef struct unk_func_001E6C40_4 {
    u8 pad_00[4];
    unk_func_001E6C40_3 *unk_04;
    unk_func_001E6C40_3 *unk_08;
    u8 pad_0C[4];
    u8 unk_10;
} unk_func_001E6C40_4;

typedef struct unk_func_001E6C40_5 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_001E6C40_5;

unk_func_001E6C40_5 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_001E6C40_4 *fn_p_stBrainGetMind(s32);

s32 func_001E6C40(u8 arg0, s32 arg1) {
    unk_func_001E6C40_3 *m;

    m = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg1)->unk_0C)->unk_10
        ? fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg1)->unk_0C)->unk_04
        : fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg1)->unk_0C)->unk_08;
    return m->unk_10->unk_00[m->unk_10->unk_06].unk_00[arg0].unk_00;
}
