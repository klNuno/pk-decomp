#include "common.h"

typedef struct unk_func_002A06C0_0 {
    f32 unk_00;
    f32 unk_04;
    u8 pad_08[0x8];
} unk_func_002A06C0_0;

typedef struct unk_func_002A06C0_1 {
    u8 pad_00[0x10];
} unk_func_002A06C0_1;

void func_0029D9A0();
extern unk_func_002A06C0_0 D_007B84D0[];
extern u8 D_007B8488[];
extern unk_func_002A06C0_1 D_007B2370[];

void func_002A06C0(s32 arg0, f32 *arg1) {
    f32 temp;
    f32 temp2;

    temp = arg1[0];
    temp2 = arg1[1];
    D_007B84D0[arg0].unk_00 = temp;
    D_007B84D0[arg0].unk_04 = temp2;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, (u8 *)&D_007B2370[arg0] + 0x6160);
    }
}
