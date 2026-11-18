#include "common.h"

typedef struct unk_func_002CD350_0 {
    s16 unk_00[13];
} unk_func_002CD350_0;

extern unk_func_002CD350_0 D_00341B00;

void func_0011CBB0(s32, void *, s32);

u8 func_002CD350(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_002CD350_0 sp20 = D_00341B00;
    u8 temp = arg2 >= 0x2E;

    if (temp) {
        func_0011CBB0(arg1, &sp20, arg0);
    }
    return temp;
}
