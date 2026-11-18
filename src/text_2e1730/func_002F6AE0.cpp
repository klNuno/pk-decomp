#include "common.h"

class unk_func_002F6AE0_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(s32);
};

typedef struct {
    void *unk_00;
    u8 pad_04[0x34];
    unk_func_002F6AE0_0 *unk_38;
} unk_func_002F6AE0_1;

extern "C" {
void func_002D2BB0(void *);
void func_002F9870(void *);
void func_002F99F0(void *, s32);
extern u8 D_0035E850[];

unk_func_002F6AE0_1 *func_002F6AE0(unk_func_002F6AE0_1 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_0035E850;
        func_002F9870(arg0);
        if (arg0->unk_38 != NULL) {
            if (arg0->unk_38 != NULL) {
                arg0->unk_38->unk_vf0C(1);
            }
        }
        func_002F99F0(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
}
