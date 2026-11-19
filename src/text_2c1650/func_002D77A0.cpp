#include "common.h"

class unk_func_002D77A0_2 {
public:
    s32 unk_00;
    s32 unk_04;
    virtual void unk_vf08(s32);
};

typedef struct unk_func_002D77A0_1 {
    u8 pad_00[0x10];
    unk_func_002D77A0_2 *unk_10;
} unk_func_002D77A0_1;

typedef struct unk_func_002D77A0_3 {
    unk_func_002D77A0_1 *unk_00;
} unk_func_002D77A0_3;

inline bool func_002D77A0_ne2(const unk_func_002D77A0_3 &a, unk_func_002D77A0_1 *const &b) {
    return a.unk_00 != b;
}

extern "C" {

unk_func_002D77A0_1 **func_002CF810(void *);
unk_func_002D77A0_1 *func_002CF7D0(void *);
void func_002CFEF0(unk_func_002D77A0_3 *);
void func_002D7CE0(unk_func_002D77A0_3 *, void *, s32 *);
void func_002D7F40(void *, unk_func_002D77A0_3);
void func_002D82E0(unk_func_002D77A0_2 *, s32, s32);

bool func_002D77A0(void *arg0, s32 arg1) {
    bool found;
    unk_func_002D77A0_3 it;
    unk_func_002D77A0_3 it2;
    unk_func_002D77A0_3 tmp;
    unk_func_002D77A0_2 *o;

    found = false;
    switch (arg1) {
    case -2:
        for (it.unk_00 = *func_002CF810(arg0); func_002D77A0_ne2(it, func_002CF7D0(arg0)); func_002CFEF0(&it)) {
            o = it.unk_00->unk_10;
            func_002D82E0(o, 1, 0);
            if (arg1 != -1) {
                if (o != 0) {
                    o->unk_vf08(1);
                }
                func_002D7F40(arg0, it);
            }
        }
        found = true;
        break;
    default:
        func_002D7CE0(&tmp, arg0, &arg1);
        it2 = tmp;
        unk_func_002D77A0_1 *end = func_002CF7D0(arg0);
        unk_func_002D77A0_1 *node = it2.unk_00;
        if (node != end) {
            o = node->unk_10;
            func_002D82E0(o, 1, 0);
            if (arg1 != -1) {
                if (o != 0) {
                    o->unk_vf08(1);
                }
                func_002D7F40(arg0, it2);
            }
            found = true;
        }
    }
    return found;
}

}
