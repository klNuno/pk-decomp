/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_00296450_0 {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0C;
} unk_func_00296450_0;

extern f32 D_007B8420[];

void func_00296450(unk_func_00296450_0 *arg0) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;

    a = arg0->unk_00 / 4294967296.0f;
    d = arg0->unk_0C / 4294967296.0f;
    c = arg0->unk_08 / 4294967296.0f;
    b = arg0->unk_04 / 4294967296.0f;
    D_007B8420[0] = a;
    D_007B8420[1] = b;
    D_007B8420[2] = c;
    D_007B8420[3] = d;
}
