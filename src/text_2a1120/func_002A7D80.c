#include "common.h"

typedef struct unk_func_002A7D80_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A7D80_0;

typedef struct unk_func_002A7D80_1 {
    u8 pad_00[0x6120];
    unk_func_002A7D80_0 unk_6120[1];
} unk_func_002A7D80_1;

void func_0029D9A0(s32, s32, unk_func_002A7D80_0 *);
extern unk_func_002A7D80_1 D_007B2370;
extern u8 D_007B8488[];
extern unk_func_002A7D80_0 D_007B8490[];

void func_002A7D80(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    D_007B8490[arg0].unk_00 = (f32)arg1 / 2147483648.0f;
    D_007B8490[arg0].unk_04 = (f32)arg2 / 2147483648.0f;
    D_007B8490[arg0].unk_08 = (f32)arg3 / 2147483648.0f;
    D_007B8490[arg0].unk_0C = (f32)arg4 / 2147483648.0f;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, &D_007B2370.unk_6120[arg0]);
    }
}
