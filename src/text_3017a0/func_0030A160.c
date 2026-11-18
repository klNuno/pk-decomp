#include "common.h"

extern u8 D_003607E8;
extern s32 D_003607EC;
extern s32 D_007C9240[];
extern s32 D_007C9250[];

void func_0030A160(void) {
    s32 i;

    if (D_003607E8 == 0) {
        D_003607EC = 1;
        for (i = 0; i < 4; i++) {
            D_007C9250[i] = 0;
            D_007C9240[i] = 0;
        }
    }
}
