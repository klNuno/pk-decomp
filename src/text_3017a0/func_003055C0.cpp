#include "common.h"

class unk_func_003055C0_0 {
public:
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C;
    u16 unk_0E;
    unk_func_003055C0_0(s32 a, s32 b, s32 c, u8 d, u16 e) : unk_00(a), unk_04(b), unk_08(c), unk_0C(d), unk_0E(e) {}
};

class unk_func_003055C0_1 {
public:
    s32 unk_00;
    s32 unk_04;
    unk_func_003055C0_0 *unk_08;
    unk_func_003055C0_1(s32 a, s32 b, unk_func_003055C0_0 *c) : unk_00(a), unk_04(b), unk_08(c) {}
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[3];
    s32 unk_0C;
    u8 unk_10;
    u8 pad_11[3];
    u16 unk_14;
    u8 pad_16[2];
    s32 unk_18;
    s32 unk_1C;
    u8 pad_20[4];
    s32 unk_24;
} unk_func_003055C0_2;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[8];
} unk_func_003055C0_3;

class unk_func_003055C0_4 {
public:
    virtual void unk_vf08(unk_func_003055C0_1 *, s32, s32 *);
    virtual void unk_vf0C();
};

extern "C" {
unk_func_003055C0_4 *func_0030D630(s32);
void func_0031A340(s32);
extern unk_func_003055C0_3 D_007BF800;

unk_func_003055C0_3 *func_003055C0(s32 arg0, void *arg1) {
    unk_func_003055C0_4 *obj;
    s32 res;
    unk_func_003055C0_3 *r;
    unk_func_003055C0_2 *m;

    switch (arg0) {
    case 0x60:
        **(s32 **)((u8 *)arg1 + 8) = *(s32 *)((u8 *)arg1 + 4);
        func_0031A340(*(s32 *)arg1);
        break;
    case 0x61:
        m = (unk_func_003055C0_2 *)arg1;
        r = &D_007BF800;
        obj = func_0030D630(m->unk_00);
        if (obj != 0) {
            unk_func_003055C0_0 a(m->unk_04, m->unk_08, m->unk_0C, m->unk_10, m->unk_14);
            unk_func_003055C0_1 b(m->unk_18, m->unk_1C, &a);
            obj->unk_vf08(&b, m->unk_24, &res);
            r->unk_00 = b.unk_04;
            r->unk_04 = res == 1;
        } else {
            r->unk_00 = 0;
            r->unk_04 = 1;
        }
        break;
    case 0x62:
        obj = func_0030D630(*(s32 *)arg1);
        if (obj != 0) {
            obj->unk_vf0C();
        }
        break;
    }
    return &D_007BF800;
}
}
