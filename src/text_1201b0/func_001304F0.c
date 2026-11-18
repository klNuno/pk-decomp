#include "common.h"

typedef struct unk_func_001304F0_0 {
    s32 unk_00;
    struct unk_func_001304F0_0 *unk_04;
} unk_func_001304F0_0;

void func_00165C90(s32, s32);

void func_001304F0(s32 arg0, u8 *arg1) {
    unk_func_001304F0_0 *p;
    unk_func_001304F0_0 *prev;

    prev = NULL;
    for (p = *(unk_func_001304F0_0 **)(arg1 + 0x14); p != NULL; p = p->unk_04) {
        if (p == prev) {
            break;
        }
        func_00165C90(arg0, p->unk_00);
        prev = p;
    }
}
