/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_fn_p_stNoVMTKeyWord_0;

s32 fn_p_stNoVMTKeyWord(s32, s32 arg1, unk_fn_p_stNoVMTKeyWord_0 *arg2) {
    arg2->unk_00 = 0;
    arg2->unk_0C = 0x27;
    return arg1;
}
