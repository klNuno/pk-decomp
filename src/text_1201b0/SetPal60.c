#include "common.h"

extern s32 D_0035F814;
extern s32 D_0035F818;

void SetPal60(void) {
    if (D_0035F818 == 2) {
        D_0035F818 = 3;
        D_0035F814 = 0x42700000;
    }
}
