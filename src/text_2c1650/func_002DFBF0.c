#include "common.h"

typedef struct unk_func_002DFBF0_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
} unk_func_002DFBF0_0;

s32 func_003047A0(void);
void func_00304670(s32, s32);
void func_00304B00(unk_func_002DFBF0_0 *);

unk_func_002DFBF0_0 *func_002DFBF0(unk_func_002DFBF0_0 *arg0, s16 arg1) {
    s32 temp_s0;

    if (arg0 != NULL) {
        temp_s0 = arg0->unk_18;
        if (temp_s0 != 0) {
            func_00304670(func_003047A0(), temp_s0);
            arg0->unk_18 = 0;
        }
        arg0->unk_10 = 0;
        arg0->unk_0C = 0;
        arg0->unk_30 = 0;
        arg0->unk_2C = 0;
        arg0->unk_28 = 0;
        arg0->unk_24 = 0;
        arg0->unk_20 = 0;
        arg0->unk_1C = 0;
        arg0->unk_18 = 0;
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
