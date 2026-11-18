#include "common.h"

class unk_func_002EE720_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(...);
};

class unk_func_002EE720_2 {
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

class unk_func_002EE720_3 {
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
    virtual void unk_vf30(...);
};

typedef struct unk_func_002EE720_0 {
    unk_func_002EE720_0 *unk_00;
} unk_func_002EE720_0;

typedef struct unk_func_002EE720_4 {
    u8 pad_00[0x1C];
    u8 unk_1C[4];
} unk_func_002EE720_4;

extern "C" {
void *func_002D2BC0(s32);
void *func_002F02C0(void *, void *);
extern unk_func_002EE720_1 *D_0036069C;
void **func_002EE0C0(void *);
void *func_002EE0A0(void *);
unk_func_002EE720_0 *func_002EE0B0(unk_func_002EE720_0 *, void *);
void func_002EEE10(void *);
unk_func_002EE720_2 *func_002EEDF0(void *);
unk_func_002EE720_3 *func_002EFFF0(void *);
void func_002EC4D0(unk_func_002EE720_3 *, s32);
void func_002CFEF0(unk_func_002EE720_0 *);

void *func_002EE720(unk_func_002EE720_4 *arg0) {
    void *obj;
    unk_func_002EE720_0 it;
    unk_func_002EE720_0 sp58;
    unk_func_002EE720_0 sp5C;
    s32 v;
    unk_func_002EE720_3 *o;

    {
        void *p = func_002D2BC0(0xFC);
        obj = p != 0 ? func_002F02C0(p, arg0) : p;
    }
    if (D_0036069C != 0) {
        D_0036069C->unk_vf10(arg0, obj);
    }
    func_002EE0B0(&sp58, *func_002EE0C0(arg0->unk_1C));
    it = sp58;
    for (; func_002EE0B0(&sp5C, func_002EE0A0(arg0->unk_1C)), it.unk_00 != sp5C.unk_00; func_002CFEF0(&it)) {
        func_002EEE10((u8 *)it.unk_00 + 0xC);
        v = func_002EEDF0((u8 *)it.unk_00 + 0xC)->unk_vf24();
        o = func_002EFFF0(obj);
        o->unk_vf30(v, 0, 0, 1, obj);
        func_002EC4D0(o, v);
    }
    return obj;
}
}
