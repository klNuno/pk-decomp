/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_fn_p_stIfDebug_0;

u8 *func_002206F0(u8 *, u8 *);
extern s8 D_0035F59C;

u8 *fn_p_stIfDebug(s32 arg0, u8 *arg1, unk_fn_p_stIfDebug_0 *arg2) {
    s32 type;

    type = *(s32 *)(arg1 - 8);
    arg0 = arg0;
    arg2 = arg2;
    if (type == 0xE && D_0035F59C) {
        arg1 = func_002206F0(arg1 - 8, arg1 - 8);
    }
    arg2->unk_00 = 0;
    arg2->unk_0C = 0x14;
    return arg1;
}
