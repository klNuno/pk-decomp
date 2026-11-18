#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[0xA7];
} unk_func_00134C30_0;

void *memset(void *, s32, u32);
extern s32 D_0035F3A8;
extern unk_func_00134C30_0 D_00365030[];

void func_00134C30(void) {
    unk_func_00134C30_0 *p;
    s16 i;

    for (i = 0; i <= D_0035F3A8; i++) {
        p = &D_00365030[i];
        if (p->unk_00 != 0 && (p->unk_00 & 0xFF)) {
            memset(p, 0, 0xA8);
            p->unk_00 = 0;
        }
    }
}
