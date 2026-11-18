/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001E6970_3 {
    s32 unk_00;
    u8 pad_04[0x8];
} unk_func_001E6970_3;

typedef struct unk_func_001E6970_2 {
    unk_func_001E6970_3 unk_00[1];
    u8 pad_0C[0x5C];
} unk_func_001E6970_2;

typedef struct unk_func_001E6970_1 {
    unk_func_001E6970_2 *unk_00;
    u8 pad_04[0x2];
    u8 unk_06;
} unk_func_001E6970_1;

typedef struct unk_func_001E6970_0 {
    u8 pad_00[0x10];
    unk_func_001E6970_1 *unk_10;
} unk_func_001E6970_0;

typedef struct unk_func_001E6970_4 {
    u8 pad_00[0x4];
    unk_func_001E6970_0 *unk_04;
    unk_func_001E6970_0 *unk_08;
    u8 pad_0C[0x4];
    u8 unk_10;
} unk_func_001E6970_4;

typedef struct unk_func_001E6970_5 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_001E6970_5;

unk_func_001E6970_5 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_001E6970_4 *fn_p_stBrainGetMind(s32);

static inline unk_func_001E6970_0 *func_001E6970_inl1(s32 arg0) {
    if (fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C)->unk_10) {
        return fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C)->unk_04;
    } else {
        return fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(arg0)->unk_0C)->unk_08;
    }
}

static inline void func_001E6970_inl2(unk_func_001E6970_0 *p, u8 idx, s32 val) {
    p->unk_10->unk_00[p->unk_10->unk_06].unk_00[idx].unk_00 = val;
}

void func_001E6970(u8 arg0, s32 arg1, s32 arg2) {
    func_001E6970_inl2(func_001E6970_inl1(arg1), arg0, arg2);
}
