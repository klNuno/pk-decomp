#include "common.h"

typedef struct unk_func_002A0860_0 {
    f32 unk_00;
    f32 unk_04;
    u8 pad_08[8];
} unk_func_002A0860_0;

typedef struct unk_func_002A0860_1 {
    s16 unk_00;
    s16 unk_02;
} unk_func_002A0860_1;

void func_0029D9A0(s32, s32, void *);
extern u8 D_007B2370[];
extern u8 D_007B8488[];
extern unk_func_002A0860_0 D_007B84D0[];

void func_002A0860(s32 arg0, unk_func_002A0860_1 *arg1) {
    f32 x = arg1->unk_00 / 32767.0f;
    f32 y = arg1->unk_02 / 32767.0f;

    D_007B84D0[arg0].unk_00 = x;
    D_007B84D0[arg0].unk_04 = y;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, D_007B2370 + arg0 * 16 + 0x6160);
    }
}
