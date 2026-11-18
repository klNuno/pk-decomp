/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001F09C0_0 {
    struct unk_func_001F09C0_0 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
    s32 unk_10;
} unk_func_001F09C0_0;

s32 func_001F09C0(unk_func_001F09C0_0 **arg0, s32 arg1, s32 *arg2) {
    unk_func_001F09C0_0 *temp;
    s32 i;
    unk_func_001F09C0_0 *prev;
    unk_func_001F09C0_0 *first;

    i = 0;
    temp = *arg0;
    first = temp;
    while (i < arg1) {
        i++;
        temp = temp->unk_00;
        prev = temp;
    }
    *arg2 = temp->unk_10;
    return temp->unk_0C;
}
