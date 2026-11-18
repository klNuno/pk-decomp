/* profile: o0 */
#include "common.h"

typedef struct unk_fn_p_stNoSoundEventKeyWord_0 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_fn_p_stNoSoundEventKeyWord_0;

s32 fn_p_stNoSoundEventKeyWord(s32 arg0, s32 arg1, unk_fn_p_stNoSoundEventKeyWord_0 *arg2) {
    arg2->unk_00 = 0;
    arg2->unk_0C = 0x21;
    return arg1;
}
