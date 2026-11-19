/* profile: o0_301_p */
#include "common.h"

s64 func_00116508(char *);
char *func_0011EAC8(char *, char *);
extern char D_0034B4A0[];
extern f32 D_005AD0C0[];

void func_001AE9F0(char *arg0) {
    char *p;
    s32 i;

    p = func_0011EAC8(arg0, D_0034B4A0);
    D_005AD0C0[0] = (f32)func_00116508(p) / 1000.0f;
    i = 1;
    while (p != NULL && i < 256) {
        p = func_0011EAC8(NULL, D_0034B4A0);
        if (p != NULL) {
            D_005AD0C0[i++] = (f32)func_00116508(p) / 1000.0f;
            p[-1] = ':';
        }
    }
}
