#include "common.h"

typedef struct {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_0028D510_0;

typedef struct {
    s16 unk_00;
    s16 unk_02;
    s16 unk_04;
    s16 unk_06;
} unk_func_0028D510_1;

extern unk_func_0028D510_0 D_007B8460[];
extern unk_func_0028D510_0 D_007B8464[];
extern unk_func_0028D510_0 D_007B8468[];
extern unk_func_0028D510_0 D_007B846C[];

void func_0028D510(s32 arg0, unk_func_0028D510_1 *arg1) {
    f32 c, d, a, b;

    d = arg1->unk_06 / 32767.0f;
    c = arg1->unk_04 / 32767.0f;
    a = arg1->unk_00 / 32767.0f;
    b = arg1->unk_02 / 32767.0f;
    D_007B8460[arg0].unk_00 = a;
    D_007B8464[arg0].unk_00 = b;
    D_007B8468[arg0].unk_00 = c;
    D_007B846C[arg0].unk_00 = d;
}
