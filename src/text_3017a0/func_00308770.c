/* profile: opt_300 */
#include "common.h"

s32 func_0011D3F8(char *);
void memmove(char *, char *, s32);

void func_00308770(char *arg0) {
    char *p;
    char *r;
    char *q;
    char c;

    p = arg0;
    while ((c = *p) != 0) {
        if (c == '/') {
            *p = '\\';
        }
        p++;
    }
    q = arg0;
    while ((c = *q) != 0) {
        if (c == '\\') {
            q++;
            r = q;
            while (*r == '\\') {
                r++;
            }
            if (r != q) {
                memmove(q, r, func_0011D3F8(q));
            }
        }
        q++;
    }
}
