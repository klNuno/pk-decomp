/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00202620_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00202620_0;

typedef struct unk_func_00202620_1 {
    u8 pad_00[0x1C];
    unk_func_00202620_0 unk_1C;
    u8 pad_28[0x38];
    s32 unk_60;
} unk_func_00202620_1;

typedef struct unk_func_00202620_2 {
    u8 pad_00[0x8];
    unk_func_00202620_1 *unk_08;
    u8 pad_0C[0x14];
    unk_func_00202620_0 unk_20;
} unk_func_00202620_2;

extern s16 D_005AD91C[];

s32 func_002023F0(unk_func_00202620_2 *, unk_func_00202620_0 *, s8);

void func_00202620(unk_func_00202620_2 *arg0) {
    unk_func_00202620_0 sp20;
    unk_func_00202620_0 sp30;
    s8 temp;

    temp = 5;
    if (D_005AD91C[0] & 4) {
        temp |= 8;
    }
    if (func_002023F0(arg0, &sp20, temp) != 0) {
        sp30.unk_00 = sp20.unk_00 - arg0->unk_20.unk_00;
        sp30.unk_04 = sp20.unk_04 - arg0->unk_20.unk_04;
        sp30.unk_08 = sp20.unk_08 - arg0->unk_20.unk_08;
        arg0->unk_08->unk_60 = 2;
        ((s32 *)&arg0->unk_08->unk_1C)[0] = ((s32 *)&sp20)[0];
        ((s32 *)&arg0->unk_08->unk_1C)[1] = ((s32 *)&sp20)[1];
        ((s32 *)&arg0->unk_08->unk_1C)[2] = ((s32 *)&sp20)[2];
    }
}
