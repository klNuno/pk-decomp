/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_0;
    u8 pad_4[0x8];
    s32 unk_C;
} unk_func_001EB050_0;

s32 *func_001EB050(s32 arg0, s32 *arg1, unk_func_001EB050_0 *arg2) {
    arg0 = arg0;
    arg2->unk_0 = *arg1;
    arg2->unk_C = 0x20;
    return arg1 += 2;
}
