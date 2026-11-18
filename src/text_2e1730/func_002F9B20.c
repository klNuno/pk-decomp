#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
    s64 unk_08;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 unk_1C[0x10];
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
} unk_func_002F9B20_0;

void func_002FA0B0();
void func_002F9B90();
extern u8 D_0035E9F0[];

unk_func_002F9B20_0 *func_002F9B20(unk_func_002F9B20_0 *arg0) {
    s32 sp28;
    s32 sp2C;

    arg0->unk_00 = D_0035E9F0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    func_002FA0B0(arg0->unk_1C, &sp2C, &sp28);
    func_002F9B90(&sp28, -1);
    arg0->unk_2C = 0;
    arg0->unk_30 = 0;
    arg0->unk_34 = 0;
    return arg0;
}
