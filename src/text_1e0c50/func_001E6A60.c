/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001E6A60_4;

typedef struct {
    unk_func_001E6A60_4 unk_00[1];
    u8 pad_0C[0x5C];
} unk_func_001E6A60_3;

typedef struct {
    unk_func_001E6A60_3 *unk_00;
    u8 pad_04[0x2];
    u8 unk_06;
} unk_func_001E6A60_2;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001E6A60_2 *unk_10;
} unk_func_001E6A60_1;

typedef struct {
    u8 pad_00[0x4];
    unk_func_001E6A60_1 *unk_04;
    unk_func_001E6A60_1 *unk_08;
    u8 pad_0C[0x4];
    u8 unk_10;
} unk_func_001E6A60_0;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_001E6A60_5;

unk_func_001E6A60_5 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_001E6A60_0 *fn_p_stBrainGetMind(s32);

s32 func_001E6A60(u8 arg0, s32 arg1) {
    unk_func_001E6A60_1 *p;

    p = fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg1)->unk_0C)->unk_10 ? fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg1)->unk_0C)->unk_04 : fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg1)->unk_0C)->unk_08;
    return p->unk_10->unk_00[p->unk_10->unk_06].unk_00[arg0].unk_00;
}
