#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00180F60_0;

void func_0031ECD0();
extern s32 D_0035F4D8;

void func_00180F60(void) {
    unk_func_00180F60_0 temp;

    if (D_0035F4D8 >= 0) {
        temp.unk_00 = 0x0AB9FC72;
        temp.unk_04 = 0;
        temp.unk_08 = 0;
        temp.unk_0C = 0;
        func_0031ECD0(D_0035F4D8, &temp, 0x10);
    }
}
