#include "common.h"

class unk_func_002F8170_1 {
public:
    virtual void unk_vf08(...);
};

class unk_func_002F8170_2 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20(...);
};

class unk_func_002F8170_3 {
public:
    virtual void unk_vf08(...);
    virtual void unk_vf0C();
    virtual s32 unk_vf10();
};

typedef struct unk_func_002F8170_4 {
    void *unk_00;
    u8 pad_04[0x4];
    void *unk_08;
    u8 pad_0C[0x8];
} unk_func_002F8170_4;

typedef struct unk_func_002F8170_5 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_002F8170_5;

typedef struct unk_func_002F8170_0 {
    u8 pad_00[0x1C];
    s32 unk_1C;
    unk_func_002F8170_3 *unk_20;
    u8 pad_24[0x44];
    unk_func_002F8170_5 *unk_68;
    u8 pad_6C[0x8];
    s32 unk_74;
    unk_func_002F8170_1 *unk_78;
    u8 pad_7C[0x4];
    s32 unk_80;
    u8 pad_84[0x4];
    unk_func_002F8170_2 *unk_88;
} unk_func_002F8170_0;

extern "C" {

void *func_00304C50(s32);
unk_func_002F8170_1 *func_0030F460(void *);
void *func_002D2BC0(s32);
void func_00305B60(void *);
unk_func_002F8170_3 *func_003075D0(void *, s32, s32);
unk_func_002F8170_3 *func_00306A00(void *, s32);
void func_0030F0D0(unk_func_002F8170_1 *, void *, s32);
extern s32 D_0035CE80[];
extern u8 D_0035E9E0[];
extern u8 D_0035EDE0[];
extern u8 D_0035EDF4[];

s32 func_002F8170(unk_func_002F8170_0 *arg0) {
    s32 ret;

    if (arg0->unk_1C != 0) {
        return 0;
    }
    if (arg0->unk_20 == 0) {
        {
            unk_func_002F8170_1 *p = (unk_func_002F8170_1 *)func_00304C50(0x2C);
            if (p) {
                p = func_0030F460(p);
            }
            arg0->unk_78 = p;
        }
        {
            unk_func_002F8170_4 *p = (unk_func_002F8170_4 *)func_002D2BC0(0x14);
            if (p) {
                func_00305B60(p);
                p->unk_08 = D_0035E9E0;
                p->unk_00 = D_0035EDE0;
                p->unk_08 = D_0035EDF4;
            }
            arg0->unk_88 = (unk_func_002F8170_2 *)p;
        }
        if (arg0->unk_68->unk_00 == D_0035CE80[0]) {
            unk_func_002F8170_3 *p = (unk_func_002F8170_3 *)func_002D2BC0(0x1C);
            if (p) {
                p = func_003075D0(p, arg0->unk_68->unk_04, arg0->unk_68->unk_08);
            }
            arg0->unk_20 = p;
        } else {
            unk_func_002F8170_3 *p = (unk_func_002F8170_3 *)func_002D2BC0(0x20);
            if (p) {
                p = func_00306A00(p, arg0->unk_68->unk_04);
            }
            arg0->unk_20 = p;
        }
        if (arg0->unk_80 != 0) {
            u8 *q = (u8 *)arg0;
            if (arg0) {
                q += 0x64;
            }
            func_0030F0D0(arg0->unk_78, q, 0);
        }
        arg0->unk_78->unk_vf08(arg0->unk_74, 0, 0);
        {
            u8 *q = (u8 *)arg0->unk_78;
            if (q) {
                q += 4;
            }
            arg0->unk_88->unk_vf20(q, 0, 0);
        }
        arg0->unk_20->unk_vf08(arg0->unk_88, 0, 0);
    }
    ret = arg0->unk_20->unk_vf10();
    if (ret != 0) {
        arg0->unk_1C = ret;
    }
    return ret;
}

}
