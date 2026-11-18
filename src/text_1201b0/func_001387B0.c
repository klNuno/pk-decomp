#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_001387B0_0;

s32 func_00138680();
extern s32 D_0035F930;

static inline s32 func_001387B0_inl(unk_func_001387B0_0 *arg0) {
    return (arg0->unk_0C & 4) ? 1 : 0;
}

u8 *func_001387B0(unk_func_001387B0_0 *arg0) {
    s32 temp;

    if (func_001387B0_inl(arg0) == 0) {
        temp = func_00138680();
        if (temp != D_0035F930) {
            D_0035F930 = temp;
        }
    }
    return (u8 *)arg0+0x200;
}
