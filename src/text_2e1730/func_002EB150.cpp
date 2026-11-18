/* profile: opt_300 */
#include "common.h"

struct unk_002EB150_0 {
    u8 pad_00[8];
    u32 unk_08;
};

struct unk_002EB150_1 {
    u32 unk_00;
    u8 pad_04[8];
    void *unk_0C;
};

class unk_002EB150_2 {
public:
    virtual void unk_vf08();
    virtual unk_002EB150_0 *unk_vf0C();

    u8 pad_04[0x10];
    unk_002EB150_1 *unk_14;
    f32 unk_18, unk_1C, unk_20, unk_24;
    u32 unk_28;
    s32 unk_2C;
};

class unk_002EB150_3 {
public:
    s32 unk_00;
    virtual void unk_vf08(void *, u32, s32);
};

extern "C" {
void func_002E7470(s32 *, unk_002EB150_3 *);
s32 func_002EA770(void *);
void *func_002EA780(void);
void func_002F2020(unk_002EB150_2 *, unk_002EB150_3 *);
}

inline u32 func_002EB150_0(u32 x)
{
    return (x << 24) | (((x << 8) & 0xFF0000) | ((x >> 24) | ((x >> 8) & 0xFF00)));
}

inline f32 func_002EB150_1(f32 f)
{
    void *pf = &f;
    s64 x = *(s64 *)pf;
    s64 y = (x << 24) | (((x << 8) & 0xFF0000) | ((x >> 24) | ((x >> 8) & 0xFF00)));
    void *py = &y;
    f = *(f32 *)py;
    return f;
}

extern "C" void func_002EB150(unk_002EB150_2 *arg0, unk_002EB150_3 *arg1)
{
    u32 temp;
    f32 f0, f1, f2, f3;
    u32 temp1;
    func_002F2020(arg0, arg1);
    if (arg0->unk_vf0C()->unk_08 > 1) {
        unk_002EB150_1 **p = &arg0->unk_14;
        u32 temp0 = arg0->unk_14->unk_00;
        temp1 = temp0;
        if (func_002EA770(func_002EA780()) == 1) {
            temp1 = func_002EB150_0(temp1);
        }
        arg1->unk_vf08(&temp1, 4, 1);
        if (temp0 != 0) {
            unk_002EB150_1 *v = *p;
            arg1->unk_vf08(v->unk_0C, v->unk_00, 1);
        }
    }

    temp = arg0->unk_28;
    if (func_002EA770(func_002EA780()) == 1) {
        temp = func_002EB150_0(temp);
    }
    arg1->unk_vf08(&temp, 4, 1);
    func_002E7470(&arg0->unk_2C, arg1);

    f0 = arg0->unk_18;
    if (func_002EA770(func_002EA780()) == 1) {
        f0 = func_002EB150_1(f0);
    }
    arg1->unk_vf08(&f0, 4, 1);
    f1 = arg0->unk_1C;
    if (func_002EA770(func_002EA780()) == 1) {
        f1 = func_002EB150_1(f1);
    }
    arg1->unk_vf08(&f1, 4, 1);
    f2 = arg0->unk_20;
    if (func_002EA770(func_002EA780()) == 1) {
        f2 = func_002EB150_1(f2);
    }
    arg1->unk_vf08(&f2, 4, 1);
    f3 = arg0->unk_24;
    if (func_002EA770(func_002EA780()) == 1) {
        f3 = func_002EB150_1(f3);
    }
    arg1->unk_vf08(&f3, 4, 1);
}
