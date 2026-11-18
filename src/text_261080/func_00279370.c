#include "common.h"

typedef struct {
    u8 pad_00[0x28000];
    s32 unk_28000;
    s32 unk_28004;
    s32 unk_28008;
} unk_func_00279370_0;

s32 func_00279370(unk_func_00279370_0 *arg0, void **arg1) {
    s32 temp;

    temp = arg0->unk_28008 - arg0->unk_28004;
    if (temp != 0) {
        *arg1 = (u8 *)arg0 + arg0->unk_28000;
    }
    return temp;
}
