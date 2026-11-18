#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_0029FE90_0;

void func_0029D9A0();
typedef struct {
    u8 pad_00[0x6160];
    unk_func_0029FE90_0 unk_6160[1];
} unk_func_0029FE90_1;

extern unk_func_0029FE90_1 D_007B2370;
extern u8 D_007B8488[];
extern unk_func_0029FE90_0 D_007B84D0[];

void func_0029FE90(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    D_007B84D0[arg0].unk_00 = arg1;
    D_007B84D0[arg0].unk_04 = arg2;
    D_007B84D0[arg0].unk_08 = arg3;
    D_007B84D0[arg0].unk_0C = arg4;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, &D_007B2370.unk_6160[arg0]);
    }
}
