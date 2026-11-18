#include "common.h"

typedef struct unk_func_002F6010_0 {
    u32 unk_00;
    u32 unk_04;
} unk_func_002F6010_0;

typedef struct unk_func_002F6010_1 {
    struct unk_func_002F6010_1 *unk_00;
    struct unk_func_002F6010_1 *unk_04;
    u8 pad_08[0x4];
    unk_func_002F6010_0 unk_0C;
} unk_func_002F6010_1;

typedef struct unk_func_002F6010_2 {
    u8 pad_00[0x4];
    unk_func_002F6010_1 *unk_04;
} unk_func_002F6010_2;

struct unk_func_002F6010_3 {
    unk_func_002F6010_1 *unk_00;
    u8 unk_04;
    unk_func_002F6010_3(unk_func_002F6010_1 *a, const u8 &b) : unk_00(a), unk_04(b) {}
};

inline bool func_002F6010_inl(const unk_func_002F6010_0 &a, const unk_func_002F6010_0 &b) {
    if (b.unk_00 == a.unk_00) {
        return a.unk_04 < b.unk_04;
    }
    return a.unk_00 < b.unk_00;
}

extern "C" {
unk_func_002F6010_1 *func_002F6540(unk_func_002F6010_2 *, unk_func_002F6010_1 *, bool, bool, const unk_func_002F6010_0 &);
extern u8 D_0035F750;
extern u8 D_0035F754;

unk_func_002F6010_3 func_002F6010(unk_func_002F6010_2 *arg0, const unk_func_002F6010_0 *arg1) {
    unk_func_002F6010_1 *j = 0;
    bool comp = true;
    bool leftmost = true;
    unk_func_002F6010_1 *y = (unk_func_002F6010_1 *)&arg0->unk_04;
    unk_func_002F6010_1 *x = arg0->unk_04;

    while (x != 0) {
        y = x;
        if (func_002F6010_inl(*arg1, x->unk_0C)) {
            x = x->unk_00;
            comp = true;
        } else {
            j = x;
            x = x->unk_04;
            comp = false;
            leftmost = false;
        }
    }
    if (j == 0 || func_002F6010_inl(j->unk_0C, *arg1)) {
        return unk_func_002F6010_3(func_002F6540(arg0, y, comp, leftmost, *arg1), D_0035F750);
    }
    return unk_func_002F6010_3(j, D_0035F754);
}
}
