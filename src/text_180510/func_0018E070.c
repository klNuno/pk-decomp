#include "common.h"

extern u32 D_0035FE2C;
extern u32 D_0035FE30;
extern u32 D_0035FE34;
extern u32 D_0035FE38;
extern s32 D_00508860[];
extern s32 D_00509860[];
extern s32 D_00509890[];
extern s32 D_005098E0[];

void func_0018E070(s32 arg0) {
    u32 i;

    for (i = 0; i < D_0035FE2C; i++) {
        s32 temp = D_00508860[i];
        if (temp == arg0) {
            D_00508860[i] = 0;
        }
    }
    for (i = 0; i < D_0035FE30; i++) {
        s32 temp = D_00509860[i];
        if (temp == arg0) {
            D_00509860[i] = 0;
        }
    }
    for (i = 0; i < D_0035FE34; i++) {
        s32 temp = D_00509890[i];
        if (temp == arg0) {
            D_00509890[i] = 0;
        }
    }
    for (i = 0; i < D_0035FE38; i++) {
        s32 temp = D_005098E0[i];
        if (temp == arg0) {
            D_005098E0[i] = 0;
        }
    }
}
