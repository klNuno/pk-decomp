#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C[4];
} unk_func_003043C0_0;

void func_002CD690();
void func_002D0DA0();
void func_002F52E0();

unk_func_003043C0_0 *func_003043C0(unk_func_003043C0_0 *volatile arg0, unk_func_003043C0_0 *arg1) {
    s32 sp2C;

    func_002F52E0(arg0);
    func_002D0DA0(arg0->unk_0C, &sp2C);
    arg0->unk_00 = arg1->unk_00;
    arg0->unk_04 = arg1->unk_04;
    func_002CD690(arg0->unk_0C, arg1->unk_0C, 0, -1);
    arg0->unk_08 = arg1->unk_08;
    return arg0;
}
