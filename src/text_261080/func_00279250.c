#include "common.h"

typedef struct {
    u8 pad_00[0x28004];
    s32 unk_28004;
} unk_func_00279250_0;

s32 func_00279250(unk_func_00279250_0 *arg0, s32 arg1) {
    arg1 = (arg1 < arg0->unk_28004) ? arg1 : arg0->unk_28004;
    arg0->unk_28004 -= arg1;
    return arg1;
}
