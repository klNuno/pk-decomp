#include "common.h"

extern char D_0035CEE0[];
void *memset(void *, s32, u32);
s32 func_0011D3F8(char *);
void func_0011CED8(char *, char *);
void func_00308770(char *);

s32 func_00308850(char *arg0, char *arg1, char *arg2, u32 arg3) {
    char *r;
    char *t;
    char *p;
    char *q;
    s8 cnt;
    s8 i;
    char *end;

    cnt = 0;
    t = arg1;
    i = 0;
    r = arg0;
    memset(arg2, 0, arg3);
    while (*r++ == *t++) {
        i++;
    }
    p = arg0 + i;
    q = arg1 + i;
    while (*--p == *--q && p > arg0) {
        if (*p == '\\' && *q == '\\') {
            break;
        }
    }
    end = arg0 + func_0011D3F8(arg0);
    while (p++ < end) {
        if (*p == '\\') {
            cnt++;
        }
    }
    while (cnt--) {
        func_0011CED8(arg2, D_0035CEE0);
    }
    func_0011CED8(arg2, q + 1);
    func_00308770(arg2);
    return 0;
}
