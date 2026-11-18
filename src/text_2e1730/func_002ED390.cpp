/* profile: opt_noexc */
#include "common.h"

typedef struct unk_func_002ED390_1 {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_002ED390_1;

extern "C" {
class unk_func_002ED390_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20();
    virtual void unk_vf24();
    virtual void unk_vf28();
    virtual void unk_vf2C();
    virtual void unk_vf30(s32, s32, s32, s32, s32);
};

void func_002ED390(unk_func_002ED390_0 *arg0, s32 arg1, unk_func_002ED390_1 **arg2, s32 arg3, s32 arg4) {
    unk_func_002ED390_1 *temp = *arg2;
    s32 temp2 = temp->unk_0C;
    temp = (unk_func_002ED390_1 *)temp->unk_00;
    arg0->unk_vf30(arg1, temp2, (s32)temp + 1, arg3, arg4);
}
}
