#include "common.h"

class unk_func_002FD5E0_2 {
public:
    u8 pad_00[0x30];
    virtual ~unk_func_002FD5E0_2();
};

typedef struct {
    u8 pad_00[0xC];
    unk_func_002FD5E0_2 *unk_0C;
} unk_func_002FD5E0_1;

typedef struct {
    unk_func_002FD5E0_1 *unk_00;
} unk_func_002FD5E0_3;

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C[4];
} unk_func_002FD5E0_0;

extern "C" {
void func_002CFEF0(unk_func_002FD5E0_3 *);
void func_002D2BB0(void *);
void func_002FD510(unk_func_002FD5E0_3 *, unk_func_002FD5E0_1 *);
unk_func_002FD5E0_1 *func_002FD520(void *);
void func_002FD6E0(unk_func_002FD5E0_0 *, s32);
void func_002FD740(void *, s32);
unk_func_002FD5E0_1 **func_002FD7A0(void *);

unk_func_002FD5E0_0 *func_002FD5E0(unk_func_002FD5E0_0 *arg0, s32 arg1) {
    unk_func_002FD5E0_3 temp0;
    unk_func_002FD5E0_3 temp1;
    unk_func_002FD5E0_3 temp2;

    if (arg0 != 0) {
        func_002FD510(&temp1, *func_002FD7A0(arg0->unk_0C));
        temp0 = temp1;
        while (func_002FD510(&temp2, func_002FD520(arg0->unk_0C)), temp0.unk_00 != temp2.unk_00) {
            delete temp0.unk_00->unk_0C;
            func_002CFEF0(&temp0);
        }
        if (arg0->unk_0C != 0) {
            if (arg0->unk_0C != 0) {
                if (arg0->unk_0C != 0) {
                    func_002FD740(arg0->unk_0C, -1);
                }
            }
        }
        if (arg0 != 0) {
            if (arg0 != 0) {
                if (arg0 != 0) {
                    func_002FD6E0(arg0, -1);
                }
            }
        }
        if ((s16)arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
}
