#include "common.h"

class unk_func_002F8080_0 {
public:
    u8 pad_00[4];
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(s32);
};

extern "C" {
extern unk_func_002F8080_0 *D_0036071C;
void func_0030A440(...);

void func_002F8080(void) {
    if (D_0036071C != 0) {
        func_0030A440(D_0036071C);
        if (D_0036071C != 0) {
            D_0036071C->unk_vf10(1);
        }
        D_0036071C = 0;
    }
}
}
