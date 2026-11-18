#include "common.h"

class unk_func_002EB600_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(s32, void *);
};

extern "C" {
void *func_002D2BC0(s32);
void *func_002EB990(void *, s32);
extern unk_func_002EB600_0 *D_0036069C;

void *func_002EB600(s32 arg0) {
    void *temp_v0;
    void *var_s0;

    temp_v0 = func_002D2BC0(0xC);
    var_s0 = temp_v0;
    if (temp_v0 != 0) {
        var_s0 = func_002EB990(temp_v0, arg0);
    }
    if (D_0036069C != 0) {
        D_0036069C->unk_vf10(arg0, var_s0);
    }
    return var_s0;
}
}
