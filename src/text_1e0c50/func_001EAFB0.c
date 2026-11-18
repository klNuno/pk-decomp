/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_001EAFB0_0;

s32 *func_001EAFB0(s32 arg0, s32 *arg1, unk_func_001EAFB0_0 *arg2) {
    arg0 = arg0;
    arg2->unk_00 = *arg1;
    arg2->unk_0C = 0x1C;
    return arg1 += 2;
}
