#include "common.h"

typedef struct {
    u8 unk_00_0 : 3;
    u8 unk_00_3 : 1;
    u8 unk_00_4 : 1;
    u8 unk_00_5 : 3;
} unk_func_002C4900_0;

extern s32 D_007B8008[];
extern unk_func_002C4900_0 D_007B08C0[];
extern unk_func_002C4900_0 D_007B09D2[];

void func_002C4900(s32 arg0) {
    D_007B8008[0] = arg0;
    D_007B08C0[0].unk_00_3 = arg0 == 0x1D01;
    D_007B09D2[0].unk_00_4 = 1;
}
