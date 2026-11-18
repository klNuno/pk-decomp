#include "common.h"

typedef struct unk_func_002F1210_0 {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
} unk_func_002F1210_0;

void func_002CDC10(s32 *, s32);

unk_func_002F1210_0 *func_002F1210(unk_func_002F1210_0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk_00 = arg1;
    func_002CDC10(&arg0->unk_04, arg2);
    arg0->unk_08 = arg3;
    return arg0;
}
