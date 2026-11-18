#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_00166A20_0;

typedef struct {
    u32 unk_00;
    u8 pad_04[0x48];
    unk_func_00166A20_0 *unk_4C;
} unk_func_00166A20_1;

void func_00166A20(unk_func_00166A20_1 *arg0, unk_func_00166A20_0 *arg1) {
    arg0->unk_4C = arg1;
    if (arg1 != NULL) {
        if (arg1->unk_14 & 8) {
            arg0->unk_00 &= ~0x400;
        }
        if (arg1->unk_14 & 0x40) {
            arg0->unk_00 &= ~0x08000000;
        } else {
            arg0->unk_00 |= 0x08000000;
        }
    } else {
        arg0->unk_00 |= 0x08000000;
    }
}
