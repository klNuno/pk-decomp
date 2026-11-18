/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_0[0x4];
    s32 unk_4;
} unk_func_0021F360_0;

typedef struct {
    s32 unk_0;
    u8 pad_4[0x8];
    s32 unk_C;
} unk_func_0021F360_1;

s32 fn_p_stEvalTree(s32, s32, unk_func_0021F360_0 **);
s32 fn_h_StandardGameGetSuperObject(s32);
u8 func_001A95B0();
u8 func_001A95C0();
u8 func_001A9770(s32);

s32 func_0021F360(s32 arg0, s32 arg1, unk_func_0021F360_1 *arg2) {
    unk_func_0021F360_0 *temp[4];
    unk_func_0021F360_0 *temp3;
    s32 temp2;

    temp2 = ((s32 *)arg1)[-2];
    switch (temp2) {
    case 0x62:
        arg2->unk_0 = func_001A95B0();
        arg2->unk_C = 6;
        break;
    case 0x63:
        arg2->unk_0 = func_001A95C0();
        arg2->unk_C = 6;
        break;
    case 0x64:
        arg1 = fn_p_stEvalTree(arg0, arg1, temp);
        temp3 = temp[0];
        arg2->unk_0 = func_001A9770(fn_h_StandardGameGetSuperObject(temp3->unk_4));
        arg2->unk_C = 6;
        break;
    }
    return arg1;
}
