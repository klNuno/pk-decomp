#include "common.h"

typedef struct unk_Q_0 {
    s32 unk_00;
} unk_Q_0;

extern "C" s32 func_002CEAF0(struct unk_Q_1 *, s32, s32, s32, s32);
extern "C" s32 func_002CEA20(unk_Q_0 *);
struct unk_Q_1 {
    unk_Q_0 *unk_00;
    s32 size() { return unk_00->unk_00; }
    s32 data() { return func_002CEA20(unk_00); }
};

inline bool operator==(unk_Q_1 &a0, unk_Q_1 &b) {
    unk_Q_1 *const a = &a0;
    return a->size() == b.size() && func_002CEAF0(a, 0, a->size(), b.data(), b.size()) == 0;
}

typedef struct unk_Q_2 {
    u8 pad_00[0x3C];
    s32 (*unk_3C)(s32, s32);
} unk_Q_2;

typedef struct unk_Q_3 {
    u8 pad_00[0x18];
    unk_Q_2 *unk_18;
    s32 unk_1C;
} unk_Q_3;

typedef struct unk_Q_4 {
    u8 pad_00[0x10];
    unk_Q_3 *unk_10;
} unk_Q_4;

namespace usnd {
struct CVar {
    u8 pad_00[0x14];
    unk_Q_1 unk_14;
};
}

class CSwitchNotif {
public:
    void fv_vVarAccessed(usnd::CVar &);
};

extern "C" {
void __register_global_object(void *, void *, void *);
void func_002CD2A0();
void func_002CDB60(void *, void *, void *);
s32 func_002CE530(void *);
void func_002CE610(unk_Q_4 **, s32);
void func_002CE690();
void func_002CEA30(void *);
void func_002CEA60(usnd::CVar *, s32);
void func_002CEA70(unk_Q_4 **, void *, usnd::CVar **);
extern unk_Q_1 D_0035ACE0[];
extern unk_Q_1 D_0035ACE8[];
extern char D_0035ACF0[];
extern char D_0035AD00[];
extern s8 D_00360508;
extern s8 D_0036050C;
extern s8 D_00360518;
extern u8 D_007BDF10[];
extern u8 D_007BDF20[];
extern u8 D_007BDF30[];
extern u8 D_007BDF40[];
}


void CSwitchNotif::fv_vVarAccessed(usnd::CVar &arg1) {
    s32 v;
    unk_Q_3 *n;
    unk_Q_4 *end;
    unk_Q_4 *it;
    unk_Q_4 *tmp;
    usnd::CVar *key;
    u8 tmp0[4];
    u8 tmp1[4];

    if (D_00360518 == 0) {
        func_002CEA30(D_007BDF40);
        __register_global_object(D_007BDF40, (void *)func_002CE690, D_007BDF30);
        D_00360518 = 1;
    }
    key = &arg1;
    n = 0;
    func_002CEA70(&tmp, D_007BDF40, &key);
    it = tmp;
    func_002CE610(&end, func_002CE530(D_007BDF40));
    if (it != end) {
        n = it->unk_10;
    }
    if (n == 0) {
        return;
    }
    if (D_00360508 == 0) {
        func_002CDB60(D_0035ACE0, D_0035ACF0, tmp0);
        __register_global_object(D_0035ACE0, (void *)func_002CD2A0, D_007BDF10);
        D_00360508 = 1;
    }
    if (D_0036050C == 0) {
        func_002CDB60(D_0035ACE8, D_0035AD00, tmp1);
        __register_global_object(D_0035ACE8, (void *)func_002CD2A0, D_007BDF20);
        D_0036050C = 1;
    }
    v = -1;
    if (arg1.unk_14 == D_0035ACE0[0]) {
        v = 1;
    }
    if (arg1.unk_14 == D_0035ACE8[0]) {
        v = 0;
    }
    if (v != -1) {
        func_002CEA60(&arg1, n->unk_18->unk_3C(n->unk_1C, v));
    }
}
