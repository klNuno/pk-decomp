#include "common.h"

typedef struct unk_func_003086D0_0 {
    u8 pad_00[0x8];
    s64 unk_08;
    u32 unk_10;
    u8 pad_14;
    u8 unk_15;
    u8 pad_16[2];
    struct unk_func_003086D0_0 *unk_18;
} unk_func_003086D0_0;

void func_0031A350(s32);
extern s64 D_003607D0;
extern s32 D_003607DC;
extern unk_func_003086D0_0 *D_003607E0;

s32 func_003086D0(void) {
    s32 flag;
    unk_func_003086D0_0 *p;

    flag = 0;
    *(volatile s32 *)0x10000010 |= 0x100;
    D_003607D0++;
    p = D_003607E0;
    while (p != NULL) {
        if (p->unk_08 == D_003607D0) {
            p->unk_08 += p->unk_10;
            p->unk_15 = 1;
            flag = 1;
        }
        p = p->unk_18;
    }
    if (flag == 1) {
        func_0031A350(D_003607DC);
    }
    return 0;
}
