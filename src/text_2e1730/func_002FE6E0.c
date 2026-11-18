#include "common.h"

typedef struct {
    u8 unk_00;
} unk_func_002FE6E0_0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    f32 unk_20;
    s32 unk_24;
    f32 unk_28;
    s32 unk_2C;
    void *unk_30;
    u8 unk_34[4];
} unk_func_002FE6E0_1;

void func_002FE760(s32 *, s32);
void func_002FE990(void *, unk_func_002FE6E0_0 *, s32 *);
extern u8 D_0035EA90[];

unk_func_002FE6E0_1 *func_002FE6E0(unk_func_002FE6E0_1 *arg0) {
    s32 sp28;
    unk_func_002FE6E0_0 sp2C;

    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_20 = 1.0f;
    arg0->unk_24 = 0;
    arg0->unk_28 = 1.0f;
    arg0->unk_2C = 0;
    arg0->unk_30 = D_0035EA90;
    func_002FE990(arg0->unk_34, &sp2C, &sp28);
    func_002FE760(&sp28, -1);
    return arg0;
}
