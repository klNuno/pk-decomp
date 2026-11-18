#include "common.h"

extern "C" {

class unk_Q_0 {
public:
    s32 unk_00;
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20(s32, s32);
};

typedef struct {
    void *unk_00;
    u8 pad_04[0x60];
    void *unk_64;
    void *unk_68;
    u8 pad_6C[0x4];
    void *unk_70;
    void *unk_74;
    s32 unk_78;
    s32 unk_7C;
    s32 unk_80;
    s32 unk_84;
    s32 unk_88;
    s32 unk_8C;
    s32 unk_90;
} unk_Q_1;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_Q_2;

typedef struct {
    u8 pad_00[0x14];
    u8 unk_14;
    u8 pad_15[0x3];
    s32 unk_18;
    u8 pad_1C[0x4];
    unk_Q_2 *unk_20;
} unk_Q_3;

typedef struct {
    u16 unk_00;
    u8 unk_02;
    u8 pad_03;
    s32 unk_04;
    u8 pad_08[0x4];
    u16 unk_0C;
    u16 unk_0E;
} unk_Q_4;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[0x14];
    unk_Q_4 *unk_2C;
} unk_Q_5;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C;
    u8 pad_0D;
    s16 unk_0E;
} unk_Q_6;

typedef struct {
    u8 pad_00[0x24];
    u8 unk_24;
} unk_Q_7;

void func_002FCB20(unk_Q_1 *);
s32 func_00308CA0();
unk_Q_3 *func_002F7DB0(void *);
unk_Q_5 *func_002FAB40(unk_Q_3 *);
void *func_002D2BC0(s32);
unk_Q_0 *func_0030A6A0(void *, s32, s32, s32);
s32 func_0030A4C0(unk_Q_0 *, s32, s32);
void func_0011B418(char *, s32);
s32 func_002F6860(unk_Q_5 *);
void *func_00309510(void *, s32, unk_Q_0 *, s32);
void *func_003079A0(void *, void *);
void *func_00307860(void *, void *);
extern char D_0035C7B0[];
extern s32 D_0035E560[];
extern s32 D_0035E580[];
extern s32 D_0035E8E0[];
extern s32 D_0035E8F8[];
extern unk_Q_0 *D_0036071C;

static inline void func_inl(unk_Q_6 *r, s32 a, s32 b, s32 c, s32 d, s32 e) {
    r->unk_00 = a;
    r->unk_04 = b;
    r->unk_08 = c;
    r->unk_0C = d;
    r->unk_0E = e;
}

unk_Q_1 *func_002F8950(unk_Q_1 *volatile arg0, unk_Q_7 *arg1) {
    unk_Q_3 *temp_s0;
    unk_Q_5 *temp_s1;
    s32 temp_s2;
    unk_Q_0 *p;
    void *q;
    unk_Q_6 *r;

    func_002FCB20(arg0);
    arg0->unk_64 = D_0035E580;
    arg0->unk_64 = D_0035E560;
    arg0->unk_00 = D_0035E8E0;
    arg0->unk_64 = D_0035E8F8;
    arg0->unk_78 = 0;
    arg0->unk_7C = 0;
    arg0->unk_80 = 0;
    arg0->unk_84 = 0;
    arg0->unk_88 = 0;
    arg0->unk_8C = 0;
    arg0->unk_90 = func_00308CA0();
    temp_s0 = func_002F7DB0((u8 *)arg1 + 0x48);
    temp_s1 = func_002FAB40(temp_s0);
    if (D_0036071C == NULL) {
        p = (unk_Q_0 *)func_002D2BC0(0x54);
        if (p != NULL) {
            p = func_0030A6A0(p, 1, 0x1000, 4);
        }
        D_0036071C = p;
        if (func_0030A4C0(p, temp_s0->unk_20->unk_0C, 1) == 0) {
            func_0011B418(D_0035C7B0, temp_s0->unk_20->unk_0C);
        }
    }
    if (temp_s0->unk_14 == 0) {
        temp_s2 = func_002F6860(temp_s1);
        D_0036071C->unk_vf20(temp_s1->unk_14 + temp_s0->unk_18, 0);
    } else {
        temp_s2 = func_002F6860(temp_s1);
        D_0036071C->unk_vf20(temp_s0->unk_18, 0);
    }
    q = func_002D2BC0(0x20);
    if (q != NULL) {
        q = func_00309510(q, 1, D_0036071C, temp_s2);
    }
    arg0->unk_70 = q;
    r = (unk_Q_6 *)func_002D2BC0(0x10);
    if (r != NULL) {
        unk_Q_4 *t = temp_s1->unk_2C;
        func_inl(r, t->unk_00, t->unk_02, t->unk_04, t->unk_0E, t->unk_0E * t->unk_0C);
    }
    arg0->unk_68 = r;
    if (arg1->unk_24 == 0) {
        q = func_002D2BC0(8);
        if (q != NULL) {
            q = func_003079A0(q, arg0->unk_70);
        }
        arg0->unk_74 = q;
    } else {
        q = func_002D2BC0(0x10);
        if (q != NULL) {
            q = func_00307860(q, arg0->unk_70);
        }
        arg0->unk_74 = q;
    }
    return arg0;
}

}
