#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
} unk_func_0012E1E0_0;

extern s16 D_0035F840;
extern unk_func_0012E1E0_0 *D_003637D0[];

void func_0012E1E0(unk_func_0012E1E0_0 *arg0) {
    s16 i;

    if ((arg0->unk_30 & 0x20) != 0x20) {
        return;
    }
    arg0->unk_30 &= ~0x21;
    if (D_0035F840 == 0) {
        return;
    }
    for (i = 0; i < 32; i++) {
        if (D_003637D0[i] == arg0) {
            D_0035F840--;
            if (D_0035F840 != 0) {
                D_003637D0[i] = D_003637D0[D_0035F840];
            }
            D_003637D0[D_0035F840] = NULL;
            break;
        }
    }
}
