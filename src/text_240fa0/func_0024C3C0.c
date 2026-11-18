/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_func_0024C3C0_0;

typedef struct {
    unk_func_0024C3C0_0 unk_00;
    u8 pad_0C[0x28];
} unk_func_0024C3C0_1;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[8];
    s32 unk_14;
    u8 pad_18[0x1C];
    unk_func_0024C3C0_1 unk_34[100];
} unk_func_0024C3C0_2;

extern f32 D_003601C8;
extern s32 D_003601CC;
extern void *D_00617310[];
f32 func_00114EA0(f32);
f32 func_00151360(f32);
f32 func_001E60E0(f32);
void func_0025CD20(s32, unk_func_0024C3C0_0 *, unk_func_0024C3C0_0 *, void *, f32);

void func_0024C3C0(unk_func_0024C3C0_2 *arg0, u16 arg1, u16 arg2) {
    unk_func_0024C3C0_0 temp0;
    f32 temp1;

    if (D_003601CC == 0x15) {
        temp0.unk_00 = arg0->unk_34[arg2].unk_00.unk_00 - arg0->unk_34[arg1].unk_00.unk_00;
        temp0.unk_04 = arg0->unk_34[arg2].unk_00.unk_04 - arg0->unk_34[arg1].unk_00.unk_04;
        temp0.unk_08 = arg0->unk_34[arg2].unk_00.unk_08 - arg0->unk_34[arg1].unk_00.unk_08;
        temp1 = func_001E60E0(func_00151360(temp0.unk_08) +
                              (func_00151360(temp0.unk_00) + func_00151360(temp0.unk_04)));
        temp1 = func_00114EA0(0.1f + temp1 / 1.5f);
    } else {
        temp1 = D_003601C8;
    }
    if (arg0->unk_14 != 0 || arg0->unk_08 == 0) {
        func_0025CD20((u32)D_003601CC, &arg0->unk_34[arg1].unk_00, &arg0->unk_34[arg2].unk_00,
                      (void *)D_00617310[arg0->unk_14 ? 0 : 1], temp1);
    } else {
        func_0025CD20(0x33, &arg0->unk_34[arg1].unk_00, &arg0->unk_34[arg2].unk_00,
                      (void *)D_00617310[arg0->unk_14 ? 0 : 1], temp1);
    }
}
