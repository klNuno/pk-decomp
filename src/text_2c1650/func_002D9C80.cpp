#include "common.h"

class unk_func_002D9C80_1 {
public:
    virtual void unk_vf08(s32);
};

typedef struct unk_func_002D9C80_0 {
    u8 pad_00[0xC];
    unk_func_002D9C80_1 *unk_0C;
    unk_func_002D9C80_1 *unk_10;
    unk_func_002D9C80_1 *unk_14;
} unk_func_002D9C80_0;

typedef struct unk_func_002D9C80_2 {
    u8 pad_00[0x10];
    unk_func_002D9C80_0 *unk_10;
} unk_func_002D9C80_2;

typedef struct unk_func_002D9C80_3 {
    unk_func_002D9C80_2 *unk_00;
} unk_func_002D9C80_3;

extern "C" {
s32 func_002CE620();
unk_func_002D9C80_2 **func_002D9C70(s32);
unk_func_002D9C80_3 *func_002CE610(unk_func_002D9C80_3 *, unk_func_002D9C80_2 *);
unk_func_002D9C80_2 *func_002CE530(s32);
void func_002CFEF0(unk_func_002D9C80_3 *);
void func_002DA340(s32, unk_func_002D9C80_3);
void func_002D2BB0(void *);

unk_func_002D9C80_0 *func_002D9C80(unk_func_002D9C80_0 *arg0, s16 arg1) {
    s32 m;
    unk_func_002D9C80_3 sp44;
    unk_func_002D9C80_3 sp48;
    unk_func_002D9C80_3 it;

    if (arg0 != 0) {
        m = func_002CE620();
        func_002CE610(&sp48, *func_002D9C70(m));
        it = sp48;
        for (; func_002CE610(&sp44, func_002CE530(m)), it.unk_00 != sp44.unk_00; func_002CFEF0(&it)) {
            if (it.unk_00->unk_10 == arg0) {
                func_002DA340(m, it);
                break;
            }
        }
        if (arg0->unk_10 != 0) {
            arg0->unk_10->unk_vf08(1);
        }
        if (arg0->unk_14 != 0) {
            arg0->unk_14->unk_vf08(1);
        }
        if (arg0->unk_0C != 0) {
            arg0->unk_0C->unk_vf08(1);
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
}
