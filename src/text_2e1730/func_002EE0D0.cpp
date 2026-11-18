/* profile: opt_300 */
#include "common.h"

struct unk_002EE0D0_0 {
    u8 pad_00[8];
    u32 unk_08;
};

struct unk_002EE0D0_1 {
    u32 unk_00;
    u8 pad_04[8];
    void *unk_0C;
};

class unk_002EE0D0_2 {
public:
    virtual void unk_vf08();
    virtual unk_002EE0D0_0 *unk_vf0C();

    u8 pad_04[0x10];
    unk_002EE0D0_1 *unk_14;
    u8 unk_18;
    u8 pad_19[3];
    u8 unk_1C[0xC];
    u8 unk_28[0x10];
    u8 unk_38[4];
};

class unk_002EE0D0_3 {
public:
    s32 unk_00;
    virtual void unk_vf08(void *, u32, s32);
};

struct unk_002EE0D0_4 {
    u8 pad_00[0xC];
    unk_002EE0D0_1 *unk_0C;
    void *unk_10;
};

struct unk_002EE0D0_5 {
    u8 pad_00[0xC];
    u8 unk_0C[4];
};

extern "C" {
void func_002CFEF0(void *);
s32 func_002EA770(void *);
void *func_002EA780(void);
unk_002EE0D0_5 *func_002EE0A0(void *);
void func_002EE0B0(unk_002EE0D0_5 **, unk_002EE0D0_5 *);
unk_002EE0D0_5 **func_002EE0C0(void *);
unk_002EE0D0_4 *func_002EE470(void *);
unk_002EE0D0_4 **func_002EE480(void *);
u32 *func_002EE490(void *);
u32 *func_002EE4A0(void *);
void func_002EEE00(void *, unk_002EE0D0_3 *);
void func_002F2020(unk_002EE0D0_2 *, unk_002EE0D0_3 *);
void func_002FEA30(void *, unk_002EE0D0_3 *);
void func_00302A60(void *, unk_002EE0D0_3 *);
}

inline u32 func_002EE0D0_0(u32 x)
{
    return (x << 24) | (((x << 8) & 0xFF0000) | ((x >> 24) | ((x >> 8) & 0xFF00)));
}

inline void func_002EE0D0_1(unk_002EE0D0_3 *arg0, u32 *arg1)
{
    if (func_002EA770(func_002EA780()) == 1) {
        *arg1 = func_002EE0D0_0(*arg1);
    }
    arg0->unk_vf08(arg1, 4, 1);
}

extern "C" void func_002EE0D0(unk_002EE0D0_2 *arg0, unk_002EE0D0_3 *arg1)
{
    unk_002EE0D0_5 *sp6C;
    unk_002EE0D0_4 *sp70;
    u32 sp74, sp78, sp7C;
    unk_002EE0D0_5 *sp80, *sp84;
    u32 sp88, sp8C;

    func_002F2020(arg0, arg1);
    if (arg0->unk_vf0C()->unk_08 > 1) {
        unk_002EE0D0_1 **p = &arg0->unk_14;
        u32 temp = arg0->unk_14->unk_00;
        sp7C = temp;
        func_002EE0D0_1(arg1, &sp7C);
        if (temp != 0) {
            unk_002EE0D0_1 *v = *p;
            arg1->unk_vf08(v->unk_0C, v->unk_00, 1);
        }
    }
    sp74 = *func_002EE4A0(arg0->unk_1C);
    func_002EE0D0_1(arg1, &sp74);

    func_002EE0B0(&sp80, *func_002EE0C0(arg0->unk_1C));
    for (sp6C = sp80; func_002EE0B0(&sp84, func_002EE0A0(arg0->unk_1C)), sp6C != sp84; func_002CFEF0(&sp6C)) {
        func_002EEE00(sp6C->unk_0C, arg1);
    }

    sp78 = *func_002EE490(arg0->unk_28);
    func_002EE0D0_1(arg1, &sp78);
    unk_002EE0D0_4 *end;
    for (sp70 = *func_002EE480(arg0->unk_28); end = func_002EE470(arg0->unk_28), sp70 != end; func_002CFEF0(&sp70)) {
        void *v = sp70->unk_10;
        unk_002EE0D0_1 **p = &sp70->unk_0C;
        u32 temp = (*p)->unk_00;
        sp88 = temp;
        func_002EE0D0_1(arg1, &sp88);
        if (temp != 0) {
            unk_002EE0D0_1 *p0 = *p;
            arg1->unk_vf08(p0->unk_0C, p0->unk_00, 1);
        }
        func_00302A60(v, arg1);
    }

    func_002FEA30(arg0->unk_38, arg1);
    sp8C = arg0->unk_18;
    func_002EE0D0_1(arg1, &sp8C);
}
