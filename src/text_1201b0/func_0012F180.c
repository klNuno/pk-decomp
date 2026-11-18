#include "common.h"

extern s16 D_0035F8D4;
extern s32 D_00364E50[];

s32 func_0012F180(s32 arg0) {
    s32 i;
    s32 t;

    for (i = 0; i < D_0035F8D4; i++) {
        t = D_00364E50[i];
        if (t == arg0) {
            return 1;
        }
    }
    return 0;
}
