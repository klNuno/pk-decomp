#include "common.h"

class unk_func_002F0F70_0 {
public:
    virtual void unk_vf08(s32);
};

typedef struct unk_func_002F0F70_1 {
    unk_func_002F0F70_0 *unk_00;
} unk_func_002F0F70_1;

extern "C" {
void func_002D2BB0(void *);

unk_func_002F0F70_1 *func_002F0F70(unk_func_002F0F70_1 *arg0, s16 arg1) {
    unk_func_002F0F70_0 *temp_a0;

    if (arg0 != 0) {
        temp_a0 = arg0->unk_00;
        if (temp_a0 != 0) {
            if (temp_a0 != 0) {
                temp_a0->unk_vf08(1);
            }
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
}
