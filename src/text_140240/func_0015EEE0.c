/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0015EEE0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_0015EEE0_0;

extern unk_func_0015EEE0_0 D_003313F0[];
extern unk_func_0015EEE0_0 D_003313F4[];
extern s32 D_0035F400;
extern s32 D_0035F9D0[2];

s32 func_0010AF60(s32, s32, u8 *);
s32 func_0010AFE0(s32, s32);
void func_0010B0F8(s32, s32);
void func_0010B4F8(s32, s32, s32, s32);
void func_0010B668(s32, s32, s32 *);
s32 func_001273A8(f32);
u32 func_0012ABC0(void);
void func_0012ABD0(s32);
void func_0015FC10(s32, s32, s32);

static inline s16 func_0015EEE0_unk_00(s32 arg0, s32 arg1) {
    u8 temp[0x20];
    s32 result;

    if (func_0010AF60(arg0, arg1, temp) != 0x20) {
        return 0;
    }
    if (temp[1] == 0x79) {
        result = 1;
    } else if (temp[1] == 0x73) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

s32 func_0015EEE0(s16 arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    s32 *temp_s7;
    s32 *temp_s6;
    s32 *temp_s5;

    temp_s0 = *(s32 *)((s32)D_003313F0 + arg0 * 12);
    temp_s1 = *(s32 *)((s32)D_003313F4 + arg0 * 12);
    temp_v0 = func_0010AFE0(temp_s0, temp_s1);
    if (temp_v0 != 2 && temp_v0 != 6) {
        D_0035F9D0[arg0] = 1;
    } else {
        temp_s5 = &D_0035F9D0[arg0];
        if (*temp_s5 != 0) {
            temp_s6 = (s32 *)((u8 *)D_003313F0 + ((u32)(arg0 * 3) << 2));
            temp_s7 = (s32 *)((u8 *)D_003313F4 + ((u32)(arg0 * 3) << 2));
            temp_s3 = *temp_s6;
            temp_s2 = *temp_s7;
            func_0010B4F8(temp_s3, temp_s2, 1, 3);
            func_0015FC10(temp_s3, temp_s2, 10);
            func_0010B668(temp_s3, temp_s2, &D_0035F400);
            func_0015FC10(temp_s3, temp_s2, 10);
            func_0010B0F8(temp_s3, temp_s2);
            goto test;
        loop:
            func_0012ABD0(func_001273A8((50.0f * (f32)func_0012ABC0()) / 1000.0f));
        test:
            if (func_0010AFE0(temp_s0, temp_s1) == 5) {
                goto loop;
            }
            if (func_0015EEE0_unk_00(*temp_s6, *temp_s7)) {
                *temp_s5 = 0;
            }
        }
    }
    return !D_0035F9D0[arg0];
}
