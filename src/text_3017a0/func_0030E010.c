#include "common.h"

typedef struct unk_func_0030E010_0 {
    void *unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
    s32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    u8 unk_24;
    u8 pad_25[0x3];
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
} unk_func_0030E010_0;

void func_00305520();
extern u8 D_0035F140[];

unk_func_0030E010_0 *func_0030E010(unk_func_0030E010_0 *arg0, s32 arg1, s32 arg2) {
    func_00305520(arg0, arg1);
    arg0->unk_00 = D_0035F140;
    arg0->unk_18 = 1.0f;
    arg0->unk_1C = 0.5f;
    arg0->unk_20 = 1.0f;
    arg0->unk_24 = 0;
    arg0->unk_28 = arg2;
    arg0->unk_2C = 0;
    arg0->unk_30 = 0;
    arg0->unk_34 = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    return arg0;
}
