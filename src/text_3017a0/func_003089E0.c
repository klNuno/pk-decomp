#include "common.h"

void memset();
s32 func_0011D3F8();
void func_0011D8F0();
void func_0011CED8();
void func_00308770();

s32 func_003089E0(s8 *arg0, s8 *arg1, s8 *arg2, s32 arg3) {
    s32 n;
    s8 *p;

    n = 0;
    memset(arg2, 0, arg3);
    for (;;) {
        if (*arg1++ != '.') {
            break;
        }
        if (*arg1++ != '.') {
            break;
        }
        if (*arg1 != '\\' && *arg1 != '/') {
            break;
        }
        n = (s8)(n + 1);
        arg1++;
    }
    p = arg0 + func_0011D3F8(arg0);
    do {
        p--;
    } while (*p != '\\' && *p != '/' && p >= arg0);
    if (n != 0) {
        do {
            p--;
            if (*p == '\\' || *p == '/') {
                n = (s8)(n - 1);
            }
        } while (n != 0);
    }
    if (p + 1 < arg0) {
        return -1;
    }
    func_0011D8F0(arg2, arg0, p + 1 - arg0);
    p = arg2 + func_0011D3F8(arg2);
    do {
        p--;
    } while (*p != '\\' && *p != '/' && p >= arg0);
    *++p = 0;
    func_0011CED8(arg2, arg1 - 1);
    func_00308770(arg2);
    return 0;
}
