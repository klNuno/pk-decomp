/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_001348D0_0 {
    s32 unk_00;
    s32 unk_04;
    struct unk_func_001348D0_0 *unk_08;
    u8 pad_0C[0x8];
    struct unk_func_001348D0_0 *unk_14;
} unk_func_001348D0_0;

extern "C" s32 func_001348D0(unk_func_001348D0_0 *arg0, s32 arg1, s32 arg2);

static inline bool func_001348D0_inl(unk_func_001348D0_0 *arg0, s32 arg1, s32 arg2) {
    unk_func_001348D0_0 *p;

    if (arg0->unk_04 == arg1) {
        arg0->unk_00 = arg2 != 0 ? 8 : 1;
        arg0->unk_04 = arg2;
        return 1;
    }
    for (p = arg0->unk_08; p != NULL; p = p->unk_14) {
        if (func_001348D0(p, arg1, arg2)) {
            return 1;
        }
    }
    return 0;
}

extern "C" s32 func_001348D0(unk_func_001348D0_0 *arg0, s32 arg1, s32 arg2) {
    unk_func_001348D0_0 *p;

    if (arg0->unk_04 == arg1) {
        arg0->unk_00 = arg2 != 0 ? 8 : 1;
        arg0->unk_04 = arg2;
        return 1;
    }
    for (p = arg0->unk_08; p != NULL; p = p->unk_14) {
        if (func_001348D0_inl(p, arg1, arg2)) {
            return 1;
        }
    }
    return 0;
}
