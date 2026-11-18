#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0x160];
    u8 unk_170[4];
} unk_func_00138800_0;

s32 func_00138680(unk_func_00138800_0 *);
extern s32 D_0035F92C;

u8 *func_00138800(unk_func_00138800_0 *arg0) {
    s32 t;

    if (!((arg0->unk_0C & 2) ? 1 : 0)) {
        t = func_00138680(arg0);
        if (t != D_0035F92C) {
            D_0035F92C = t;
        }
    }
    return arg0->unk_170;
}
