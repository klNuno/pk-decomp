#include "common.h"

typedef struct unk_func_00303890_1 {
    struct unk_func_00303890_1 *unk_00;
    struct unk_func_00303890_1 *unk_04;
    u8 pad_08[4];
    u32 unk_0C;
} unk_func_00303890_1;

struct unk_func_00303890_0 {
    unk_func_00303890_1 *unk_00;
    u8 unk_04;
    unk_func_00303890_0(unk_func_00303890_1 *a, const u8 &b) : unk_00(a), unk_04(b) {}
};

extern "C" {
unk_func_00303890_1 *func_00303DF0(void *, void *, bool, bool, const u32 &);
extern u8 D_0035F7A0;
extern u8 D_0035F7A4;

unk_func_00303890_0 func_00303890(unk_func_00303890_1 *arg1, const u32 &arg2) {
    unk_func_00303890_1 *found;
    bool left;
    unk_func_00303890_1 *parent;
    unk_func_00303890_1 *node;
    bool all;

    left = true;
    parent = (unk_func_00303890_1 *)&arg1->unk_04;
    node = arg1->unk_04;
    found = 0;
    all = true;
    while (node != 0) {
        parent = node;
        if (arg2 < node->unk_0C) {
            node = node->unk_00;
            left = true;
        } else {
            found = node;
            node = node->unk_04;
            left = false;
            all = false;
        }
    }
    if (found == 0 || found->unk_0C < arg2) {
        return unk_func_00303890_0(func_00303DF0(arg1, parent, left, all, arg2), D_0035F7A0);
    }
    return unk_func_00303890_0(found, D_0035F7A4);
}
}
