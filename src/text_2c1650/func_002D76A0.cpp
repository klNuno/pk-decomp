#include "common.h"

typedef struct unk_func_002D76A0_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
} unk_func_002D76A0_0;

static inline bool func_002D76A0_inl(unk_func_002D76A0_0 *const &a, unk_func_002D76A0_0 *const &b) {
    return a != b;
}

extern "C" {
unk_func_002D76A0_0 **func_002CF810(s32);
unk_func_002D76A0_0 *func_002CF7D0(s32);
void func_002CFEF0(unk_func_002D76A0_0 **);
s32 func_002D8230(s32);
void func_002D77A0(s32, s32);
void func_002D76A0(s32 arg0);

extern s32 D_007BE940[];

void func_002D76A0(s32 arg0) {
    unk_func_002D76A0_0 *it;
    u32 n;
    u32 i;

    n = 0;
    for (it = *func_002CF810(arg0); func_002D76A0_inl(it, func_002CF7D0(arg0)); func_002CFEF0(&it)) {
        if (func_002D8230(it->unk_10) == 0) {
            D_007BE940[n++] = it->unk_0C;
        }
        if (n == 100) {
            break;
        }
    }
    i = 0;
    goto check;
loop:
    func_002D77A0(arg0, D_007BE940[i]);
    i++;
check:
    if (i < n) {
        goto loop;
    }
    if (n == 50) {
        func_002D76A0(arg0);
    }
}
}
