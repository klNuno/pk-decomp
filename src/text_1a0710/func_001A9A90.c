/* profile: o0_301_p */
#include "common.h"

u16 func_001273A8(f32);
void func_001AAF30(u8, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

extern u8 D_005AB882[];
extern s32 D_005ABDC0[];

void func_001A9A90(u8 arg0, u8 arg1) {
    u8 temp_s0;
    u16 temp_s1;
    u16 temp_s2;
    u16 temp_s3;
    u16 temp_s4;
    u16 temp_s5;
    u8 temp_s6;
    u16 temp_s7;

    temp_s7 = 0;
    temp_s5 = 0;
    temp_s6 = (u8)(arg0 / arg1);
    if (arg0 % arg1 != 0) {
        temp_s6++;
    }
    if (D_005AB882[0] == 1) {
        temp_s3 = func_001273A8(100.0f / (f32)arg1);
        temp_s4 = func_001273A8(100.0f / (f32)temp_s6);
    } else if (temp_s6 > arg1) {
        temp_s4 = func_001273A8(100.0f / (f32)temp_s6);
        temp_s3 = temp_s4;
        temp_s5 = (u16)((100 - temp_s3 * arg1) / 2);
    } else {
        temp_s3 = func_001273A8(100.0f / (f32)arg1);
        temp_s4 = temp_s3;
        temp_s7 = (u16)((100 - temp_s4 * temp_s6) / 2);
    }
    temp_s2 = temp_s7;
    temp_s1 = temp_s5;
    for (temp_s0 = 0; temp_s0 < arg0; temp_s0++) {
        func_001AAF30(temp_s0, 1, 1, temp_s3, temp_s4, 0, 0, 0, 0, 0, 0);
        func_001AAF30(temp_s0, 1, 5, 0, 0, 0, 0, 0, 0, temp_s1, temp_s2);
        func_001AAF30(temp_s0, 0, 1, temp_s3, temp_s4, 0, 0, 0, 0, 0, 0);
        func_001AAF30(temp_s0, 0, 5, 0, 0, 0, 0, 0, 0, temp_s1, temp_s2);

        if ((temp_s0 + 1) % arg1 != 0) {
            temp_s1 = (u16)((s16)temp_s1 + (s16)temp_s3);
        } else {
            temp_s1 = temp_s5;
            temp_s2 = (u16)((s16)temp_s2 + (s16)temp_s4);
        }
    }
    if (D_005ABDC0[0] != 0) {
        func_001AAF30(0, 1, 1, 100, 100, 0, 0, 0, 0, 0, 0);
        func_001AAF30(0, 0, 1, 100, 100, 0, 0, 0, 0, 0, 0);
        func_001AAF30(1, 1, 3, 0, 0, 0, 0, 0, 0, 0, 360);
        func_001AAF30(1, 1, 1, 25, 25, 0, 0, 0, 0, 0, 0);
    }
}
