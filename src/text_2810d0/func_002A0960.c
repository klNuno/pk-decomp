#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A0960_0;

typedef struct {
    u8 pad_00[0x6160];
    unk_func_002A0960_0 unk_6160[1];
} unk_func_002A0960_1;

f32 int2dB__Fi(s32);
void func_0029D9A0();
extern unk_func_002A0960_1 D_007B2370;
extern u8 D_007B8488[];
extern unk_func_002A0960_0 D_007B84D0[];

void func_002A0960(s32 arg0, s32 arg1, s32 arg2) {
    D_007B84D0[arg0].unk_00 = int2dB__Fi(arg1);
    D_007B84D0[arg0].unk_04 = int2dB__Fi(arg2);
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, &D_007B2370.unk_6160[arg0]);
    }
}
