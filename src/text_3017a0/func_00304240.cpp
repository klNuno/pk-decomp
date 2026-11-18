/* profile: opt_300 */
#include "common.h"

class unk_func_00304240_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(u32, s32);
};

class unk_func_00304240_0 {
public:
    unk_func_00304240_1 *unk_00;
    virtual void unk_vf08();
    virtual void unk_vf0C(void *, s32, s32);
};

extern "C" {
void func_002F5220(u8 *, unk_func_00304240_0 *);

void func_00304240(u8 *arg0, unk_func_00304240_0 *arg1) {
    u32 sp34;
    u32 sp38;
    u32 sp3C;
    u32 i;

    arg1->unk_vf0C(&sp34, 1, 4);
    arg1->unk_00->unk_vf10(sp34, 2);
    func_002F5220(arg0, arg1);
    arg1->unk_vf0C(arg0 + 8, 4, 1);
    arg1->unk_00->unk_vf10(4, 2);
    arg1->unk_00->unk_vf10(4, 2);
    arg1->unk_vf0C(&sp3C, 4, 1);
    arg1->unk_00->unk_vf10(sp3C * 8, 2);
    arg1->unk_vf0C(&sp38, 4, 1);
    for (i = 0; i < sp38; i++) {
        arg1->unk_00->unk_vf10(4, 2);
        arg1->unk_vf0C(&sp3C, 4, 1);
        arg1->unk_00->unk_vf10(sp3C * 8, 2);
    }
}
}
