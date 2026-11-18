#include "common.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
} unk_func_002F5CE0_0;

typedef struct unk_func_002F5CE0_1 {
    struct unk_func_002F5CE0_1 *unk_00;
    struct unk_func_002F5CE0_1 *unk_04;
    u8 pad_08[4];
    unk_func_002F5CE0_0 unk_0C;
} unk_func_002F5CE0_1;

typedef struct {
    u8 pad_00[4];
    unk_func_002F5CE0_1 unk_04;
} unk_func_002F5CE0_2;

class unk_func_002F5CE0_3 {
public:
    unk_func_002F5CE0_1 *unk_00;
    unk_func_002F5CE0_3(unk_func_002F5CE0_1 *p) : unk_00(p) {}
};

inline bool func_002F5CE0_inl(const unk_func_002F5CE0_0 &a, const unk_func_002F5CE0_0 &b) {
    return b.unk_00 == a.unk_00 ? a.unk_04 < b.unk_04 : a.unk_00 < b.unk_00;
}

extern "C" {
unk_func_002F5CE0_3 func_002F5CE0(unk_func_002F5CE0_2 *arg0, const unk_func_002F5CE0_0 &arg1) {
    unk_func_002F5CE0_1 *x = arg0->unk_04.unk_00;
    unk_func_002F5CE0_1 *y = &arg0->unk_04;

    while (x != NULL) {
        if (!func_002F5CE0_inl(x->unk_0C, arg1)) {
            y = x;
            x = x->unk_00;
        } else {
            x = x->unk_04;
        }
    }
    unk_func_002F5CE0_3 j(y);
    if (j.unk_00 == &arg0->unk_04 || func_002F5CE0_inl(arg1, y->unk_0C)) {
        return unk_func_002F5CE0_3(&arg0->unk_04);
    }
    return j;
}
}
