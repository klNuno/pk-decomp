/* profile: o0 */
#include "common.h"

typedef struct unk_func_00219230_0 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00219230_0;

s32 func_00219230(s32 arg0, s32 arg1, unk_func_00219230_0 *arg2) {
    arg2->unk_00 = 1;
    arg2->unk_0C = 6;
    return arg1;
}
