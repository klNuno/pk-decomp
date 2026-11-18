#include "common.h"

class unk_func_00305550_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20(void *);
};

typedef struct unk_func_00305550_1 {
    void *unk_00;
    unk_func_00305550_0 *unk_04;
} unk_func_00305550_1;

extern "C" {
void func_002D2BB0(...);
extern u8 D_0035EDA0[];

unk_func_00305550_1 *func_00305550(unk_func_00305550_1 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_0035EDA0;
        arg0->unk_04->unk_vf20(arg0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
}
