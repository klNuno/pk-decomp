/* profile: o0 */
#include "common.h"

typedef union {
    s32 unk_00;
    struct {
        u8 unk_00;
        u8 unk_01;
        u8 unk_02;
        u8 unk_03;
    } b;
} unk_func_0021EA50_0;

s32 func_0021EA50(s32 arg0, s32 arg1) {
    unk_func_0021EA50_0 a;
    unk_func_0021EA50_0 b;
    unk_func_0021EA50_0 r;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;

    a.unk_00 = arg0;
    b.unk_00 = arg1;
    v0 = a.b.unk_00 + b.b.unk_00;
    v1 = a.b.unk_01 + b.b.unk_02;
    v2 = a.b.unk_02 + b.b.unk_01;
    v3 = a.b.unk_03 + b.b.unk_03;
    if (v0 < 0) {
        v0 = 0;
    } else if (v0 > 100) {
        v0 = 100;
    }
    if (v1 < 0) {
        v1 = 0;
    } else if (v1 > 100) {
        v1 = 100;
    }
    if (v2 < 0) {
        v2 = 0;
    } else if (v2 > 100) {
        v2 = 100;
    }
    if (v3 < 0) {
        v3 = 0;
    } else if (v3 > 100) {
        v3 = 100;
    }
    r.b.unk_00 = v0;
    r.b.unk_01 = v1;
    r.b.unk_02 = v2;
    r.b.unk_03 = v3;
    return r.unk_00;
}
