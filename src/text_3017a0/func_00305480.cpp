/* profile: opt_noexc */
#include "common.h"

class unk_func_00305480_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20(void *);
};

typedef struct unk_func_00305480_1 {
    s32 unk_00;
    unk_func_00305480_0 *unk_04;
} unk_func_00305480_1;

extern "C" {
void func_00305480(unk_func_00305480_1 *arg0) {
    arg0->unk_04->unk_vf20(arg0);
}
}
