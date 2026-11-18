#include "common.h"

extern s32 D_0035F820;
extern s32 D_0035F858;
extern s32 D_0035F860;
extern s32 D_00364BCC[];

s32 func_0012C4B0(void) {
    s32 temp;

    if (D_0035F858 == 0) {
        return 0;
    }
    D_0035F858--;
    temp = D_00364BCC[D_0035F858];
    D_0035F860 = temp;
    D_0035F820 = temp;
    return 1;
}
