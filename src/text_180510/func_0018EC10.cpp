/* profile: opt_noexc */
#include "common.h"

class unk_func_0018EC10_0 {
public:
    u8 pad_00[0x30];
    virtual void unk_vf08();
};

extern "C" {
extern unk_func_0018EC10_0 *D_0035FE20;

void func_0018EC10(unk_func_0018EC10_0 *arg0) {
    D_0035FE20 = arg0;
    arg0->unk_vf08();
}
}
