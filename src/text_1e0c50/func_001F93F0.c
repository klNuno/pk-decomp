/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001F93F0_0 {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001F93F0_0;

s32 HIE_fn_hGetSuperObjectObject(s32);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_001F93F0_0 *);
s32 func_001971C0(s32);
s32 func_001AEC70(s32);
void func_001EDBB0(s32, s32);

s32 *func_001F93F0(s32 arg0, s32 *arg1, unk_func_001F93F0_0 *arg2) {
    s32 id;

    id = arg1[-2];
    arg0 = arg0;
    switch (id) {
    case 0x17E:
        arg1 = fn_p_stEvalTree(arg0, arg1, arg2);
        arg2->unk_00 = func_001AEC70(arg2->unk_00) == 0 ? 0 : (func_001971C0(func_001AEC70(arg2->unk_00)) != 2 ? 0 : HIE_fn_hGetSuperObjectObject(func_001AEC70(arg2->unk_00)));
        arg2->unk_0C = 0xB;
        return arg1;
    case 0x17F:
        arg2->unk_00 = func_001AEC70(0) == 0 ? 0 : (func_001971C0(func_001AEC70(0)) != 2 ? 0 : HIE_fn_hGetSuperObjectObject(func_001AEC70(0)));
        arg2->unk_0C = 0xB;
        return arg1;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }
}
