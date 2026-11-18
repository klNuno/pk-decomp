/* profile: opt_noexc */
#include "common.h"

class unk_func_00302A60_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(void *, void *);
};

typedef struct unk_func_00302A60_1 {
    s32 unk_00;
    unk_func_00302A60_0 *unk_04;
} unk_func_00302A60_1;

extern "C" {
void func_00302A60(unk_func_00302A60_1 *arg0, void *arg1) {
    arg0->unk_04->unk_vf0C(arg0, arg1);
}
}
