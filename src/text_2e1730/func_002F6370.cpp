#include "common.h"

typedef struct unk_func_002F6370_0 {
    struct unk_func_002F6370_0 *unk_00;
    struct unk_func_002F6370_0 *unk_04;
    u8 pad_08[4];
    u32 unk_0C;
} unk_func_002F6370_0;

struct unk_func_002F6370_1 {
    unk_func_002F6370_0 *unk_00;
    unk_func_002F6370_1(unk_func_002F6370_0 *a) : unk_00(a) {}
};

extern "C" {
unk_func_002F6370_0 *func_002F6660(void *, void *, bool, bool, const u32 &);

void func_002F6370(unk_func_002F6370_1 *arg0, unk_func_002F6370_0 *arg1, const u32 &arg2) {
    bool left = true;
    unk_func_002F6370_0 *parent = (unk_func_002F6370_0 *)&arg1->unk_04;
    unk_func_002F6370_0 *node = arg1->unk_04;
    bool all = true;

    while (node != 0) {
        parent = node;
        if (arg2 < node->unk_0C) {
            node = node->unk_00;
            left = true;
        } else {
            node = node->unk_04;
            left = false;
            all = false;
        }
    }
    arg0->unk_00 = func_002F6660(arg1, parent, left, all, arg2);
}
}
