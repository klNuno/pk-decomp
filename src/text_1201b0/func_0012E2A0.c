#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    s32 unk_30;
} unk_func_0012E2A0_0;

extern s16 D_0035F840;
extern unk_func_0012E2A0_0 *D_003637D0[];

void func_0012E2A0(unk_func_0012E2A0_0 *arg0) {
    if ((arg0->unk_30 & 0x20) != 0x20) {
        arg0->unk_30 |= 0x21;
        if (D_0035F840 < 0x20) {
            D_003637D0[D_0035F840] = arg0;
            D_0035F840++;
        }
    }
}
