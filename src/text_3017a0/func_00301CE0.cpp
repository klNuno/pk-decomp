#include "common.h"

typedef struct unk_func_00301CE0_0 {
    void *unk_00;
    s32 unk_04;
    u8 unk_08[4];
} unk_func_00301CE0_0;

extern "C" {
extern u8 D_0035ECF0[];
void func_00302AD0(...);
void func_002D0DA0(...);

unk_func_00301CE0_0 *func_00301CE0(unk_func_00301CE0_0 *volatile arg0) {
    u8 sp1C[4];

    func_00302AD0(arg0);
    arg0->unk_00 = D_0035ECF0;
    func_002D0DA0(arg0->unk_08, sp1C);
    return arg0;
}
}
