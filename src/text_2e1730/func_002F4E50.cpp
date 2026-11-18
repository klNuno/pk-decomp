#include "common.h"

class unk_func_002F4E50_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18(s32 *);
};

extern "C" {
void func_002F52E0(s32 *);
void func_002F5220(s32 *, s32);

void func_002F4E50(unk_func_002F4E50_0 *arg0, s32 arg1) {
    s32 temp[2];

    func_002F52E0(temp);
    func_002F5220(temp, arg1);
    arg0->unk_vf18(temp);
}
}
