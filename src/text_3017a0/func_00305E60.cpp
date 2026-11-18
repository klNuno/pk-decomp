#include "common.h"

class unk_func_00305E60_0 {
public:
    virtual void unk_vf08();
    virtual s32 unk_vf0C();
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00305E60_1;

extern "C" {
void func_003057D0();
void func_00305800();
void func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);
unk_func_00305E60_1 *func_0030D3F0(s32);
s32 func_0030D400();

void func_00305E60(unk_func_00305E60_1 *arg0, unk_func_00305E60_0 *arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    unk_func_00305E60_1 *temp_v0;

    func_00305800();
    temp_s0 = func_0030D400();
    temp_v0 = func_0030D3F0(temp_s0);
    temp_v0->unk_00 = arg0->unk_08;
    temp_v0->unk_04 = arg1->unk_vf0C();
    temp_v0->unk_08 = arg2;
    temp_v0->unk_0C = arg3;
    func_0030D0F0(0x23, temp_s0, 0x10, 0, 0, 1, 0);
    func_003057D0();
}
}
