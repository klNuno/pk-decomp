/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_002023F0_0;

typedef struct {
    u8 pad_00[0xC];
    f32 unk_0C;
} unk_func_002023F0_1;

typedef struct {
    u8 pad_00[0x20];
    unk_func_002023F0_0 unk_20;
    unk_func_002023F0_0 unk_2C;
    u8 pad_38[0x18];
    unk_func_002023F0_0 unk_50;
} unk_func_002023F0_2;

void func_0011B518();
s32 func_00201380(unk_func_002023F0_2 *, unk_func_002023F0_1 *, unk_func_002023F0_0 *, s8);
f32 func_00201450(unk_func_002023F0_2 *, unk_func_002023F0_0 *);
s32 func_00201920(unk_func_002023F0_2 *, unk_func_002023F0_1 *, f32, f32, s8);
void func_00201C00(unk_func_002023F0_2 *, s8);
s32 func_00201B60();
extern u16 D_00360160;
extern unk_func_002023F0_1 D_00604320[];

s32 func_002023F0(unk_func_002023F0_2 *arg0, unk_func_002023F0_0 *arg1, s8 arg2) {
    unk_func_002023F0_0 sp30;
    f32 sp3C;
    u32 var_s0;
    unk_func_002023F0_1 *temp_s1;

    arg1->unk_08 = arg1->unk_04 = arg1->unk_00 = 0.0f;
    sp3C = 0.0f;
    if (arg2 & 8) {
        if (arg2 & 4) {
            sp30.unk_00 = arg0->unk_20.unk_00 - arg0->unk_50.unk_00;
            sp30.unk_04 = arg0->unk_20.unk_04 - arg0->unk_50.unk_04;
            sp30.unk_08 = arg0->unk_20.unk_08 - arg0->unk_50.unk_08;
        } else {
            sp30.unk_00 = arg0->unk_2C.unk_00 - arg0->unk_50.unk_00;
            sp30.unk_04 = arg0->unk_2C.unk_04 - arg0->unk_50.unk_04;
            sp30.unk_08 = arg0->unk_2C.unk_08 - arg0->unk_50.unk_08;
        }
        sp3C = func_00201450(arg0, &sp30);
    }
    func_00201C00(arg0, arg2);
    func_0011B518((void *)D_00604320, D_00360160, 0x10, func_00201B60);
    for (var_s0 = 0; var_s0 < D_00360160; var_s0++) {
        temp_s1 = &D_00604320[var_s0];
        if (func_00201920(arg0, temp_s1, D_00604320[var_s0].unk_0C, sp3C, arg2) != 0) {
            if (func_00201380(arg0, temp_s1, arg1, arg2) != 0) {
                if (var_s0 == 0) {
                    return 1;
                }
                return 2;
            }
        }
    }
    return 0;
}
