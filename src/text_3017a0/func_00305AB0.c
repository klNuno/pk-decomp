#include "common.h"

typedef struct unk_func_00305AB0_0 {
    void *unk_00;
    s32 unk_04;
} unk_func_00305AB0_0;

void func_00304B00(unk_func_00305AB0_0 *);
void func_003057D0();
void func_00305800();
void func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);
s32 *func_0030D3F0(s32);
s32 func_0030D400();
extern u8 D_0035EE10[];

unk_func_00305AB0_0 *func_00305AB0(unk_func_00305AB0_0 *arg0, s16 arg1) {
    s32 temp;
    s32 *p;
    if (arg0 != 0) {
        arg0->unk_00 = D_0035EE10;
        func_00305800();
        temp = func_0030D400();
        p = func_0030D3F0(temp);
        *p = arg0->unk_04;
        func_0030D0F0(0x15, temp, 4, 0, 0, 0, arg0->unk_04);
        func_003057D0();
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
