#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    u8 pad_08[8];
} unk_func_002A07D0_0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_002A07D0_1;

void func_0029D9A0(s32, s32, void *);
extern u8 D_007B2370[];
extern u8 D_007B8488[];
extern unk_func_002A07D0_0 D_007B84D0[];

void func_002A07D0(s32 arg0, unk_func_002A07D0_1 *arg1) {
    f32 x;
    f32 y;

    x = (f32)arg1->unk_00 / 2147483648.0f;
    y = (f32)arg1->unk_04 / 2147483648.0f;
    D_007B84D0[arg0].unk_00 = x;
    D_007B84D0[arg0].unk_04 = y;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, D_007B2370 + arg0 * 16 + 0x6160);
    }
}
