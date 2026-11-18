#include "common.h"

typedef struct unk_func_00132970_0 {
    struct unk_func_00132970_0 *unk_00;
    u8 pad_04[0xC];
    u16 unk_10;
} unk_func_00132970_0;

typedef struct {
    u8 pad_00[4];
    unk_func_00132970_0 *unk_04;
} unk_func_00132970_1;

void func_001329E0();

s32 func_00132970(unk_func_00132970_1 *arg0, u16 arg1) {
    unk_func_00132970_0 *p;

    for (p = arg0->unk_04; p != NULL; p = p->unk_00) {
        if ((arg1 & p->unk_10) == arg1) {
            func_001329E0(p);
        }
    }
    return 1;
}
