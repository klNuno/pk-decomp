#include "common.h"

extern "C" {
class unk_func_002FCA90_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14(s32);
};

typedef struct unk_func_002FCA90_0 {
    void *unk_00;
    u8 pad_04[0x18];
    s32 unk_1C;
    unk_func_002FCA90_1 *unk_20;
} unk_func_002FCA90_0;

void func_002F23A0(void *, s32);
void func_002D2BB0(void *);
extern u8 D_0035EA60[];

unk_func_002FCA90_0 *func_002FCA90(unk_func_002FCA90_0 *arg0, s32 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_0035EA60;
        if (arg0->unk_1C != 0) {
            arg0->unk_20->unk_vf14(arg0->unk_1C);
            arg0->unk_1C = 0;
        }
        func_002F23A0(arg0, 0);
        if ((s16)arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
}
