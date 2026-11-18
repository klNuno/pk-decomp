/* profile: opt_300 */
#include "common.h"

struct unk_func_002FAE30_0 {
    u8 pad_00[8];
    u32 unk_08;
};

struct unk_func_002FAE30_1 {
    u32 unk_00;
    u8 pad_04[8];
    void *unk_0C;
};

struct unk_func_002FAE30_2 {
    s32 unk_00;
    s32 unk_04;
};

struct unk_func_002FAE30_3 {
    u32 unk_00;
    unk_func_002FAE30_2 unk_04;
};

struct unk_func_002FAE30_4 {
    u8 pad_00[0xC];
    unk_func_002FAE30_3 unk_0C;
};

class unk_func_002FAE30_5 {
public:
    virtual void unk_vf08();
    virtual unk_func_002FAE30_0 *unk_vf0C();

    u8 pad_04[0x10];
    unk_func_002FAE30_1 *unk_14;
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    u8 unk_24;
    u8 pad_25[3];
    unk_func_002FAE30_2 unk_28;
    u8 unk_30;
    u8 pad_31[3];
    u8 unk_34[0x10];
    u8 unk_44;
    u8 unk_45;
};

class unk_func_002FAE30_6 {
public:
    s32 unk_00;
    virtual void unk_vf08(void *, u32, s32);
};

inline u32 func_002FAE30_0(u32 arg0) {
    return (arg0 << 24) | (((arg0 << 8) & 0xFF0000) | ((arg0 >> 24) | ((arg0 >> 8) & 0xFF00)));
}

inline f32 func_002FAE30_1(f32 *arg0) {
    void *temp = arg0;
    s64 temp2 = *(s64 *)temp;
    s64 temp3 = (temp2 << 24) | (((temp2 << 8) & 0xFF0000) | ((temp2 >> 24) | ((temp2 >> 8) & 0xFF00)));
    void *temp4 = &temp3;
    return *(f32 *)temp4;
}

extern "C" {
void func_002F2020(unk_func_002FAE30_5 *, unk_func_002FAE30_6 *);
s32 func_002EA770(s32);
s32 func_002EA780();
void func_002F51B0(unk_func_002FAE30_2 *, unk_func_002FAE30_6 *);
void func_002F52C0(unk_func_002FAE30_2 *, unk_func_002FAE30_2 *);
unk_func_002FAE30_4 *func_002FB5A0(void *);
unk_func_002FAE30_4 **func_002FB5B0(void *);
u32 *func_002FB5C0(void *);
void func_002CFEF0(unk_func_002FAE30_4 **);

void func_002FAE30(unk_func_002FAE30_5 *arg0, unk_func_002FAE30_6 *arg1) {
    unk_func_002FAE30_2 sp58;
    unk_func_002FAE30_4 *sp78;
    f32 sp7C;
    f32 sp80;
    f32 sp84;
    u32 sp88;
    u32 sp8C;
    u32 sp90;
    f32 sp94;
    f32 sp98;
    f32 sp9C;
    u32 spA0;
    u32 spA4;
    u32 spA8;
    u32 spAC;
    u32 spB0;
    u32 spB4;
    u32 spB8;
    u32 spBC;

    func_002F2020(arg0, arg1);
    if (arg0->unk_vf0C()->unk_08 > 1) {
        unk_func_002FAE30_1 **temp = &arg0->unk_14;
        u32 temp2 = (*temp)->unk_00;
        sp90 = temp2;
        if (func_002EA770(func_002EA780()) == 1) {
            sp90 = func_002FAE30_0(sp90);
        }
        arg1->unk_vf08(&sp90, 4, 1);
        if (temp2 != 0) {
            unk_func_002FAE30_1 *temp3 = *temp;
            arg1->unk_vf08(temp3->unk_0C, temp3->unk_00, 1);
        }
    }

    sp7C = arg0->unk_18;
    if (func_002EA770(func_002EA780()) == 1) {
        sp94 = sp7C;
        sp94 = func_002FAE30_1(&sp94);
        sp7C = sp94;
    }
    arg1->unk_vf08(&sp7C, 4, 1);

    sp80 = arg0->unk_20;
    if (func_002EA770(func_002EA780()) == 1) {
        sp98 = sp80;
        sp98 = func_002FAE30_1(&sp98);
        sp80 = sp98;
    }
    arg1->unk_vf08(&sp80, 4, 1);

    sp84 = arg0->unk_1C;
    if (func_002EA770(func_002EA780()) == 1) {
        sp9C = sp84;
        sp9C = func_002FAE30_1(&sp9C);
        sp84 = sp9C;
    }
    arg1->unk_vf08(&sp84, 4, 1);

    spA0 = arg0->unk_24;
    if (func_002EA770(func_002EA780()) == 1) {
        spA0 = func_002FAE30_0(spA0);
    }
    arg1->unk_vf08(&spA0, 4, 1);

    if (arg0->unk_vf0C()->unk_08 > 1) {
        spA4 = arg0->unk_45;
        if (func_002EA770(func_002EA780()) == 1) {
            spA4 = func_002FAE30_0(spA4);
        }
        arg1->unk_vf08(&spA4, 4, 1);

        spA8 = arg0->unk_44;
        if (func_002EA770(func_002EA780()) == 1) {
            spA8 = func_002FAE30_0(spA8);
        }
        arg1->unk_vf08(&spA8, 4, 1);
    } else {
        spAC = 1;
        if (func_002EA770(func_002EA780()) == 1) {
            spAC = func_002FAE30_0(spAC);
        }
        arg1->unk_vf08(&spAC, 4, 1);

        spB0 = 1;
        if (func_002EA770(func_002EA780()) == 1) {
            spB0 = func_002FAE30_0(spB0);
        }
        arg1->unk_vf08(&spB0, 4, 1);

        spB4 = 1;
        if (func_002EA770(func_002EA780()) == 1) {
            spB4 = func_002FAE30_0(spB4);
        }
        arg1->unk_vf08(&spB4, 4, 1);

        spB8 = 1;
        if (func_002EA770(func_002EA780()) == 1) {
            spB8 = func_002FAE30_0(spB8);
        }
        arg1->unk_vf08(&spB8, 4, 1);
    }

    func_002F51B0(&arg0->unk_28, arg1);
    spBC = arg0->unk_30;
    if (func_002EA770(func_002EA780()) == 1) {
        spBC = func_002FAE30_0(spBC);
    }
    arg1->unk_vf08(&spBC, 4, 1);

    if (arg0->unk_30 != 0) {
        sp88 = *func_002FB5C0(arg0->unk_34);
        if (func_002EA770(func_002EA780()) == 1) {
            sp88 = func_002FAE30_0(sp88);
        }
        arg1->unk_vf08(&sp88, 4, 1);

        sp78 = *func_002FB5B0(arg0->unk_34);
        unk_func_002FAE30_4 *temp;
        unk_func_002FAE30_4 *temp2;
        while ((temp = func_002FB5A0(arg0->unk_34), temp2 = sp78, temp2 != temp)) {
            unk_func_002FAE30_3 *temp3 = &temp2->unk_0C;
            u32 temp4 = temp3->unk_00;
            func_002F52C0(&sp58, &temp3->unk_04);
            sp8C = temp4;
            if (func_002EA770(func_002EA780()) == 1) {
                sp8C = func_002FAE30_0(sp8C);
            }
            arg1->unk_vf08(&sp8C, 4, 1);
            func_002F51B0(&sp58, arg1);
            func_002CFEF0(&sp78);
        }
    }
}
}
