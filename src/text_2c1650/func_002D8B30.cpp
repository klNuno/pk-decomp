#include "common.h"

extern "C" {

class unk_func_002D8B30_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20(s32);
};

extern unk_func_002D8B30_0 *D_00360578;
extern s32 D_0036057C;
extern s32 D_00360588;

void func_002D8B30(void) {
    D_00360578->unk_vf20(D_0036057C);
    D_00360588 = 0;
}

}
