#include "common.h"

class unk_func_002EA670_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(...);
};

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_002EA670_1;

extern "C" {
void c4sdk_malloc(...);
void func_002D2BB0(...);
unk_func_002EA670_0 *func_002EA780(...);

unk_func_002EA670_1 *func_002EA670(unk_func_002EA670_1 *arg0, s16 arg1) {
    if (arg0 != 0) {
        func_002EA780()->unk_vf0C(arg0->unk_08);
        if (arg0 != 0) {
            c4sdk_malloc(arg0, 0);
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
}
