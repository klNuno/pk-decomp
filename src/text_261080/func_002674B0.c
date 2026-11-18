#include "common.h"

typedef struct {
    u32 unk_00;
    u8 pad_04[4];
    f32 unk_08;
    u8 pad_0C[0x84];
} unk_func_002674B0_0;

extern unk_func_002674B0_0 D_00633320[];

u32 func_002674B0(void) {
    u32 best;
    u32 i;
    unk_func_002674B0_0 *p;
    f32 min;
    u32 t;

    i = 0;
    p = D_00633320;
    while (p->unk_00 != 0x60000000 && i < 500) {
        i++;
        p++;
    }
    if (i >= 499) {
        return -1;
    }
    best = i;
    min = p->unk_08;
    for (i++; i < 500; i++, p++) {
        t = p->unk_00;
        if (t & 0x01000000) {
            return i;
        }
        if (p->unk_08 < min && t != 0x60000000 && (t & 0xFF) != 0x14 && (t & 0xFF) != 0x16) {
            min = p->unk_08;
            best = i;
        }
    }
    return best;
}
