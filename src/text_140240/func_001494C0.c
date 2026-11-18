/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    u32 unk_08;
    u32 unk_0C;
    u8 pad_10[0x2C];
    f32 unk_3C;
    f32 unk_40;
    f32 unk_44;
} unk_func_001494C0_0;

typedef struct {
    u8 pad_00[0xA8];
    s32 unk_A8;
} unk_func_001494C0_1;

unk_func_001494C0_1 *func_001387B0();

static inline s32 func_001494C0_test(u32 f, u32 m) {
    return (f & m) ? 1 : 0;
}

s32 func_001494C0(unk_func_001494C0_0 *arg0) {
    s32 r;

    if (!(arg0->unk_3C == 0.0f && arg0->unk_40 == 0.0f && arg0->unk_44 == 0.0f)) {
        return 0;
    }
    if (func_001494C0_test(arg0->unk_08, 4)) {
        return 0;
    }
    if (func_001494C0_test(arg0->unk_08, 1)) {
        return 0;
    }
    if (func_001494C0_test(arg0->unk_08, 0xE0000)) {
        return 0;
    }
    if (func_001494C0_test(arg0->unk_08, 0x20000000)) {
        return 0;
    }
    if (func_001494C0_test(arg0->unk_08, 0x700000)) {
        return 0;
    }
    if (func_001494C0_test(arg0->unk_0C, 2)) {
        if (func_001494C0_test(arg0->unk_08, 0x400)) {
            return 0;
        }
        if (func_001494C0_test(arg0->unk_08, 0x20000000)) {
            return 0;
        }
        if (func_001494C0_test(arg0->unk_08, 0x800)) {
            return 0;
        }
        if (func_001494C0_test(arg0->unk_08, 0x3800000)) {
            return 0;
        }
    }
    if (func_001494C0_test(arg0->unk_0C, 4)) {
        r = func_001387B0(arg0)->unk_A8 != 0;
        if (r) {
            return 0;
        }
    }
    return 1;
}
