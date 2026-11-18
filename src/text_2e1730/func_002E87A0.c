#include "common.h"

typedef struct unk_func_002E87A0_0 {
    u8 unk_00;
} unk_func_002E87A0_0;

void func_002E8BE0(s32, unk_func_002E87A0_0 *, unk_func_002E87A0_0 *);

s32 func_002E87A0(s32 arg0, unk_func_002E87A0_0 *arg1) {
    unk_func_002E87A0_0 sp28;
    unk_func_002E87A0_0 sp2C;
    sp28 = *arg1;
    func_002E8BE0(arg0, &sp28, &sp2C);
    return arg0;
}
