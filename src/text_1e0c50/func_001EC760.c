/* profile: o0_p */
#include "common.h"

typedef struct {
    s32 unk_00;
} unk_func_001EC760_0;

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
    s32 *unk_04;
} unk_func_001EC760_1;

unk_func_001EC760_0 *HIE_fn_hGetSuperObjectObject(s32);
void *func_00199130(s32);

s8 func_001EC760(unk_func_001EC760_1 *arg0, void *arg1) {
    u8 i;

    if (arg0->unk_00 == 0) {
        return 0;
    }
    for (i = 0; i < arg0->unk_00 && func_00199130(HIE_fn_hGetSuperObjectObject(arg0->unk_04[i])->unk_00) != arg1; i++) {
    }
    return i < arg0->unk_00;
}
