#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A0000_0;

typedef struct {
    s32 unk_00[4];
} unk_func_002A0000_1;

typedef struct {
    u8 pad_00[0x6160];
    unk_func_002A0000_1 unk_6160[1];
} unk_func_002A0000_2;

void func_0029D9A0(s32, s32, unk_func_002A0000_1 *);
extern unk_func_002A0000_2 D_007B2370;
extern u8 D_007B8488[];
extern unk_func_002A0000_0 D_007B84D0[];

void func_002A0000(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    D_007B84D0[arg0].unk_00 = (f32)arg1 / 2147483648.0f;
    D_007B84D0[arg0].unk_04 = (f32)arg2 / 2147483648.0f;
    D_007B84D0[arg0].unk_08 = (f32)arg3 / 2147483648.0f;
    D_007B84D0[arg0].unk_0C = (f32)arg4 / 2147483648.0f;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, &D_007B2370.unk_6160[arg0]);
    }
}
