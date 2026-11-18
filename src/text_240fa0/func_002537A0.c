/* profile: o0_301 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002537A0_0;

typedef struct {
    u8 pad_00[0x160];
    f32 unk_160;
    f32 unk_164;
    f32 unk_168;
} unk_func_002537A0_1;

extern unk_func_002537A0_0 D_006053C0;

u8 func_002537A0(unk_func_002537A0_1 *arg0) {
    s32 r;
    s32 c;
    s32 d;
    s32 e;
    s32 f;

    r = 0;
    c = 0;
    d = 0;
    if (0.0f == D_006053C0.unk_00 && 0.0f == D_006053C0.unk_04) {
        d = 1;
    }
    if (d && 0.0f == D_006053C0.unk_08) {
        c = 1;
    }
    if ((c != 0) ^ 1) {
        e = 0;
        f = 0;
        if (arg0->unk_160 == D_006053C0.unk_00 && arg0->unk_164 == D_006053C0.unk_04) {
            f = 1;
        }
        if (f && arg0->unk_168 == D_006053C0.unk_08) {
            e = 1;
        }
        if ((e != 0) ^ 1) {
            r = 1;
        }
    }
    return r;
}
