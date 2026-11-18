#include "common.h"

typedef struct unk_func_00169210_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00169210_0;

extern unk_func_00169210_0 D_0036A240;
extern f32 D_0035FB48;

void func_00169210(s32 arg0, f32 arg1, unk_func_00169210_0 *arg2) {
    D_0036A240 = *arg2;
    D_0035FB48 = arg1;
}
