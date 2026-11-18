/* profile: o0 */
#include "common.h"

typedef struct unk_func_001E6880_0 {
    s32 unk_00;
    u8 pad_04[0x8];
} unk_func_001E6880_0;

typedef struct unk_func_001E6880_1 {
    unk_func_001E6880_0 unk_00[8];
    u8 pad_60[0x8];
} unk_func_001E6880_1;

typedef struct unk_func_001E6880_2 {
    unk_func_001E6880_1 *unk_00;
    u8 pad_04[0x2];
    u8 unk_06;
} unk_func_001E6880_2;

typedef struct unk_func_001E6880_3 {
    u8 pad_00[0x10];
    unk_func_001E6880_2 *unk_10;
} unk_func_001E6880_3;

typedef struct unk_func_001E6880_4 {
    u8 pad_00[0x4];
    unk_func_001E6880_3 *unk_04;
    unk_func_001E6880_3 *unk_08;
    u8 pad_0C[0x4];
    u8 unk_10;
} unk_func_001E6880_4;

typedef struct unk_func_001E6880_5 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_001E6880_5;

unk_func_001E6880_5 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_001E6880_4 *fn_p_stBrainGetMind(s32);

s32 func_001E6880(u8 arg0, s32 arg1) {
    unk_func_001E6880_3 *a;
    unk_func_001E6880_3 *b;

    if (fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg1)->unk_0C)->unk_10) {
        a = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg1)->unk_0C)->unk_04;
    } else {
        a = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg1)->unk_0C)->unk_08;
    }
    b = a;
    return b->unk_10->unk_00[b->unk_10->unk_06].unk_00[arg0].unk_00;
}
