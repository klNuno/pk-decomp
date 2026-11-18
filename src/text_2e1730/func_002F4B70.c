#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} unk_func_002F4B70_0;

void func_002CDC10();

unk_func_002F4B70_0 *func_002F4B70(unk_func_002F4B70_0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    func_002CDC10(arg0, arg1);
    arg0->unk_04 = arg2;
    arg0->unk_08 = arg3;
    arg0->unk_0C = arg5;
    arg0->unk_10 = arg6;
    arg0->unk_14 = arg4;
    return arg0;
}
