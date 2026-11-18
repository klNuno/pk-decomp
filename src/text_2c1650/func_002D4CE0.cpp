#include "common.h"

class unk_func_002D4CE0_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20();
    virtual void unk_vf24(s32);
};

typedef struct unk_func_002D4CE0_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_002D4CE0_1;

extern "C" {
unk_func_002D4CE0_0 *func_002EFFF0(s32);

unk_func_002D4CE0_1 *func_002D4CE0(unk_func_002D4CE0_1 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_08 = arg4;
    arg0->unk_0C = arg3;
    func_002EFFF0(arg0->unk_00)->unk_vf24(arg0->unk_04);
    return arg0;
}
}
