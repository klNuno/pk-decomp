#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 *unk_0C;
} unk_func_00168600_0;

s32 func_001577B0(s32, s32);
s32 func_00157780(s32, s32);
void func_00167290(s32, s32, s32, s32);
extern s32 D_0035FB00;
extern s32 D_0035FB84;
extern s32 D_0035FAF0;

void func_00168600(s32 arg0, unk_func_00168600_0 *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    if (arg4 != 0) {
        D_0035FB00 = func_001577B0(arg4, 0);
        D_0035FB84 = func_001577B0(arg4, 0);
        D_0035FAF0 = func_00157780(arg4, 0);
    } else {
        D_0035FB00 = 0;
        D_0035FB84 = 0;
        D_0035FAF0 = 0;
    }
    if (*arg1->unk_0C != 0) {
        func_00167290(arg0, *arg1->unk_0C, arg3, arg5);
    }
    D_0035FB00 = 0;
    D_0035FB84 = 0;
    D_0035FAF0 = 0;
}
