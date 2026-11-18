#include "common.h"

typedef struct unk_func_002F4390_0 {
    u8 unk_00;
} unk_func_002F4390_0;

void func_002F4970(s32, unk_func_002F4390_0 *, unk_func_002F4390_0 *);

s32 func_002F4390(s32 arg0, unk_func_002F4390_0 *arg1) {
    unk_func_002F4390_0 sp28;
    unk_func_002F4390_0 sp2C;
    sp28 = *arg1;
    func_002F4970(arg0, &sp28, &sp2C);
    return arg0;
}
