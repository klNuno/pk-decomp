/* profile: opt_noexc */
#include "common.h"

extern "C" {
class unk_func_002EBBA0_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    u8 pad_04[4];
    u8 unk_08[0x10];
    f32 unk_18;
};

void func_002EBF00(void *, s32 *);

void func_002EBBA0(unk_func_002EBBA0_0 *arg0, f32 arg1) {
    arg0->unk_18 = arg1;
    arg0->unk_vf1C();
}

}
