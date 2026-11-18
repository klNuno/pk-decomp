#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
    void *unk_04;
} unk_func_00318C60_0;

extern u8 D_0035F280[];

unk_func_00318C60_0 *func_00318C60(unk_func_00318C60_0 *arg0) {
    arg0->unk_04 = D_0035F280;
    arg0->unk_00 = 1;
    return arg0;
}
