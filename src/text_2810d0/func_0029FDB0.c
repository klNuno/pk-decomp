#include "common.h"

typedef struct unk_func_0029FDB0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_0029FDB0_0;

void func_0029D9A0(s32, s32, void *);
extern u8 D_007B2370[];
extern u8 D_007B8488[];
extern unk_func_0029FDB0_0 D_007B84D0[];

void func_0029FDB0(s32 arg0, s16 *arg1) {
    f32 x;
    f32 y;
    f32 z;
    f32 w;

    w = arg1[3] / 32767.0f;
    z = arg1[2] / 32767.0f;
    x = arg1[0] / 32767.0f;
    y = arg1[1] / 32767.0f;

    D_007B84D0[arg0].unk_00 = x;
    D_007B84D0[arg0].unk_04 = y;
    D_007B84D0[arg0].unk_08 = z;
    D_007B84D0[arg0].unk_0C = w;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, D_007B2370 + arg0 * 16 + 0x6160);
    }
}
