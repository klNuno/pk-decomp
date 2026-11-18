#include "common.h"

typedef struct unk_func_002A02D0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A02D0_0;

typedef struct unk_func_002A02D0_1 {
    u8 pad_00[0x6160];
    unk_func_002A02D0_0 unk_6160[1];
} unk_func_002A02D0_1;

void func_0029D9A0(s32, s32, unk_func_002A02D0_0 *);
extern unk_func_002A02D0_1 D_007B2370;
extern u8 D_007B8488[];
extern unk_func_002A02D0_0 D_007B84D0[];

inline void func_002A02D0_0(s32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    arg1 /= 2147483648.0f;
    arg2 /= 2147483648.0f;
    arg3 /= 2147483648.0f;
    D_007B84D0[arg0].unk_00 = arg1;
    D_007B84D0[arg0].unk_04 = arg2;
    D_007B84D0[arg0].unk_08 = arg3;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, &D_007B2370.unk_6160[arg0]);
    }
}
void func_002A02D0(s32 arg0, s32 *arg1) {
    func_002A02D0_0(arg0, arg1[0], arg1[1], arg1[2]);
}
