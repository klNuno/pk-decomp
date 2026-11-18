#include "common.h"

class unk_func_002FAB50_1 {
public:
    virtual void unk_vf08(s32);
};

typedef struct {
    void *unk_00;
    u8 pad_04[0x1C];
    s32 unk_20;
    s32 unk_24;
    unk_func_002FAB50_1 *unk_28;
} unk_func_002FAB50_0;

extern "C" {
extern u8 D_0035EA10[];
void c4sdk_malloc(void *, s32);
void func_002F3E70(void *, s32);
void func_002D2BB0(void *);

unk_func_002FAB50_0 *func_002FAB50(unk_func_002FAB50_0 *arg0, s16 arg1) {
    if (arg0 != 0) {
        arg0->unk_00 = D_0035EA10;
        if (arg0->unk_28 != 0) {
            unk_func_002FAB50_1 *p = arg0->unk_28;
            if (p != 0) {
                p->unk_vf08(1);
            }
        }
        arg0->unk_28 = 0;
        {
            s32 *q = &arg0->unk_24;
            if (q != 0) {
                c4sdk_malloc(q, 0);
            }
        }
        {
            s32 *q = &arg0->unk_20;
            if (q != 0) {
                c4sdk_malloc(q, 0);
            }
        }
        func_002F3E70(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
}
