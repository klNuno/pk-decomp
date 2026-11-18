#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[4];
    void *unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
} unk_func_0018E9D0_0;

void *malloc(u32);
extern u8 D_0035E4B0[];
extern u8 D_0035E480[];

unk_func_0018E9D0_0 *func_0018E9D0(s32 arg0) {
    unk_func_0018E9D0_0 *p;

    p = malloc(0x20);
    if (p != NULL) {
        p->unk_10 = D_0035E4B0;
        p->unk_04 = arg0;
        p->unk_00 = 0;
        p->unk_08 = 0;
        p->unk_10 = D_0035E480;
        p->unk_14 = 0;
        p->unk_18 = 0;
        p->unk_1C = 0;
        p->unk_00 = 4;
    }
    return p;
}
