#include "common.h"

typedef struct unk_func_00132F00_1 {
    struct unk_func_00132F00_1 *unk_00;
    s32 unk_04;
    u8 pad_08[0x8];
    u16 unk_10;
} unk_func_00132F00_1;

typedef struct unk_func_00132F00_0 {
    s32 unk_00;
    unk_func_00132F00_1 *unk_04;
    unk_func_00132F00_1 *unk_08;
} unk_func_00132F00_0;

extern "C" s32 func_00133030(s32);

extern "C" bool func_00132F00(unk_func_00132F00_0 *arg0, s32 arg1, s32 arg2) {
    unk_func_00132F00_1 *prev;
    unk_func_00132F00_1 *p;
    bool found;

    found = false;
    p = arg0->unk_04;
    prev = 0;
    arg2 = (u16)func_00133030(arg2);
    while (p != 0) {
        if (p->unk_04 == arg1 && (p->unk_10 & 0x3FF) == (u16)arg2) {
            found = true;
            break;
        }
        prev = p;
        p = p->unk_00;
    }
    if (found) {
        if (prev != 0) {
            prev->unk_00 = p->unk_00;
        } else {
            arg0->unk_04 = p->unk_00;
        }
        if (p->unk_00 == 0) {
            arg0->unk_08 = prev;
        }
        arg0->unk_00--;
    }
    return found;
}
