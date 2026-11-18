#include "common.h"

typedef struct unk_func_0030AB00_1 {
    void *unk_00;
    s32 unk_04;
} unk_func_0030AB00_1;

typedef struct unk_func_0030AB00_0 {
    unk_func_0030AB00_1 *unk_00;
    void *unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    void *unk_18;
} unk_func_0030AB00_0;

extern "C" {
s32 func_00308CA0();
extern u8 D_0035E9A0[];
extern u8 D_0035E9B4[];
extern u8 D_0035F0F0[];
extern u8 D_0035F10C[];
extern u8 D_0035F120[];
}

inline void func_0030AB00_inl(unk_func_0030AB00_0 *arg0) {
    unk_func_0030AB00_0 *p = arg0;
    p->unk_04 = D_0035E9A0;
    p->unk_00->unk_00 = D_0035E9B4;
    p->unk_00->unk_04 = (u8 *)&p->unk_08 - (u8 *)p->unk_00;
}

inline void func_0030AB00_inl2(unk_func_0030AB00_0 *arg0) {
    unk_func_0030AB00_0 *p = arg0;
    p->unk_00 = (unk_func_0030AB00_1 *)&p->unk_18;
}

inline void func_0030AB00_inl3(unk_func_0030AB00_0 *arg0) {
    unk_func_0030AB00_0 *p = arg0;
    p->unk_00->unk_04 = (u8 *)&p->unk_18 - (u8 *)p->unk_00;
}

extern "C" unk_func_0030AB00_0 *func_0030AB00(unk_func_0030AB00_0 *volatile arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((s16)arg1) {
        func_0030AB00_inl2(arg0);
        arg0->unk_18 = D_0035F120;
    }
    func_0030AB00_inl(arg0);
    arg0->unk_04 = D_0035F0F0;
    arg0->unk_00->unk_00 = D_0035F10C;
    func_0030AB00_inl3(arg0);
    arg0->unk_14 = func_00308CA0();
    arg0->unk_08 = arg3;
    arg0->unk_10 = arg2;
    arg0->unk_0C = 0;
    return arg0;
}
