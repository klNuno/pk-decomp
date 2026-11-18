/* profile: o0_301 */
#include "common.h"

s32 fn_p_stEvalTree(s32, s32, u8 *);
char *fn_szGetStringFromTextOrStringParam(u8 *);
s64 func_00116508(char *);
char *func_0019B0A0();
s32 func_0019B0E0();
char *func_001E6250(char *, s32);
char *strcpy(char *, char *);

s32 func_002394F0(s32 arg0, s32 arg1) {
    char *str;
    s32 def;
    char *p;
    s32 val;
    char *s4;
    u8 s5;
    char *s6;
    u8 param[0x10];
    char buf[0x30];

    arg1 = fn_p_stEvalTree(arg0, arg1, param);
    str = fn_szGetStringFromTextOrStringParam(param);
    def = func_0019B0E0();
    if (str[0] == '*') {
        strcpy(buf, func_0019B0A0());
        p = func_001E6250(str, '$');
        if (p == NULL || p[1] == '*') {
            val = def;
        } else {
            val = func_00116508(p + 1);
        }
    } else {
        strcpy(buf, str);
        p = func_001E6250(buf, '$');
        if (p == NULL) {
            val = 0;
        } else {
            *p = 0;
            if (p[1] == '*') {
                val = def;
            } else {
                val = func_00116508(p + 1);
            }
        }
    }
    arg1 = fn_p_stEvalTree(arg0, arg1, param);
    s4 = fn_szGetStringFromTextOrStringParam(param);
    arg1 = fn_p_stEvalTree(arg0, arg1, param);
    s5 = param[0];
    arg1 = fn_p_stEvalTree(arg0, arg1, param);
    s6 = fn_szGetStringFromTextOrStringParam(param);
    return arg1;
}
