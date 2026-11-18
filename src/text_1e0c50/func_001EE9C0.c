/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001EE9C0_0 {
    struct unk_func_001EE9C0_0 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001EE9C0_0;

s32 func_001F0BD0();

s32 func_001EE9C0(unk_func_001EE9C0_0 **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    unk_func_001EE9C0_0 *a;
    unk_func_001EE9C0_0 *b;
    s32 i;
    unk_func_001EE9C0_0 *a_next;
    unk_func_001EE9C0_0 *b_next;
    unk_func_001EE9C0_0 *a_first;
    unk_func_001EE9C0_0 *b_first;

    if (arg0 != NULL && arg1 != 0 && arg2 != 0) {
        for (i = 0, a_first = a = *arg0; a != NULL; i++, a_next = a = a->unk_00) {
            if (a->unk_0C == arg2) {
                break;
            }
        }
        if (a != NULL) {
            for (i = 0, b_first = b = *arg0; b != NULL; i++, b_next = b = b->unk_00) {
                if (b->unk_0C == arg1) {
                    return func_001F0BD0(b, a, arg3, arg4);
                }
            }
        }
    }
    return -1;
}
