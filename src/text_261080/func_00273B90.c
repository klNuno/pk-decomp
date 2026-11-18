#include "common.h"

typedef struct unk_func_00273B90_0 {
    u8 pad_00[0x18];
    u8 unk_18;
    u8 pad_19[0xF];
} unk_func_00273B90_0;

extern unk_func_00273B90_0 D_007A5F10[];

void func_00273B90(s32 arg0, u8 arg1) {
    unk_func_00273B90_0 *temp;

    if (arg0 < 0xC8) {
        temp = &D_007A5F10[arg0];
        temp->unk_18 = arg1;
    }
}
