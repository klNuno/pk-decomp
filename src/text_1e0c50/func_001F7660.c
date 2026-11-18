/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x168];
    s8 unk_168;
} unk_func_001F7660_0;

typedef struct {
    u8 pad_00[0x5C];
    f32 unk_5C;
    u8 pad_60[0x16];
    s8 unk_76;
} unk_func_001F7660_1;

typedef struct {
    unk_func_001F7660_0 *unk_00;
    u8 pad_04[4];
    unk_func_001F7660_1 *unk_08;
    u8 pad_0C[0x6C];
    f32 unk_78;
    f32 unk_7C;
} unk_func_001F7660_2;

s32 func_001F72F0(unk_func_001F7660_2 *, f32);
f32 func_001F75D0(unk_func_001F7660_2 *);
extern f32 D_005AD910[];
extern s16 D_005AD91C[];

void func_001F7660(unk_func_001F7660_2 *arg0) {
    s8 temp1;
    f32 sp34;

    if (arg0->unk_08->unk_76 != -2) {
        if (((arg0->unk_00->unk_168 & 1) ? 1 : 0) && !(D_005AD91C[0] & 1)) {
            arg0->unk_08->unk_76 = -2;
            return;
        }
        if (arg0->unk_08->unk_5C * arg0->unk_7C < 0.0f) {
            if ((arg0->unk_7C > 0.0f ? arg0->unk_7C : -arg0->unk_7C) < 3.1415927f - D_005AD910[0]) {
                arg0->unk_08->unk_76 = 0;
            }
        }
        if (arg0->unk_08->unk_76 == 0) {
            arg0->unk_08->unk_5C = arg0->unk_7C;
        }
        sp34 = arg0->unk_78;
        if (arg0->unk_08->unk_76 == -1 && arg0->unk_7C > 0.0f) {
            sp34 = func_001F75D0(arg0);
        }
        if (arg0->unk_08->unk_76 == 1 && arg0->unk_7C < 0.0f) {
            sp34 = func_001F75D0(arg0);
        }
        if (func_001F72F0(arg0, sp34)) {
            temp1 = arg0->unk_08->unk_76;
            if (temp1 == 0) {
                if (arg0->unk_7C > 0.0f) {
                    arg0->unk_08->unk_76 = 1;
                } else {
                    arg0->unk_08->unk_76 = -1;
                }
            }
            return;
        }
        if (arg0->unk_08->unk_76 == 0 &&
            (arg0->unk_7C > 0.0f ? arg0->unk_7C : -arg0->unk_7C) >= 3.1415927f - D_005AD910[0]) {
            sp34 = func_001F75D0(arg0);
            if (func_001F72F0(arg0, sp34)) {
                if (arg0->unk_7C > 0.0f) {
                    arg0->unk_08->unk_76 = -1;
                } else {
                    arg0->unk_08->unk_76 = 1;
                }
                return;
            }
        }
        arg0->unk_08->unk_76 = -2;
    }
}
