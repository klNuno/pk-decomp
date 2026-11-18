/* profile: o0_301 */
#include "common.h"

void func_0011CBB0(char *, char *, ...);
extern char D_0034EBE0[];
extern char D_0034EBE8[];
extern char D_0034EBF0[];
extern s32 D_0035F5DC;
extern char D_005FFA40[];
extern char D_007A7E60[];

char *func_00274010(void) {
    char *var_s0;

    if (D_0035F5DC != 0) {
        var_s0 = D_005FFA40;
    } else {
        var_s0 = D_0034EBE0;
    }
    func_0011CBB0(D_007A7E60, D_0034EBE8, var_s0, D_0034EBF0);
    return D_007A7E60;
}
