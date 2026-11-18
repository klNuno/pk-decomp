#include "common.h"

class unk_func_002F79B0_0 {
public:
    virtual void unk_vf08(s32);
    virtual void unk_vf0C(s32);
};

typedef struct unk_func_002F79B0_1 {
    u8 pad_00[0x15];
    u8 unk_15;
} unk_func_002F79B0_1;

typedef struct unk_func_002F79B0_2 {
    void *unk_00;
    u8 pad_04[0x44];
    u8 unk_48[0x8];
    s32 unk_50;
    unk_func_002F79B0_0 *unk_54;
} unk_func_002F79B0_2;

extern "C" {
unk_func_002F79B0_1 *func_002F7B50(void *);
s32 func_002F7C40(void *, s32);
unk_func_002F79B0_0 *func_002F7DB0(void *);
void func_002F7B60(void *, s32);
void func_002FB970(void *, s32);
void func_00304B00(s32);
void func_002D2BB0(void *);
extern u8 D_0035E890[];

unk_func_002F79B0_2 *func_002F79B0(unk_func_002F79B0_2 *arg0, s16 arg1) {
    unk_func_002F79B0_0 *p;

    if (arg0 != 0) {
        arg0->unk_00 = D_0035E890;
        if (func_002F7B50(arg0->unk_48)->unk_15 == 0) {
            p = arg0->unk_54;
            if (p != 0) {
                if (p != 0) {
                    p->unk_vf0C(1);
                }
                arg0->unk_54 = 0;
            }
            if (arg0->unk_50 != 0) {
                func_00304B00(arg0->unk_50);
                arg0->unk_50 = 0;
            }
        }
        if (func_002F7C40(arg0->unk_48, 0) != 0) {
            p = func_002F7DB0(arg0->unk_48);
            if (p != 0) {
                p->unk_vf08(1);
            }
            func_002F7B60(arg0->unk_48, 0);
        }
        func_002FB970(arg0, 0);
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
}
