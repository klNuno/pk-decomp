#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_001388A0_0;

s32 func_00138680();
extern s32 D_0035F92C;

static inline s32 func_001388A0_inl(unk_func_001388A0_0 *arg0) {
    return (arg0->unk_0C & 2) ? 1 : 0;
}

u8 *func_001388A0(unk_func_001388A0_0 *arg0) {
    s32 temp;

    if (func_001388A0_inl(arg0) == 0) {
        temp = func_00138680();
        if (temp != D_0035F92C) {
            D_0035F92C = temp;
        }
    }
    return (u8 *)arg0;
}
