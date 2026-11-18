/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x64];
    f32 unk_64;
    u8 pad_68[0xD];
    u8 unk_75;
    u8 pad_76[0x106];
    u8 unk_17C;
} unk_func_002038E0_0;

typedef struct {
    u8 pad_00[0x8];
    unk_func_002038E0_0 *unk_08;
} unk_func_002038E0_1;

typedef struct {
    u8 pad_00[0x10];
} unk_func_002038E0_2;

s8 func_002023F0(unk_func_002038E0_1 *, unk_func_002038E0_2 *, s32);
void func_002034B0(unk_func_002038E0_1 *, unk_func_002038E0_2 *);
void func_00203860(unk_func_002038E0_1 *);
extern u8 D_00360150;
extern u32 D_005AB848[];
extern f32 D_005AB850[];
extern s16 D_005AD8E6[];
extern s16 D_005AD91C[];

void func_002038E0(unk_func_002038E0_1 *arg0) {
    unk_func_002038E0_2 sp20;
    s8 r;

    arg0->unk_08->unk_64 = arg0->unk_08->unk_64 + D_005AB848[0];
    if (arg0->unk_08->unk_64 < 1000.0f * D_005AD8E6[0] * D_005AB850[0]) {
        return;
    }
    if (D_005AD91C[0] & 0x20) {
        return;
    }
    if (!arg0->unk_08->unk_17C) {
        return;
    }
    arg0->unk_08->unk_64 = 0.0f;
    r = func_002023F0(arg0, &sp20, 0xB);
    if (!r) {
        return;
    }
    if (r == 1) {
        func_00203860(arg0);
    } else {
        func_002034B0(arg0, &sp20);
        if (arg0->unk_08->unk_75 & 8) {
            D_00360150 = 1;
        } else {
            D_00360150 = 0;
        }
        arg0->unk_08->unk_75 &= ~8;
    }
    arg0->unk_08->unk_17C = 0;
}
