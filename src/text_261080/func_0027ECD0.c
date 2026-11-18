/* profile: o0 */
#include "common.h"

typedef struct unk_func_0027ECD0_0 {
    u8 pad_00[0x20];
    u8 unk_20[0x20];
} unk_func_0027ECD0_0;

s32 func_0027EB60(s32, s32, s32, s32, unk_func_0027ECD0_0 *);
void *memcpy(void *, const void *, u32);

s32 func_0027ECD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4) {
    s32 temp = -1;
    unk_func_0027ECD0_0 sp20;

    if ((temp = func_0027EB60(arg0, arg1, arg2, arg3, &sp20)) > 0) {
        if (arg4 != NULL) {
            arg4[0x20] = 0;
            memcpy(arg4, sp20.unk_20, 0x20);
        }
        return temp;
    }
    return 0;
}
