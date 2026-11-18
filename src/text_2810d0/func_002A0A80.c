#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    u8 pad_08[8];
} unk_func_002A0A80_0;

void func_0029D9A0(s32, s32, void *);
extern u8 D_007B2370[];
extern u8 D_007B8488[];
extern unk_func_002A0A80_0 D_007B84D0[];

void func_002A0A80(s32 arg0, s32 arg1, s32 arg2) {
    f32 x;
    f32 y;

    x = (f32)arg1 / 32767.0f;
    y = (f32)arg2 / 32767.0f;
    D_007B84D0[arg0].unk_00 = x;
    D_007B84D0[arg0].unk_04 = y;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, D_007B2370 + arg0 * 16 + 0x6160);
    }
}
