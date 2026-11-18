#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_00304440_0;

typedef struct {
    unk_func_00304440_0 unk_00;
    s32 unk_08;
    u8 unk_0C[4];
} unk_func_00304440_1;

void func_002F52E0();
void func_002D0DA0();

unk_func_00304440_1 *func_00304440(unk_func_00304440_1 *arg0, unk_func_00304440_0 *arg1, s32 arg2) {
    s32 sp;

    func_002F52E0();
    func_002D0DA0(arg0->unk_0C, &sp);
    arg0->unk_00.unk_00 = arg1->unk_00;
    arg0->unk_00.unk_04 = arg1->unk_04;
    arg0->unk_08 = arg2;
    return arg0;
}
