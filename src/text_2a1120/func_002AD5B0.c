#include "common.h"

typedef struct unk_func_002AD5B0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002AD5B0_0;

void func_002AD610(unk_func_002AD5B0_0 *);

void func_002AD5B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    unk_func_002AD5B0_0 sp10;

    sp10.unk_00 = arg0;
    sp10.unk_04 = arg1;
    sp10.unk_08 = arg2;
    sp10.unk_0C = arg3;
    func_002AD610(&sp10);
}
