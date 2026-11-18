#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[0x3];
    s32 unk_0C;
} unk_func_00307860_0;

extern s32 D_0035EE28[];
extern s32 D_0035E9D0[];
extern s32 D_0035EF80[];

unk_func_00307860_0 *func_00307860(unk_func_00307860_0 *arg0, s32 arg1) {
    arg0->unk_00 = D_0035EE28;
    arg0->unk_00 = D_0035E9D0;
    arg0->unk_00 = D_0035EF80;
    arg0->unk_04 = arg1;
    arg0->unk_08 = 1;
    arg0->unk_0C = 0;
    return arg0;
}
