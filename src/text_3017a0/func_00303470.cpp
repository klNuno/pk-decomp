#include "common.h"

typedef struct unk_func_00303470_0 {
    void *unk_00;
} unk_func_00303470_0;

typedef struct unk_func_00303470_1 {
    u8 pad_00[0xC];
    unk_func_00303470_0 *unk_0C;
} unk_func_00303470_1;

typedef struct unk_func_00303470_2 {
    unk_func_00303470_1 *unk_00;
} unk_func_00303470_2;

typedef struct unk_func_00303470_3 {
    u8 pad_00[0xC];
    u8 unk_0C[4];
} unk_func_00303470_3;

extern "C" {
void func_002CFEF0(unk_func_00303470_2 *);
void func_002D2BB0(void *);
s32 func_00302FB0(unk_func_00303470_3 *);
void func_00302FC0(unk_func_00303470_2 *, s32);
s32 *func_00302FD0(unk_func_00303470_3 *);
void func_00303140(void *, s32);
void func_003031A0(unk_func_00303470_3 *, s32);

unk_func_00303470_3 *func_00303470(unk_func_00303470_3 *arg0, s16 arg1) {
    if (arg0 != 0) {
        unk_func_00303470_2 sp44;
        {
            unk_func_00303470_2 sp48;
            func_00302FC0(&sp48, *func_00302FD0(arg0));
            sp44 = sp48;
        }
        unk_func_00303470_2 sp4C;
        while (func_00302FC0(&sp4C, func_00302FB0(arg0)), sp44.unk_00 != sp4C.unk_00) {
            unk_func_00303470_0 *p;
            p = sp44.unk_00->unk_0C;
            if (p != 0) {
                if (p->unk_00 != 0) {
                    func_002D2BB0(p->unk_00);
                }
                func_002D2BB0(p);
            }
            func_002CFEF0(&sp44);
        }
        {
            void *q = arg0->unk_0C;
            if (q != 0) {
                if (q != 0) {
                    if (q != 0) {
                        func_00303140(q, -1);
                    }
                }
            }
        }
        if (arg0 != 0) {
            if (arg0 != 0) {
                if (arg0 != 0) {
                    func_003031A0(arg0, -1);
                }
            }
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
}
