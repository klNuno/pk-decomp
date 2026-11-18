#include "common.h"

extern s32 D_00331520[][32];
extern s32 D_0035F440[1];
extern s32 D_0035FA14;
extern s32 D_0035FA60;
extern s32 D_0035FA64;

void func_00163E10(void) {
    s32 i;

    if (D_0035FA60 == 0) {
        return;
    }
    for (i = 0; i < 1; i++) {
        if (D_0035FA60 != D_00331520[i][D_0035F440[i]]) {
            D_0035F440[i] = 0;
        } else if (D_0035FA64 == 0) {
            D_0035F440[i]++;
            if (D_00331520[i][D_0035F440[i]] == -1) {
                D_0035F440[i] = 0;
                switch (i) {
                case 0:
                    D_0035FA14 = !D_0035FA14;
                    break;
                }
            }
        }
    }
}
