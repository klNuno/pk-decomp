#include "common.h"

typedef struct unk_func_00273B50_0 {
    u8 pad_00[0x18];
    u8 unk_18;
    u8 pad_19[0x1];
    u8 unk_1A;
    u8 pad_1B[0xD];
} unk_func_00273B50_0;

extern unk_func_00273B50_0 D_007A5F10[];

void func_00273B50(s32 arg0) {
    unk_func_00273B50_0 *temp;

    if (arg0 < 200) {
        temp = &D_007A5F10[arg0];
        temp->unk_1A = 1;
        temp->unk_18 = 1;
    }
}
