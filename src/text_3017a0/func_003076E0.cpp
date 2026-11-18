#include "common.h"

class unk_func_003076E0_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(s32, s32);
};

class unk_func_003076E0_1 {
public:
    unk_func_003076E0_0 *unk_00;
    virtual s32 unk_vf08();
    virtual u32 unk_vf0C(s32, s32, s32);
};

typedef struct unk_func_003076E0_2 {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x4];
    u8 unk_0C;
    u8 pad_0D[0x1];
    u16 unk_0E;
} unk_func_003076E0_2;

typedef struct unk_func_003076E0_3 {
    s32 unk_00;
    u32 unk_04;
    unk_func_003076E0_2 *unk_08;
} unk_func_003076E0_3;

typedef struct unk_func_003076E0_4 {
    u8 pad_00[0x4];
    unk_func_003076E0_1 *unk_04;
    u8 unk_08;
    u8 pad_09[0x3];
    s32 unk_0C;
} unk_func_003076E0_4;

extern "C" {
void func_003076E0(unk_func_003076E0_4 *arg0, unk_func_003076E0_3 *arg1, s32 arg2, s32 *arg3) {
    u32 got;
    s32 size;

    size = arg1->unk_04 * arg1->unk_08->unk_0E;
    got = arg0->unk_04->unk_vf0C(arg1->unk_00, 1, size);
    if (arg0->unk_04->unk_vf08() != 0) {
        if (arg0->unk_08 == 0) {
            if (arg3 != NULL) {
                *arg3 = 1;
            }
            arg1->unk_04 = got / (arg1->unk_08->unk_04 * (arg1->unk_08->unk_0C / 8));
        } else {
            arg0->unk_04->unk_00->unk_vf10(arg0->unk_0C, 0);
            arg0->unk_04->unk_vf0C(arg1->unk_00 + got, 1, size - got);
        }
    }
}
}
