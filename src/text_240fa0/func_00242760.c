/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00242760_0 {
    s32 unk_00[4];
} unk_func_00242760_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00242760_0 *);
char *fn_szGetStringFromTextOrStringParam(unk_func_00242760_0 *);
void func_001DB950(char *);
extern s32 D_0035FF1C;

s32 *func_00242760(s32 arg0, s32 *arg1) {
    s32 type;
    char *str;
    unk_func_00242760_0 sp30;
    type = arg1[-2];
    switch (type) {
    case 0x2B8:
        arg1 = fn_p_stEvalTree(arg0, arg1, &sp30);
        str = fn_szGetStringFromTextOrStringParam(&sp30);
        func_001DB950(str);
        D_0035FF1C = 1;
        return arg1;
    default:
        return arg1;
    }
}
