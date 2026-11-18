#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    s32 unk_18;
} unk_func_002AA4F0_0;

typedef struct {
    void *unk_00;
    u8 pad_04[0x4];
    unk_func_002AA4F0_0 unk_08;
} unk_func_002AA4F0_1;

unk_func_002AA4F0_1 *func_0029DA50(s32);
s32 func_0029DB20(s32, s32);
void func_002AA5A0();

void func_002AA4F0(s32 arg0, s32 arg1, s32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    unk_func_002AA4F0_1 *obj = func_0029DA50(0x1C);
    unk_func_002AA4F0_0 *sub = &obj->unk_08;

    sub->unk_00 = arg0;
    sub->unk_04 = arg1;
    sub->unk_08 = arg3;
    sub->unk_0C = arg4;
    sub->unk_10 = arg5;
    sub->unk_14 = arg6;
    sub->unk_18 = func_0029DB20(arg2, arg0 * arg1);
    obj->unk_00 = func_002AA5A0;
}
