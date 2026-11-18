/* profile: o0 */
#include "common.h"

typedef struct unk_func_001EAF10_0 {
    u32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001EAF10_0;

u16 *func_001EAF10(s32 arg0, u16 *arg1, unk_func_001EAF10_0 *arg2) {
    arg0 = arg0;
    arg2->unk_00 = *arg1;
    arg2->unk_0C = 0x1A;
    return arg1 += 4;
}
