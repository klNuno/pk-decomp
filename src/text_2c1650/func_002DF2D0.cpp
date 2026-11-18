#include "common.h"

class unk_func_002DF2D0_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20();
    virtual void unk_vf24();
    virtual void unk_vf28(s32);
};

typedef struct {
    u8 pad_00[0x34];
    unk_func_002DF2D0_0 *unk_34;
} unk_func_002DF2D0_1;

typedef struct {
    u8 pad_00[0x4];
    unk_func_002DF2D0_1 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    u8 unk_10;
} unk_func_002DF2D0_2;

extern "C" {
void func_00300940(s32);

void func_002DF2D0(unk_func_002DF2D0_2 *arg0, s32 arg1) {
    if (arg0->unk_10 != 0) {
        if (arg0->unk_08 != 0) {
            func_00300940(arg0->unk_08);
        }
    } else if (arg0->unk_0C != NULL) {
        if (arg1 != 0) {
            arg0->unk_04->unk_34->unk_vf24();
        }
        if (*arg0->unk_0C != 0) {
            arg0->unk_04->unk_34->unk_vf28(*arg0->unk_0C);
        }
        *arg0->unk_0C = arg1;
    }
}
}
