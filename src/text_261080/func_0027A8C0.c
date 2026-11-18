#include "common.h"

typedef struct unk_func_0027A8C0_0 {
    s64 unk_00;
    s64 unk_08;
    s64 unk_10;
} unk_func_0027A8C0_0;

typedef struct unk_func_0027A8C0_1 {
    u8 pad_00[0x8];
    s64 unk_08;
    s64 unk_10;
} unk_func_0027A8C0_1;

extern u8 D_007A8228[];
void func_002797A0();

s32 func_0027A8C0(s32 arg0, unk_func_0027A8C0_1 *arg1) {
    unk_func_0027A8C0_0 sp20;

    func_002797A0(D_007A8228, &sp20);
    arg1->unk_08 = sp20.unk_00;
    arg1->unk_10 = sp20.unk_08;
    return 1;
}
