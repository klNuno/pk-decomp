#include "common.h"

class unk_func_00306830_1 {
public:
    virtual void unk_vf08();
    virtual s32 unk_vf0C();
};

typedef struct unk_func_00306830_0 {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_00306830_0;

typedef struct unk_func_00306830_2 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00306830_2;

extern "C" {
void func_00305800();
s32 func_0030D400();
unk_func_00306830_2 *func_0030D3F0(s32);
s32 func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);
void func_003057D0();

void func_00306830(unk_func_00306830_0 *arg0, unk_func_00306830_1 *arg1, s32 arg2, s32 arg3) {
    s32 temp;
    unk_func_00306830_2 *p;

    func_00305800();
    temp = func_0030D400();
    p = func_0030D3F0(temp);
    p->unk_00 = arg0->unk_08;
    p->unk_08 = arg2;
    p->unk_0C = arg3;
    p->unk_04 = arg1->unk_vf0C();
    func_0030D0F0(0x53, temp, 0x10, 0, 0, 0, arg0->unk_08);
    func_003057D0();
}
}
