/* profile: o0 */
#include "common.h"

typedef struct unk_func_001EABC0_0 {
    f32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001EABC0_0;

f32 *func_001EABC0(s32 arg0, f32 *arg1, unk_func_001EABC0_0 *arg2) {
    arg0 = arg0;
    arg2->unk_00 = *arg1;
    arg2->unk_0C = 8;
    return arg1 += 2;
}
