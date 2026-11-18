#include "common.h"

typedef struct unk_func_0016DBE0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[0x24];
    s32 unk_30;
    u8 pad_34[0xC];
} unk_func_0016DBE0_0;

static inline f32 func_0016DBE0_abs(f32 x) {
    if (x < 0.0f) {
        x = -x;
    }
    return x;
}

static inline s32 func_0016DBE0_eq(unk_func_0016DBE0_0 *a, unk_func_0016DBE0_0 *b) {
    if (func_0016DBE0_abs(a->unk_00 - b->unk_00) < 1e-7f && func_0016DBE0_abs(a->unk_04 - b->unk_04) < 1e-7f &&
        func_0016DBE0_abs(a->unk_08 - b->unk_08) < 1e-7f) {
        return 1;
    }
    return 0;
}

void func_0016DBE0(unk_func_0016DBE0_0 *arg0, u32 arg1) {
    u32 i;
    u32 j;

    for (i = 0; i < arg1; i++) {
        if (arg0[i].unk_30 == 1) {
            for (j = i + 1; j < arg1; j++) {
                if (arg0[j].unk_30 == 1) {
                    if (func_0016DBE0_eq(&arg0[j], &arg0[i])) {
                        arg0[j].unk_30 = 2;
                    }
                }
            }
        }
    }
}
