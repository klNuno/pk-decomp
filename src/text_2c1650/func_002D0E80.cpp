#include "common.h"

typedef struct unk_func_002D0E80_0 {
    u32 unk_00;
    u32 unk_04;
} unk_func_002D0E80_0;

typedef struct unk_func_002D0E80_1 {
    struct unk_func_002D0E80_1 *unk_00;
    struct unk_func_002D0E80_1 *unk_04;
    u32 unk_08;
    unk_func_002D0E80_0 unk_0C;
} unk_func_002D0E80_1;

typedef struct unk_func_002D0E80_2 {
    u32 unk_00;
    unk_func_002D0E80_1 *unk_04;
} unk_func_002D0E80_2;

struct unk_func_002D0E80_3 {
    unk_func_002D0E80_1 *unk_00;
    u8 unk_04;
    unk_func_002D0E80_3(unk_func_002D0E80_1 *const &a, const u8 &b) : unk_00(a), unk_04(b) {}
};

extern "C" {
extern u8 D_0035F688;
extern u8 D_0035F68C;

unk_func_002D0E80_1 *func_002D14C0(unk_func_002D0E80_2 *, unk_func_002D0E80_1 *, u8, u8, const unk_func_002D0E80_0 &);
}

static inline u8 func_002D0E80_inl(const unk_func_002D0E80_0 &a, const unk_func_002D0E80_0 &b) {
    if (a.unk_04 != b.unk_04) {
        return a.unk_04 < b.unk_04;
    }
    return a.unk_00 < b.unk_00;
}

extern "C" {
unk_func_002D0E80_3 func_002D0E80(unk_func_002D0E80_2 *arg1, const unk_func_002D0E80_0 &arg2) {
    unk_func_002D0E80_1 *found;
    u8 left;
    unk_func_002D0E80_1 *parent;
    unk_func_002D0E80_1 *node;
    u8 temp;

    left = 1;
    parent = (unk_func_002D0E80_1 *)&arg1->unk_04;
    node = arg1->unk_04;
    found = 0;
    temp = left;

    while (node != 0) {
        parent = node;
        if (func_002D0E80_inl(arg2, node->unk_0C)) {
            node = node->unk_00;
            left = 1;
        } else {
            found = node;
            node = node->unk_04;
            left = 0;
            temp = 0;
        }
    }
    if (found == 0 || (found->unk_0C.unk_04 != arg2.unk_04
        ? (u8)(found->unk_0C.unk_04 < arg2.unk_04)
        : (u8)(found->unk_0C.unk_00 < arg2.unk_00))) {
        return unk_func_002D0E80_3(func_002D14C0(arg1, parent, left, temp, arg2), D_0035F688);
    }
    return unk_func_002D0E80_3(found, D_0035F68C);
}
}
