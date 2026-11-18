/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00206B90_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00206B90_0;

s32 *fn_p_stEvalTree(s32, s32 *, unk_func_00206B90_0 *);
char *fn_szGetStringFromTextOrStringParam(unk_func_00206B90_0 *);
s32 func_001D29A0(char *);
u8 func_001D2940(s32);

s32 *func_00206B90(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 obj;
    char *str;
    s32 type;
    unk_func_00206B90_0 param;

    switch (type = arg1[-2]) {
    case 0x93:
        arg1 = fn_p_stEvalTree(arg0, arg1, &param);
        str = fn_szGetStringFromTextOrStringParam(&param);
        obj = func_001D29A0(str);
        if (obj != 0) {
            *arg2 = func_001D2940(obj);
        } else {
            *arg2 = 0;
        }
        return arg1;
    default:
        *arg2 = 0;
        return arg1;
    }
}
