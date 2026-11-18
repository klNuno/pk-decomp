#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
} unk_func_0012E330_0;

extern s16 D_0035F840;
extern s16 D_0035F844;
extern u8 D_0035F8A0;
extern unk_func_0012E330_0 *D_003637D0[];

void func_0012E330(void) {
    s16 i;

    for (i = 0; i < D_0035F840; i++) {
        D_003637D0[i]->unk_30 &= ~0x21;
    }
    D_0035F840 = 0;
    D_0035F8A0 = 0;
    D_0035F844 = 0;
}
