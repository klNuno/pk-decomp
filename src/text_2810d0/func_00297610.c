#include "common.h"

typedef struct unk_func_00297610_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_00297610_0;

extern unk_func_00297610_0 D_007B8420;

void func_00297610(f32 arg0, f32 arg1, f32 arg2) {
    D_007B8420.unk_00 = arg0;
    D_007B8420.unk_04 = arg1;
    D_007B8420.unk_08 = arg2;
    D_007B8420.unk_0C = 1.0f;
}
