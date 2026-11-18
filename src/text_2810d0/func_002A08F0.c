#include "common.h"

typedef struct unk_func_002A08F0_0 {
    f32 unk_00;
    f32 unk_04;
    u8 pad_08[8];
} unk_func_002A08F0_0;

typedef struct unk_func_002A08F0_1 {
    u8 pad_00[0x6160];
    unk_func_002A08F0_0 unk_6160[1];
} unk_func_002A08F0_1;

void func_0029D9A0();
extern unk_func_002A08F0_1 D_007B2370;
extern u8 D_007B8488[];

void func_002A08F0(s32 arg0, f32 arg1, f32 arg2) {
    D_007B2370.unk_6160[arg0].unk_00 = arg1;
    D_007B2370.unk_6160[arg0].unk_04 = arg2;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, &D_007B2370.unk_6160[arg0]);
    }
}
