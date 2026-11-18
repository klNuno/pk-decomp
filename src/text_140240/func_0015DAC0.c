#include "common.h"

extern s8 D_0035F3E8;
extern u8 D_0035F974;
extern s8 D_0035F978;
extern s32 D_0035F97C;
extern s8 D_0035F980;
extern u32 D_0035F984;
extern s32 D_0035F988;
extern f32 D_0035F98C;
extern f32 D_0035F990;
extern f32 D_0035F998;
extern s8 D_0035F9A8;
extern f32 D_0035F9AC;
extern s32 D_005AB800[];

void func_0015DAC0(s8 arg0, u32 arg1, f32 arg2) {
    if (D_0035F974 == 0 || arg0 >= D_0035F974 || arg0 < 0) {
        return;
    }
    if (D_0035F3E8 != 0 && D_0035F980 != 0) {
        return;
    }
    if (arg2 == 0.0f) {
        return;
    }
    D_0035F9A8 = arg0;
    D_0035F9AC = arg2;
    if (arg1 == 0) {
        D_0035F990 = arg2;
        D_0035F998 = 0.0f;
    } else {
        D_0035F984 = arg1;
        D_0035F98C = 0.0f;
        D_0035F990 = 0.0f;
        D_0035F988 = D_005AB800[0] - 1;
        D_0035F998 = arg2 / arg1;
        if (D_0035F998 == 0.0f) {
            D_0035F998 = 1e-9f;
        }
    }
    D_0035F980 = 1;
    D_0035F978 = 2;
    D_0035F97C++;
}
