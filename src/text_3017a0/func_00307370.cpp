#include "common.h"

class unk_func_00307370_0 {
public:
    virtual void unk_vf08();
    virtual s32 unk_vf0C();
};

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_00307370_1;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00307370_2;

extern "C" {
void func_00305800();
s32 func_0030D400();
unk_func_00307370_2 *func_0030D3F0(s32);
void func_0030D0F0(...);
void func_003057D0();

void func_00307370(unk_func_00307370_1 *arg0, unk_func_00307370_0 *arg1, s32 arg2, s32 arg3) {
    s32 temp;
    unk_func_00307370_2 *p;

    func_00305800();
    temp = func_0030D400();
    p = func_0030D3F0(temp);
    p->unk_00 = arg0->unk_08;
    p->unk_08 = arg2;
    p->unk_0C = arg3;
    p->unk_04 = arg1->unk_vf0C();
    func_0030D0F0(0x43, temp, 0x10, 0, 0, 0, arg0->unk_08);
    func_003057D0();
}
}
