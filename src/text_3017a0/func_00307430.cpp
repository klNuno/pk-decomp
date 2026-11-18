#include "common.h"

typedef struct unk_func_00307430_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
} unk_func_00307430_0;

extern "C" {
void func_003057D0();
void func_00305800();
void func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);
unk_func_00307430_0 *func_0030D3F0(s32);
s32 func_0030D400();

bool func_00307430(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp7C;
    s32 temp;
    unk_func_00307430_0 *p;
    bool ret;

    func_00305800();
    temp = func_0030D400();
    p = func_0030D3F0(temp);
    p->unk_00 = arg0;
    p->unk_04 = arg1;
    p->unk_08 = arg2;
    p->unk_0C = arg3;
    p->unk_10 = arg4;
    func_0030D0F0(0x40, temp, sizeof(unk_func_00307430_0), (s32)&sp7C, 4, 1, 0);
    ret = sp7C ? true : false;
    func_003057D0();
    return ret;
}
}
