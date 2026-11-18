#include "common.h"

void func_00167450();
extern s32 D_0035FB00;
extern s32 D_0035FB84;
extern s32 D_0035FAF0;

typedef struct {
    u8 pad_00[0xC];
    s32 *unk_0C;
} unk_func_001685C0_0;

void func_001685C0(s32 arg0, unk_func_001685C0_0 *arg1, s32 arg2, s32 arg3) {
    s32 temp;

    D_0035FB00 = 0;
    D_0035FB84 = 0;
    D_0035FAF0 = 0;
    temp = *arg1->unk_0C;
    if (temp != 0) {
        func_00167450(arg0, temp, arg3);
    }
}
