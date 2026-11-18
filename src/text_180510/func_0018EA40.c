#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[4];
    void *unk_10;
    s32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    u8 pad_20[8];
} unk_func_0018EA40_0;

void *malloc(u32);
extern u8 D_0035E4B0[];
extern u8 D_0035E490[];

unk_func_0018EA40_0 *func_0018EA40(s32 arg0, s32 arg1, f32 arg2, f32 arg3) {
    unk_func_0018EA40_0 *p;

    p = malloc(0x28);
    if (p != NULL) {
        p->unk_10 = D_0035E4B0;
        p->unk_04 = arg0;
        p->unk_00 = 0;
        p->unk_08 = 0;
        p->unk_10 = D_0035E490;
        p->unk_00 = 2;
        p->unk_18 = arg2;
        p->unk_1C = arg3;
        p->unk_14 = arg1;
    }
    return p;
}
