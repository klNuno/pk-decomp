/* profile: o0_p */
#include "common.h"

extern s32 D_0033FE90[];
extern s32 D_007B0060[];

void func_0027FAA0(void) {
    s32 i;

    for (i = 0; i < 0x22; i++) {
        if (D_007B0060[i] == 0) {
            D_007B0060[i] = D_0033FE90[i];
        }
    }
}
