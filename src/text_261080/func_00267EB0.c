#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
    u8 *unk_08;
    u8 pad_0C[4];
} unk_func_00267EB0_0;

extern u32 D_003602BC;
extern unk_func_00267EB0_0 D_00644CF0[];

u8 *func_00267EB0(s32 arg0) {
    u32 i;

    for (i = 0; i < D_003602BC && arg0 != D_00644CF0[i].unk_00; i++) {
    }
    if (i == D_003602BC) {
        return NULL;
    }
    return D_00644CF0[i].unk_08 + 0x10;
}
