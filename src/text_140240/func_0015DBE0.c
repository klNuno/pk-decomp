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
extern u8 D_0035F99C;
extern u8 D_0035F9A0;
extern u8 D_0035F9A4;
extern s32 D_005AB800[];

void func_0015DBE0(s8 arg0, u32 arg1, s8 arg2) {
    if (D_0035F974 == 0 || arg0 >= D_0035F974 || arg0 < 0) {
        return;
    }
    if (D_0035F3E8 && D_0035F980) {
        return;
    }
    if (arg2 == 0) {
        D_0035F9A4 = (D_0035F99C + arg0) % D_0035F974;
    } else {
        D_0035F9A4 = arg0;
    }
    if (arg1 == 0) {
        D_0035F98C = 0.0f;
        D_0035F990 = 1.0f;
        D_0035F99C = D_0035F9A0 = D_0035F9A4;
    } else {
        D_0035F984 = arg1;
        D_0035F98C = 0.0f;
        D_0035F990 = 0.0f;
        D_0035F9A0 = (D_0035F99C + 1) % D_0035F974;
        D_0035F988 = D_005AB800[0] - 1;
        if (D_0035F99C < D_0035F9A4) {
            D_0035F998 = (f32)(D_0035F9A4 - D_0035F99C) / (f32)arg1;
        } else {
            D_0035F998 = (f32)(D_0035F9A4 + (D_0035F974 - D_0035F99C)) / (f32)arg1;
        }
        if (D_0035F998 == 0.0f) {
            D_0035F998 = 1e-9f;
        }
    }
    D_0035F980 = 1;
    D_0035F978 = 1;
    D_0035F97C++;
}
