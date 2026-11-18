/* profile: opt_noexc */
#include "common.h"

class unk_func_00302A40_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(void *, void *);
};

typedef struct unk_func_00302A40_1 {
    s32 unk_00;
    unk_func_00302A40_0 *unk_04;
} unk_func_00302A40_1;

extern "C" {
void func_00302A40(unk_func_00302A40_1 *arg0, void *arg1) {
    arg0->unk_04->unk_vf10(arg0, arg1);
}
}
