/* profile: o0_301 */
#include "common.h"

typedef struct unk_fn_p_stMainActorKeyWord_0 {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_fn_p_stMainActorKeyWord_0;

s32 HIE_fn_hGetSuperObjectObject(s32);
s32 func_001971C0(s32);
s32 func_001A7D60(s32);
s32 func_001A7D80();

s32 fn_p_stMainActorKeyWord(s32 arg0, s32 arg1, unk_fn_p_stMainActorKeyWord_0 *arg2) {
    s32 obj;
    if (func_001971C0(func_001A7D60(func_001A7D80())) != 2) {
        obj = 0;
    } else {
        obj = HIE_fn_hGetSuperObjectObject(func_001A7D60(func_001A7D80()));
    }
    arg2->unk_00 = obj;
    arg2->unk_0C = 0xB;
    return arg1;
}
