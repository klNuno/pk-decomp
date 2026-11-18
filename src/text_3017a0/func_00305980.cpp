#include "common.h"

class unk_func_00305980_0 {
public:
    s32 unk_00;
    virtual s32 unk_vf08();
    virtual s32 unk_vf0C(s32, u16, s32);
};

typedef struct {
    u8 pad_00[0x8];
    unk_func_00305980_0 *unk_08;
} unk_func_00305980_2;

typedef struct {
    u8 pad_00[0xE];
    u16 unk_0E;
} unk_func_00305980_3;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    unk_func_00305980_3 *unk_08;
} unk_func_00305980_4;

extern "C" {
void func_00305980(unk_func_00305980_2 *arg0, unk_func_00305980_4 *arg1, s32 arg2, s32 *arg3);
}

void func_00305980(unk_func_00305980_2 *arg0, unk_func_00305980_4 *arg1, s32 arg2, s32 *arg3) {
    s32 temp = arg0->unk_08->unk_vf0C(arg1->unk_00, arg1->unk_08->unk_0E, arg1->unk_04);

    if (temp != arg1->unk_04) {
        arg1->unk_04 = temp;
    }
    if (arg3 != NULL) {
        if (arg0->unk_08->unk_vf08() != 0) {
            *arg3 = 1;
        } else {
            *arg3 = 0;
        }
    }
}
