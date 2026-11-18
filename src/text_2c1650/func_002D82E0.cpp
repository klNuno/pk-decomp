#include "common.h"

class unk_func_002D82E0_3 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(...);
};

typedef struct unk_func_002D82E0_2 {
    u8 pad_00[0xC];
    unk_func_002D82E0_3 *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
} unk_func_002D82E0_2;

typedef struct unk_func_002D82E0_1 {
    u8 pad_00[0x4];
    struct unk_func_002D82E0_1 *unk_04;
    unk_func_002D82E0_2 *unk_08;
} unk_func_002D82E0_1;

typedef struct unk_func_002D82E0_0 {
    unk_func_002D82E0_1 *unk_00[1];
} unk_func_002D82E0_0;

static inline bool unk_inl(unk_func_002D82E0_3 *obj, s32 arg1) {
    obj->unk_vf0C(arg1, 0);
    return true;
}

extern "C" {

unk_func_002D82E0_1 *func_002CF800(void *);
void func_002CF7F0(unk_func_002D82E0_0 *, unk_func_002D82E0_1 *);
void func_002CF7E0(unk_func_002D82E0_0 *, unk_func_002D82E0_1 *);

bool func_002D82E0(u8 *arg0, s32 arg1, s32 arg2) {
    bool ok;
    unk_func_002D82E0_0 it;
    unk_func_002D82E0_0 it2;
    unk_func_002D82E0_0 temp1;
    unk_func_002D82E0_0 temp6;
    unk_func_002D82E0_0 temp4;
    unk_func_002D82E0_0 temp8;
    unk_func_002D82E0_0 temp5;
    unk_func_002D82E0_0 temp9;

    ok = true;
    if (arg2 != -2) {
        func_002CF7F0(&temp4, func_002CF800(arg0 + 0xC)->unk_04);
        temp1.unk_00[0] = temp4.unk_00[0];
        it = temp1;
        while (func_002CF7E0(&temp8, func_002CF800(arg0 + 0xC)), it.unk_00[0] != temp8.unk_00[0]) {
            if (it.unk_00[0]->unk_08->unk_20 == arg2) {
                ok = unk_inl(it.unk_00[0]->unk_08->unk_0C, arg1) && ok;
            }
            it.unk_00[0] = it.unk_00[0]->unk_04;
        }
    } else {
        func_002CF7F0(&temp5, func_002CF800(arg0 + 0xC)->unk_04);
        temp6.unk_00[0] = temp5.unk_00[0];
        it2 = temp6;
        while (func_002CF7E0(&temp9, func_002CF800(arg0 + 0xC)), it2.unk_00[0] != temp9.unk_00[0]) {
            ok = unk_inl(it2.unk_00[0]->unk_08->unk_0C, arg1) && ok;
            if (!ok) {
                break;
            }
            it2.unk_00[0] = it2.unk_00[0]->unk_04;
        }
    }
    return ok;
}

}
