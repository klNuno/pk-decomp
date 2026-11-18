/* profile: o0 */
#include "common.h"

typedef struct unk_func_001EB0E0_0 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_001EB0E0_0;

u8 *func_001EB0E0(void *arg0, u8 *arg1, unk_func_001EB0E0_0 *arg2) {
    arg0 = arg0;
    arg2->unk_00 = 0;
    arg2->unk_0C = 0x14;
    return arg1 += 8;
}
