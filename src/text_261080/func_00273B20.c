#include "common.h"

typedef struct {
    u8 pad_00[0x1A];
    u8 unk_1A;
    u8 pad_1B[0xD];
} unk_func_00273B20_0;

extern unk_func_00273B20_0 D_007A5F10[];

void func_00273B20(s32 arg0) {
    if (arg0 < 0xC8) {
        unk_func_00273B20_0 *temp = &D_007A5F10[arg0];
        temp->unk_1A = 2;
    }
}
