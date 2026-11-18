/* profile: o0_301 */
#include "common.h"

s32 SVG_fn_bGetActiveVms();
void VMS_lGetVmsCommentFromFile();
s32 fn_iMakeSaveNameFromFileName();
void func_0011D8F0();
char *func_0027BC20();
s32 strcmp();
char *strcpy();
extern char D_0034BD20[];
extern char D_0034BD30[];
extern s32 D_0034F480[];

void fn_vMakeSlotNameFromFileName(char *arg0, char *arg1) {
    char sp20[0x11];
    s32 temp_s0;

    if ((temp_s0 = SVG_fn_bGetActiveVms()) == -1) {
        strcpy(arg0, D_0034BD20);
        return;
    }
    arg0[0] = 0;
    if (strcmp(arg1, func_0027BC20(D_0034BD30)) != 0 && fn_iMakeSaveNameFromFileName(arg0, arg1) != 0) {
        sp20[0x10] = 0;
        VMS_lGetVmsCommentFromFile(D_0034F480[temp_s0], arg1, sp20);
        arg0[3] = ' ';
        func_0011D8F0(arg0 + 4, sp20, 4);
        arg0[9] = 0;
    }
}
