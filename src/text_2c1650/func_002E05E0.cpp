#include "common.h"

class unk_func_002E05E0_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20();
    virtual s32 unk_vf24();
};

class unk_func_002E05E0_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(s32, s32, s32);
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20();
    virtual void unk_vf24();
    virtual void unk_vf28(s32);
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_002E05E0_2;

typedef struct {
    u8 pad_00[0x34];
    unk_func_002E05E0_1 *unk_34;
    s32 unk_38;
} unk_func_002E05E0_3;

typedef struct {
    u8 pad_00[0x28];
} unk_func_002E05E0_4;

extern "C" {
void func_002DF2D0(unk_func_002E05E0_4 *, s32);
s32 func_002DF380(unk_func_002E05E0_4 *);
void func_002DF670(unk_func_002E05E0_4 *, unk_func_002E05E0_3 *);
unk_func_002E05E0_0 *func_00303210(s32, unk_func_002E05E0_2 *);
s32 func_00303380();

void func_002E05E0(unk_func_002E05E0_3 *arg0, unk_func_002E05E0_2 *arg1) {
    unk_func_002E05E0_4 sp30;
    unk_func_002E05E0_2 sp58;
    unk_func_002E05E0_0 *obj;
    s32 temp;
    s32 temp2;

    func_002DF670(&sp30, arg0);
    if (func_002DF380(&sp30) != 0 && arg1 != 0) {
        temp2 = arg1->unk_04;
        sp58.unk_00 = arg1->unk_00;
        sp58.unk_04 = temp2;
        obj = func_00303210(func_00303380(), &sp58);
        if (obj != 0) {
            temp = obj->unk_vf24();
            arg0->unk_34->unk_vf0C(temp, arg0->unk_38, 1);
            func_002DF2D0(&sp30, temp);
            arg0->unk_34->unk_vf28(temp);
            return;
        }
        func_002DF2D0(&sp30, 0);
    }
}
}
