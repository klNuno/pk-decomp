#include "common.h"

typedef struct unk_func_002DF720_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    s32 unk_18;
    u8 pad_1C[8];
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    u8 pad_34[0x10];
    s32 unk_44;
} unk_func_002DF720_0;

typedef struct unk_func_002DF720_1 {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x14];
    s32 unk_28;
    s32 unk_2C;
} unk_func_002DF720_1;

s32 func_003047A0(void);
void func_00304670(s32, s32);
s32 func_003046E0(s32, s32);

s32 func_002DF720(unk_func_002DF720_0 *arg0, unk_func_002DF720_1 *arg1) {
    s32 temp;

    temp = arg0->unk_18;
    if (temp != 0) {
        func_00304670(func_003047A0(), temp);
        arg0->unk_18 = 0;
    }
    arg0->unk_30 = 0;
    if (arg1->unk_28 == -1) {
        return (arg1->unk_2C == 0) ? 1 : 0;
    }
    if (arg0->unk_28 == 0) {
        return 0;
    }
    arg0->unk_10 = 0;
    arg0->unk_0C = 0;
    arg0->unk_2C = arg1->unk_2C;
    arg0->unk_24 = arg0->unk_28 + arg1->unk_28;
    temp = arg1->unk_10;
    if (temp != 0) {
        arg0->unk_18 = func_003046E0(func_003047A0(), temp);
        if (arg0->unk_18 == 0) {
            arg0->unk_44 = arg0->unk_18;
            return 0;
        }
    } else {
        arg0->unk_18 = 0;
    }
    arg0->unk_44 = arg0->unk_18;
    arg0->unk_30 = arg1->unk_10;
    return 1;
}
