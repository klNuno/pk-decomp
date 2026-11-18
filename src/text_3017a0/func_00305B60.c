#include "common.h"

typedef struct {
    void *unk_00;
    s32 unk_04;
} unk_func_00305B60_0;

void func_00305800();
void func_003057D0();
s32 func_0030D400();
void **func_0030D3F0(s32);
s32 func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);
extern u8 D_0035EDB0[];
extern u8 D_0035EE10[];
extern u8 D_0035EE28[];

unk_func_00305B60_0 *func_00305B60(unk_func_00305B60_0 *arg0) {
    s32 temp;
    void **q;

    arg0->unk_00 = D_0035EE28;
    arg0->unk_00 = D_0035EDB0;
    arg0->unk_00 = D_0035EE10;
    func_00305800();
    temp = func_0030D400();
    q = func_0030D3F0(temp);
    *q = arg0;
    arg0->unk_04 = func_0030D0F0(0x14, temp, 4, 0, 0, 0, 0);
    func_003057D0();
    return arg0;
}
