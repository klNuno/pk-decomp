/* profile: o0_301_p */
#include "common.h"

char *func_0011EAC8(char *, char *);
s64 func_00116508(char *);
extern char D_0034B4A0[];
extern s32 D_0035FFB8;
extern f32 D_005ACFF0[];

void func_001AEB00(char *arg0) {
    char *var_s0;
    s32 var_s1;

    var_s0 = func_0011EAC8(arg0, D_0034B4A0);
    D_005ACFF0[0] = (f32)func_00116508(var_s0) / 1000.0f;
    var_s1 = 1;
    while (var_s0 != NULL && var_s1 < 0x100) {
        var_s0 = func_0011EAC8(NULL, D_0034B4A0);
        if (var_s0 != NULL) {
            D_005ACFF0[var_s1++] = (f32)func_00116508(var_s0) / 1000.0f;
            var_s0[-1] = ':';
        }
    }
    D_0035FFB8 = var_s1;
}
