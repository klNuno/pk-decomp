#include "common.h"

typedef struct unk_func_002EF500_2 {
    s32 unk_00;
} unk_func_002EF500_2;

typedef struct unk_func_002EF500_1 {
    struct unk_func_002EF500_1 *unk_00;
    struct unk_func_002EF500_1 *unk_04;
    u8 pad_08[4];
    unk_func_002EF500_2 unk_0C;
} unk_func_002EF500_1;

struct unk_func_002EF500_0 {
    unk_func_002EF500_1 *unk_00;
    u8 unk_04;
    unk_func_002EF500_0(unk_func_002EF500_1 *a, const u8 &b) : unk_00(a), unk_04(b) {}
};

extern "C" {
unk_func_002EF500_1 *func_002EF7B0(void *, void *, bool, bool, const unk_func_002EF500_2 &);
s32 func_002CEAF0(const unk_func_002EF500_2 *, s32, s32, s32, s32);
s32 func_002D0B40(const unk_func_002EF500_2 *);
s32 func_002D0B50(const unk_func_002EF500_2 *);
extern u8 D_0035F708;
extern u8 D_0035F70C;

static inline bool func_002EF500_lt(const unk_func_002EF500_2 &a, const unk_func_002EF500_2 &b) {
    return func_002CEAF0(&a, 0, func_002D0B50(&a), func_002D0B40(&b), func_002D0B50(&b)) < 0;
}

unk_func_002EF500_0 func_002EF500(unk_func_002EF500_1 *arg1, const unk_func_002EF500_2 &arg2) {
    unk_func_002EF500_1 *found;
    bool left;
    unk_func_002EF500_1 *parent;
    unk_func_002EF500_1 *node;
    bool all;

    left = true;
    parent = (unk_func_002EF500_1 *)&arg1->unk_04;
    node = arg1->unk_04;
    found = 0;
    all = true;
    while (node != 0) {
        parent = node;
        if (func_002EF500_lt(arg2, node->unk_0C)) {
            node = node->unk_00;
            left = true;
        } else {
            found = node;
            node = node->unk_04;
            left = false;
            all = false;
        }
    }
    if (found == 0 || func_002EF500_lt(found->unk_0C, arg2)) {
        return unk_func_002EF500_0(func_002EF7B0(arg1, parent, left, all, arg2), D_0035F708);
    }
    return unk_func_002EF500_0(found, D_0035F70C);
}
}
