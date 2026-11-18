#include "common.h"

typedef struct unk_func_00161300_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_00161300_0;

extern unk_func_00161300_0 D_003313F0[];
extern s32 D_0035F9F0[2];

s32 func_0010B3C0(s32, s32, s32, s32);

void func_00161300(u8 arg0) {
    D_0035F9F0[arg0] = func_0010B3C0(D_003313F0[arg0].unk_00, D_003313F0[arg0].unk_04, 2, 0);
}
