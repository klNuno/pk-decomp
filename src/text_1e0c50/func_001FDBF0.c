/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001FDBF0_0 {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001FDBF0_0;

typedef struct unk_func_001FDBF0_1 {
    u8 pad_00[0x120];
    f32 unk_120;
} unk_func_001FDBF0_1;

unk_func_001FDBF0_0 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_001FDBF0_1 *func_00138760(s32);
s32 func_001B84B0(s32);
extern f32 D_005AD8C8[];

s32 func_001FDBF0(s32 arg0, f32 *arg1) {
    s32 a;
    s32 b;
    unk_func_001FDBF0_1 *c;
    f32 sp4C;

    if (arg1 != NULL) {
        *arg1 = 0.0f;
    }
    a = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
    if (a == 0) {
        return 0;
    }
    b = func_001B84B0(a);
    if (b == 0) {
        return 0;
    }
    c = func_00138760(b);
    if (c == NULL) {
        return 0;
    }
    sp4C = c->unk_120;
    if (sp4C > D_005AD8C8[0]) {
        if (arg1 != NULL) {
            *arg1 = sp4C;
        }
        return 1;
    }
    return 0;
}
