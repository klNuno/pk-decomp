#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00139A10_0;

typedef struct {
    u8 pad_00[0x8];
    u32 unk_08;
    u32 unk_0C;
    u8 pad_10[0x130];
    unk_func_00139A10_0 unk_140;
    unk_func_00139A10_0 unk_14C;
    unk_func_00139A10_0 unk_158;
} unk_func_00139A10_1;

void func_00139A10(unk_func_00139A10_1 *arg0, unk_func_00139A10_0 *arg1, unk_func_00139A10_0 *arg2, unk_func_00139A10_0 *arg3) {
    if ((arg0->unk_0C & 0x80 ? 1 : 0) == 0) {
        arg0->unk_140.unk_00 = arg1->unk_00;
        arg0->unk_140.unk_04 = arg1->unk_04;
        arg0->unk_140.unk_08 = arg1->unk_08;
        arg0->unk_14C.unk_00 = arg2->unk_00;
        arg0->unk_14C.unk_04 = arg2->unk_04;
        arg0->unk_14C.unk_08 = arg2->unk_08;
        arg0->unk_158.unk_00 = arg3->unk_00;
        arg0->unk_158.unk_04 = arg3->unk_04;
        arg0->unk_158.unk_08 = arg3->unk_08;
        arg0->unk_08 = arg0->unk_08 = arg0->unk_08 | 0x20000000;
    }
}
