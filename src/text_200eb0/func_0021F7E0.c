/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_0021F7E0_0;

s32 fn_p_stEvalTree(s32, s32, unk_func_0021F7E0_0 *);
char *fn_szGetStringFromTextOrStringParam(unk_func_0021F7E0_0 *);
u8 func_0015DDD0(char *);

s32 func_0021F7E0(s32 arg0, s32 arg1, unk_func_0021F7E0_0 *arg2) {
    unk_func_0021F7E0_0 sp30;
    char *temp_s0;
    s32 temp_s1;

    temp_s1 = ((s32 *)arg1)[-2];
    temp_s0 = NULL;
    switch (temp_s1) {
    case 0x66:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
        temp_s0 = fn_szGetStringFromTextOrStringParam(&sp30);
        arg2->unk_00 = func_0015DDD0(temp_s0);
        arg2->unk_0C = 6;
        break;
    }
    return arg1;
}
