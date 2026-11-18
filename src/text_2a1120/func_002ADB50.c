#include "common.h"

void func_002AD610(f32 *);

void func_002ADB50(f32 arg0, f32 arg1, f32 arg2) {
    f32 sp10[4];

    sp10[0] = arg0;
    sp10[3] = 1.0f;
    sp10[1] = arg1;
    sp10[2] = arg2;
    func_002AD610(sp10);
}
