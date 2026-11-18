/* profile: o0 */
#include "common.h"

typedef struct unk_fn_p_stMeKeyWord_0 {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_fn_p_stMeKeyWord_0;

s32 func_001971C0();
s32 HIE_fn_hGetSuperObjectObject();

s32 fn_p_stMeKeyWord(s32 arg0, s32 arg1, unk_fn_p_stMeKeyWord_0 *arg2) {
    s32 temp;

    if (func_001971C0(arg0) != 2) {
        temp = 0;
    } else {
        temp = HIE_fn_hGetSuperObjectObject(arg0);
    }
    arg2->unk_00 = temp;
    arg2->unk_0C = 0xB;
    return arg1;
}
