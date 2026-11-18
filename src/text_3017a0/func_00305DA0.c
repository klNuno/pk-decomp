#include "common.h"

typedef struct unk_func_00305DA0_0 {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_00305DA0_0;

typedef struct unk_func_00305DA0_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} unk_func_00305DA0_1;

typedef struct unk_func_00305DA0_2 {
    s32 unk_00;
    s32 unk_04;
    s32 *unk_08;
} unk_func_00305DA0_2;

void func_00305800();
s32 func_0031A320(unk_func_00305DA0_1 *);
s32 func_0030D400();
unk_func_00305DA0_2 *func_0030D3F0(s32);
s32 func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);
void func_003057D0();
void func_0031A360(s32);
void func_0031A330(s32);

s32 func_00305DA0(unk_func_00305DA0_0 *arg0) {
    unk_func_00305DA0_1 sp40;
    s32 sp5C;
    s32 sema;
    s32 temp;
    unk_func_00305DA0_2 *p;

    func_00305800();
    sp40.unk_04 = 1;
    sp40.unk_08 = 0;
    sema = func_0031A320(&sp40);
    temp = func_0030D400();
    p = func_0030D3F0(temp);
    p->unk_00 = arg0->unk_08;
    p->unk_08 = &sp5C;
    p->unk_04 = sema;
    func_0030D0F0(0x24, temp, 0xC, 0, 0, 1, 0);
    func_003057D0();
    func_0031A360(sema);
    func_0031A330(sema);
    return !(sp5C == 0);
}
