/* profile: o0 */
#include "common.h"

typedef struct unk_func_001E97E0_0 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_001E97E0_0;

s32 func_001E97E0(f32 *arg0, u8 arg1, unk_func_001E97E0_0 *arg2) {
    arg1 = arg1;
    *arg0 = (arg2->unk_0C == 8) ? *(f32 *)&arg2->unk_00 : (f32)arg2->unk_00;
    return 1;
}
