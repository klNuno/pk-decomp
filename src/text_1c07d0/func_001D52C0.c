/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001D52C0_2 {
    struct unk_func_001D52C0_2 *unk_00;
    u8 pad_04[8];
    s32 *unk_0C;
    u8 pad_10[8];
    s32 unk_18;
} unk_func_001D52C0_2;

typedef struct {
    u8 pad_00[0x18];
    s32 *unk_18;
} unk_func_001D52C0_1;

typedef struct {
    u8 pad_00[0x14];
    unk_func_001D52C0_1 *unk_14;
    u8 pad_18[0x140];
    unk_func_001D52C0_2 *unk_158;
} unk_func_001D52C0_0;

unk_func_001D52C0_0 **HIE_fn_hGetSuperObjectObject(s32);

s32 func_001D52C0(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_001D52C0_0 *obj;
    s32 *target;
    s32 i;
    unk_func_001D52C0_2 *cur;
    unk_func_001D52C0_2 *next;
    s32 mask;
    unk_func_001D52C0_2 *x1;
    unk_func_001D52C0_2 *x2;

    obj = *HIE_fn_hGetSuperObjectObject(arg0);
    i = 0;
    target = &obj->unk_14->unk_18[arg1];
    for (i = 0, i = 0, cur = obj->unk_158, x1 = next = cur ? cur->unk_00 : NULL;
         cur != NULL;
         i++, cur = next, x2 = next = cur ? cur->unk_00 : NULL, (void)x2) {
        if (cur->unk_0C == target) {
            mask = 1 << arg2;
            if (cur->unk_18 & mask) {
                return 1;
            }
            return 0;
        }
    }
    return 0;
}
