/* profile: o0_301 */
#include "common.h"

u32 func_0011D3F8(char *);
s32 func_0011D738(char *, char *, u32);
char *func_0027BC20(char *);
char *strcpy(char *, char *);
extern char D_0034BD18[];

s32 fn_iMakeSaveNameFromFileName(char *arg0, char *arg1) {
    char sp10[0x40];
    *arg0 = 0;
    strcpy(sp10, func_0027BC20(D_0034BD18));
    if (func_0011D738(arg1, sp10, func_0011D3F8(sp10)) == 0) {
        strcpy(arg0, arg1 + func_0011D3F8(sp10));
        return 1;
    }
    return 0;
}
