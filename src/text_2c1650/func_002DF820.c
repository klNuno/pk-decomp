#include "common.h"

typedef struct unk_func_002DF820_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[0x4];
    s32 unk_18;
    u8 pad_1C[0x8];
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[0xC];
    s32 unk_44;
} unk_func_002DF820_0;

void func_00304670(s32, s32);
s32 func_003046E0(s32, s32);
s32 func_003047A0();

s32 func_002DF820(unk_func_002DF820_0 *arg0, unk_func_002DF820_0 *arg1) {
    s32 temp;

    temp = arg0->unk_18;
    if (temp != 0) {
        func_00304670(func_003047A0(), temp);
        arg0->unk_18 = 0;
    }
    arg0->unk_30 = 0;
    arg0->unk_10 = 0;
    arg0->unk_0C = 0;
    if (arg1->unk_30 == -1) {
        return (arg1->unk_34 == 0) ? 1 : 0;
    }
    arg0->unk_2C = arg1->unk_34;
    arg0->unk_24 = arg0->unk_28 + arg1->unk_30;
    temp = arg1->unk_0C;
    if (temp != 0) {
        arg0->unk_18 = func_003046E0(func_003047A0(), temp);
        if (arg0->unk_18 == 0) {
            arg0->unk_44 = arg0->unk_18;
            return 0;
        }
    }
    arg0->unk_44 = arg0->unk_18;
    arg0->unk_30 = arg1->unk_0C;
    return 1;
}
