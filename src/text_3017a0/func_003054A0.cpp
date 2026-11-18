#include "common.h"

struct unk_func_003054A0_0;

class unk_func_003054A0_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20(unk_func_003054A0_0 *);
};

struct unk_func_003054A0_0 {
    void *unk_00;
    unk_func_003054A0_1 *unk_04;
};

extern "C" {
extern u8 D_0035ED90[];
extern u8 D_0035EDA0[];
void func_002D2BB0(...);

unk_func_003054A0_0 *func_003054A0(unk_func_003054A0_0 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_0035ED90;
        if (arg0 != NULL) {
            arg0->unk_00 = D_0035EDA0;
            arg0->unk_04->unk_vf20(arg0);
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
}
