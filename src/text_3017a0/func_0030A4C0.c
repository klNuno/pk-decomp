#include "common.h"

typedef struct unk_func_0030A4C0_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
    u32 unk_10;
    u8 pad_14[0x2C];
    s32 unk_40;
} unk_func_0030A4C0_0;

s32 func_003079E0(s32);
s32 func_00307A70(s32, s32);

s32 func_0030A4C0(unk_func_0030A4C0_0 *arg0, s32 arg1, s32 arg2) {
    if (arg0->unk_10 == -1) {
        arg0->unk_10 = func_00307A70(arg1, arg2);
        arg0->unk_0C = 0;
        if (arg0->unk_10 != -1) {
            arg0->unk_40 = func_003079E0(arg0->unk_10);
        }
        return arg0->unk_10 != -1;
    }
    return 0;
}
