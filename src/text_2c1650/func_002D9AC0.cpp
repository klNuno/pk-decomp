#include "common.h"

class unk_func_002D9AC0_2 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(s32, s32);
};

typedef struct unk_func_002D9AC0_1 {
    u8 pad_00[0x4C];
    s32 (*unk_4C)(s32, s32, s32);
} unk_func_002D9AC0_1;

typedef struct unk_func_002D9AC0_0 {
    u8 pad_00[0xC];
    unk_func_002D9AC0_2 *unk_0C;
    u8 pad_10[0x8];
    unk_func_002D9AC0_1 *unk_18;
    s32 unk_1C;
    s32 unk_20;
    u8 pad_24[0x21];
    u8 unk_45;
} unk_func_002D9AC0_0;

typedef struct unk_func_002D9AC0_3 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_002D9AC0_3;

typedef struct unk_func_002D9AC0_4 {
    unk_func_002D9AC0_3 *unk_00;
} unk_func_002D9AC0_4;

extern "C" {
s32 func_002DA550();
unk_func_002D9AC0_3 **func_002D9C00(s32);
unk_func_002D9AC0_3 *func_002D9BF0(s32);
void func_002CFEF0(unk_func_002D9AC0_4 *);

bool func_002D9AC0(unk_func_002D9AC0_0 *arg0) {
    bool found = true;
    unk_func_002D9AC0_4 it;
    unk_func_002D9AC0_3 *e;

    if (arg0->unk_1C != -1) {
        found = false;
        it.unk_00 = *func_002D9C00(func_002DA550());
        while (!found && (e = func_002D9BF0(func_002DA550()), it.unk_00 != e)) {
            found |= (arg0->unk_18->unk_4C(arg0->unk_1C, arg0->unk_20, it.unk_00->unk_0C) ? true : false);
            func_002CFEF0(&it);
        }
        if (!found && !arg0->unk_45) {
            arg0->unk_0C->unk_vf0C(2, 0);
            arg0->unk_45 = 1;
        } else if (found && arg0->unk_45) {
            arg0->unk_0C->unk_vf0C(3, 0);
            arg0->unk_45 = 0;
        }
    }
    return found;
}
}
