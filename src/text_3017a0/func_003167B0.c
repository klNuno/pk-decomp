#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_003167B0_0;

typedef struct {
    u32 unk_00;
    unk_func_003167B0_0 *unk_04;
} unk_func_003167B0_1;

typedef struct {
    u8 unk_00;
    u8 pad_01[7];
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
} unk_func_003167B0_2;

void func_003167B0(unk_func_003167B0_2 *arg0, unk_func_003167B0_1 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, unk_func_003167B0_1 *arg6) {
    u32 i;
    unk_func_003167B0_0 *src;
    f32 x;
    f32 y;
    f32 z;

    if (arg0->unk_00 != 0) {
        for (i = 0; i < arg6->unk_00; i++) {
            src = &arg1->unk_04[i];
            x = arg0->unk_08 * src->unk_00;
            y = arg0->unk_0C * src->unk_04;
            z = arg0->unk_10 * src->unk_08;
            arg6->unk_04[i].unk_00 = x + arg6->unk_04[i].unk_00;
            arg6->unk_04[i].unk_04 = y + arg6->unk_04[i].unk_04;
            arg6->unk_04[i].unk_08 = z + arg6->unk_04[i].unk_08;
        }
    }
}
