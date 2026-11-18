#include "common.h"

typedef struct unk_func_0030F460_0 {
    void *unk_00;
    void *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[4];
    s32 unk_20;
} unk_func_0030F460_0;

extern u8 D_0035E9E0[];
extern u8 D_0035EE28[];
extern u8 D_0035F1A0[];
extern u8 D_0035F1AC[];

unk_func_0030F460_0 *func_0030F460(unk_func_0030F460_0 *arg0) {
    arg0->unk_00 = D_0035E9E0;
    arg0->unk_04 = D_0035EE28;
    arg0->unk_00 = D_0035F1A0;
    arg0->unk_04 = D_0035F1AC;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_20 = -1;
    return arg0;
}
