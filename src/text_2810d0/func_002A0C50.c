/* profile: opt_nodf */
#include "common.h"

typedef struct unk_func_002A0C50_0 {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_002A0C50_0;

typedef struct unk_func_002A0C50_1 {
    u8 pad_00[0x10];
} unk_func_002A0C50_1;

void func_0029D9A0();
extern unk_func_002A0C50_0 D_007B84D0[];
extern u8 D_007B8488[];
extern unk_func_002A0C50_1 D_007B2370[];

void func_002A0C50(s32 arg0, s16 *arg1) {
    D_007B84D0[arg0].unk_00 = (f32)arg1[0] / 32767.0f;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, (u8 *)&D_007B2370[arg0] + 0x6160);
    }
}
