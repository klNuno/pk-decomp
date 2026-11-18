#include "common.h"

typedef struct unk_func_002A0430_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[0x4];
} unk_func_002A0430_0;

void func_0029D9A0(s32, s32, void *);
extern u8 D_007B2370[];
extern u8 D_007B8488[];
extern unk_func_002A0430_0 D_007B84D0[];

void func_002A0430(s32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    D_007B84D0[arg0].unk_00 = arg1;
    D_007B84D0[arg0].unk_04 = arg2;
    D_007B84D0[arg0].unk_08 = arg3;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, D_007B2370 + arg0 * 0x10 + 0x6160);
    }
}
