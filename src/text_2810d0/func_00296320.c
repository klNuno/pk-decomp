/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_00296320_0 {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
} unk_func_00296320_0;

typedef struct unk_func_00296320_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00296320_1;

extern unk_func_00296320_1 D_007B8420;

void func_00296320(unk_func_00296320_0 *arg0) {
    f32 d;
    f32 c;
    f32 b;
    f32 a;

    a = (u32)arg0->unk_06 / 65535.0f;
    b = (u32)arg0->unk_04 / 65535.0f;
    c = (u32)arg0->unk_02 / 65535.0f;
    d = (u32)arg0->unk_00 / 65535.0f;
    D_007B8420.unk_00 = d;
    D_007B8420.unk_04 = c;
    D_007B8420.unk_08 = b;
    D_007B8420.unk_0C = a;
}
