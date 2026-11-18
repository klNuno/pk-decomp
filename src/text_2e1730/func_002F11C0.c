#include "common.h"

typedef struct unk_func_002F11C0_0 {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
} unk_func_002F11C0_0;

void func_002CDC10(s32 *, s32 *);

unk_func_002F11C0_0 *func_002F11C0(unk_func_002F11C0_0 *arg0, unk_func_002F11C0_0 *arg1) {
    arg0->unk_00 = arg1->unk_00;
    func_002CDC10(&arg0->unk_04, &arg1->unk_04);
    arg0->unk_08 = arg1->unk_08;
    return arg0;
}
