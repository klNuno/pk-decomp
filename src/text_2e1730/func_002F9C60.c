#include "common.h"

typedef struct unk_func_002F9C60_0 {
    s32 unk_00;
    s32 unk_04;
} unk_func_002F9C60_0;

void func_002D0DA0();

unk_func_002F9C60_0 *func_002F9C60(unk_func_002F9C60_0 *arg0) {
    s32 sp2C;

    func_002D0DA0(arg0, &sp2C);
    arg0->unk_04 = 0;
    return arg0;
}
