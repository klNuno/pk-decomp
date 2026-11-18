#include "common.h"

class unk_func_002FD530_0 {
public:
    virtual void unk_vf08(s32);
};

typedef struct {
    u8 pad_00[0xC];
    unk_func_002FD530_0 *unk_0C;
} unk_func_002FD530_1;

typedef struct {
    unk_func_002FD530_1 *unk_00;
} unk_func_002FD530_2;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_002FD530_3;

extern "C" {
void func_002CFEF0(unk_func_002FD530_2 *);
s32 func_002D2BC0(s32);
s32 func_002FD4E0(u8 *);
void func_002FD4F0(unk_func_002FD530_2 *, s32);
s32 *func_002FD500(u8 *);
void func_002FDC70(unk_func_002FD530_3 *, u8 *, s32 *);
s32 func_002FE6E0(s32);

s32 func_002FD530(u8 *arg0) {
    unk_func_002FD530_3 sp28;
    s32 sp30;
    unk_func_002FD530_2 sp34;
    unk_func_002FD530_2 sp38;
    unk_func_002FD530_2 sp3C;
    s32 var_v0;

    var_v0 = func_002D2BC0(0x40);
    if (var_v0 != 0) {
        var_v0 = func_002FE6E0(var_v0);
    }
    sp30 = var_v0;
    func_002FDC70(&sp28, arg0 + 0xC, &sp30);
    func_002FD4F0(&sp38, *func_002FD500(arg0));
    sp34 = sp38;
    while (func_002FD4F0(&sp3C, func_002FD4E0(arg0)), sp34.unk_00 != sp3C.unk_00) {
        sp34.unk_00->unk_0C->unk_vf08(sp30);
        func_002CFEF0(&sp34);
    }
    return sp30;
}
}
