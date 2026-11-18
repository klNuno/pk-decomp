#include "common.h"

typedef struct {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_002A0BE0_0;

typedef struct {
    u8 pad_00[0x6160];
    unk_func_002A0BE0_0 unk_6160[1];
} unk_func_002A0BE0_1;

void func_0029D9A0();
extern unk_func_002A0BE0_1 D_007B2370;
extern u8 D_007B8488[];
extern unk_func_002A0BE0_0 D_007B84D0[];

void func_002A0BE0(s32 arg0, s32 *arg1) {
    D_007B84D0[arg0].unk_00 = (f32)*arg1 / 2147483648.0f;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, &D_007B2370.unk_6160[arg0]);
    }
}
