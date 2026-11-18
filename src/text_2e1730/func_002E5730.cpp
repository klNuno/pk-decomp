#include "common.h"

class unk_func_002E5730_0 {
};

typedef struct unk_func_002E5730_1 {
    s32 unk_00;
} unk_func_002E5730_1;

extern "C" {
void func_002E5BC0(void *, unk_func_002E5730_0 *, unk_func_002E5730_1 *);
void func_002E5880(unk_func_002E5730_1 *, s32);
void func_002E56C0(void *);
u8 *func_002E5730(u8 *arg0);
}

u8 *func_002E5730(u8 *arg0) {
    unk_func_002E5730_0 a;
    unk_func_002E5730_1 b;
    unk_func_002E5730_0 c = a;

    func_002E5BC0(arg0 + 0x60, &c, &b);
    func_002E5880(&b, -1);
    func_002E56C0(arg0);
    return arg0;
}
