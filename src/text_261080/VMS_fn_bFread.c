/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x28];
    s32 unk_30;
    s8 unk_34;
} unk_VMS_fn_bFread_0;

void *memcpy(void *, const void *, u32);

s32 VMS_fn_bFread(void *arg0, s32 arg1, s32 arg2, unk_VMS_fn_bFread_0 *arg3) {
    if (arg3->unk_34 == 0x77) {
        return 0;
    }
    if (!(arg3->unk_00 + arg2 * arg1 < arg3->unk_04)) {
        return 0;
    }
    memcpy(arg0, (void *)(arg3->unk_30 + arg3->unk_00), arg2 * arg1);
    arg3->unk_00 = arg3->unk_00 + arg2 * arg1;
    return 1;
}
