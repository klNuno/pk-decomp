#include "common.h"

extern s32 D_0035F820;
extern s32 D_0035F858;
extern s32 D_0035F860;
extern s32 D_00364BCC[];
extern s32 D_00364BD0[];

s32 func_0012C500(void) {
    s32 temp;

    if (D_0035F858 == 0x32) {
        return 0;
    }
    D_00364BD0[D_0035F858] = D_00364BD0[0];
    D_0035F858++;
    temp = D_00364BCC[D_0035F858];
    D_0035F860 = temp;
    D_0035F820 = temp;
    return 1;
}
