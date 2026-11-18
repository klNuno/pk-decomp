#include "common.h"

typedef struct unk_func_0015BC30_0 {
    u8 pad_00[8];
    u8 unk_08[0xFC];
} unk_func_0015BC30_0;

void func_0015E2D0(void *);
void func_0015EB60();
extern unk_func_0015BC30_0 D_003678B0[];

void func_0015BC30(void) {
    s32 i;

    for (i = 0; i < 0x12; i++) {
        func_0015E2D0(D_003678B0[i].unk_08);
    }
    func_0015EB60();
}
