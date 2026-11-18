#include "common.h"

typedef struct unk_func_002D66E0_0 {
    u8 pad_00[0x4];
    s32 unk_04;
    s32 unk_08;
} unk_func_002D66E0_0;

void func_002D6DC0();
void func_00304B00();

unk_func_002D66E0_0 *func_002D66E0(unk_func_002D66E0_0 *arg0, s16 arg1) {
    u8 sp34[4];
    s32 sp38;
    s32 *sp3C;

    if (arg0 != NULL) {
        sp3C = &arg0->unk_04;
        sp38 = arg0->unk_08;
        func_002D6DC0(sp34, arg0, &sp38, &sp3C);
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
