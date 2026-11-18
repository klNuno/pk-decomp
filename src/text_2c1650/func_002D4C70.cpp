#include "common.h"

class unk_func_002D4C70_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20();
    virtual void unk_vf24();
    virtual void unk_vf28(s32);
};

typedef struct unk_func_002D4C70_1 {
    s32 unk_00;
    s32 unk_04;
} unk_func_002D4C70_1;

extern "C" {
unk_func_002D4C70_0 *func_002EFFF0(s32);
void func_002D2BB0(void *);

unk_func_002D4C70_1 *func_002D4C70(unk_func_002D4C70_1 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_002EFFF0(arg0->unk_00)->unk_vf28(arg0->unk_04);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
}
