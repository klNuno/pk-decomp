/* profile: o0_301 */
#include "common.h"

s32 func_0019AE60();
char *func_001E6250();
char *strcpy(char *, const char *);
extern char D_005AB791[];
extern s32 D_005ABE90[];

void func_0019AF90(char *arg0) {
    char *p;
    s32 hi;
    s32 lo;

    strcpy(D_005AB791, arg0);
    p = func_001E6250(D_005AB791, 0x24);
    if (p == NULL) {
        D_005ABE90[0] = 0;
        return;
    }
    *p++ = 0;
    if (D_005ABE90[0] == 0) {
        hi = 0;
    } else {
        hi = func_0019AE60(p);
    }
    p = func_001E6250(p, 0x24);
    if (p == NULL) {
        lo = 0;
    } else {
        p++;
        lo = func_0019AE60(p);
    }
    D_005ABE90[0] = ((hi & 0xFFFF) << 16) + (lo & 0xFFFF);
}
