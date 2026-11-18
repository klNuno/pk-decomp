#include "common.h"

extern s32 D_003607F4;
extern s8 D_003607F8;
extern s32 D_007C9240[];
extern s32 D_007C9250[];

s32 func_0030A050(void) {
    s32 i = 3;

    if (!D_003607F8) {
        D_003607F4 = 0;
        D_003607F8 = 1;
    }
    while (i >= 0 && D_007C9250[(i + D_003607F4) % 4] != 0) {
        i--;
    }
    if (i == -1) {
        i = 3;
        while (i >= 0 && D_007C9240[(i + D_003607F4) % 4] != 0) {
            i--;
        }
    }
    D_003607F4++;
    return (i + D_003607F4) % 4;
}
