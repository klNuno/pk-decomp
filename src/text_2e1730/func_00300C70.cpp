#include "common.h"

class unk_func_00300C70_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20();
    virtual s32 unk_vf24();
};

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x10];
    s32 unk_18;
} unk_func_00300C70_1;

extern "C" {
void *func_002D2BC0(...);
unk_func_00300C70_1 *func_00300980(...);
s32 func_00303380(...);
unk_func_00300C70_0 *func_00303210(...);

unk_func_00300C70_1 *func_00300C70(s32 arg0, s32 arg1, u8 *arg2);
}

unk_func_00300C70_1 *func_00300C70(s32 arg0, s32 arg1, u8 *arg2) {
    unk_func_00300C70_1 *temp;
    unk_func_00300C70_0 *temp2;
    void *temp3;

    temp3 = func_002D2BC0(0x1C);
    temp = (unk_func_00300C70_1 *)temp3;
    if (temp3 != 0) {
        temp = func_00300980(temp3, arg1);
    }
    temp->unk_04 = arg0;
    if (arg2 == 0) {
        return temp;
    }
    temp2 = func_00303210(func_00303380(), arg2 + 8);
    if (temp2 != 0) {
        temp->unk_18 = temp2->unk_vf24();
    }
    return temp;
}
