/* profile: o0_301_p */
#include "common.h"

u8 *fn_p_stEvalTree(void *, u8 *, u32 *);
char *fn_szGetStringFromTextOrStringParam(u32 *);
void func_0011CBB0(char *, const char *, ...);
void func_001E6190(void *, const char *);
char *strcpy(char *, const char *);
extern char D_0034E540[], D_0034E548[], D_0034E550[];

void *func_00235D10(void *arg0, u8 *arg1) {
    u32 spA0[4];
    char spB0[0x108];
    char sp1B8[8];
    s32 sp1C0;
    char *sp1C4;
    u32 sp1C8, sp1CC, sp1D0;
    char *sp1D4, *sp1D8, *sp1DC;
    char *temp0, *temp1;
    u32 temp2, temp3, temp4, temp5, temp6, temp7, temp8;

    sp1C0 = ((s32 *)arg1)[-2];
    switch (sp1C0) {
    case 0x214:
        sp1C4 = NULL;
        temp0 = NULL;
        (void)temp0;
        temp1 = NULL;
        arg1 = fn_p_stEvalTree(arg0, arg1, spA0);
        sp1C4 = fn_szGetStringFromTextOrStringParam(spA0);
        arg1 = fn_p_stEvalTree(arg0, arg1, spA0);
        sp1D0 = sp1C8 = spA0[0];
        sp1CC = sp1C8 / 1000;
        arg1 = fn_p_stEvalTree(arg0, arg1, spA0);
        temp0 = fn_szGetStringFromTextOrStringParam(spA0);
        strcpy(temp0, sp1C4);
        temp2 = sp1CC / 3600;
        temp3 = (sp1CC % 3600) / 60;
        temp4 = sp1CC % 60;
        temp5 = sp1C8 % 1000;
        temp6 = sp1D0 / 372;
        temp7 = (sp1D0 / 31) % 12;
        temp8 = sp1D0 % 31;

        for (temp1 = temp0; *temp1 != 0; temp1++) {
            if (temp1[0] == '%') {
                if ((temp1[1] == 'y' || temp1[1] == 'Y') &&
                    (temp1[2] == 'y' || temp1[2] == 'Y') &&
                    (temp1[3] == 'y' || temp1[3] == 'Y')) {
                    func_0011CBB0(sp1B8, D_0034E540, temp6);
                    temp1[0] = sp1B8[0];
                    temp1[1] = sp1B8[1];
                    temp1[2] = sp1B8[2];
                    temp1[3] = sp1B8[3];
                }
                if (temp1[1] == 'y' || temp1[1] == 'Y') {
                    func_0011CBB0(sp1B8, D_0034E540, temp6);
                    temp1[0] = sp1B8[2];
                    temp1[1] = sp1B8[3];
                } else if (temp1[1] == 'n' || temp1[1] == 'N') {
                    func_0011CBB0(sp1B8, D_0034E548, temp7);
                    temp1[0] = sp1B8[0];
                    temp1[1] = sp1B8[1];
                } else if (temp1[1] == 'd' || temp1[1] == 'D') {
                    func_0011CBB0(sp1B8, D_0034E548, temp8);
                    temp1[0] = sp1B8[0];
                    temp1[1] = sp1B8[1];
                } else if (temp1[1] == 'h' || temp1[1] == 'H') {
                    func_0011CBB0(sp1B8, D_0034E548, temp2);
                    temp1[0] = sp1B8[0];
                    temp1[1] = sp1B8[1];
                } else if (temp1[1] == 'm' || temp1[1] == 'M') {
                    func_0011CBB0(sp1B8, D_0034E548, temp3);
                    temp1[0] = sp1B8[0];
                    temp1[1] = sp1B8[1];
                } else if (temp1[1] == 's' || temp1[1] == 'S') {
                    func_0011CBB0(sp1B8, D_0034E548, temp4);
                    temp1[0] = sp1B8[0];
                    temp1[1] = sp1B8[1];
                } else if ((temp1[1] == 'i' || temp1[1] == 'I') &&
                           (temp1[2] == 'i' || temp1[2] == 'I')) {
                    func_0011CBB0(sp1B8, D_0034E550, temp5);
                    temp1[0] = sp1B8[0];
                    temp1[1] = sp1B8[1];
                    temp1[2] = sp1B8[2];
                } else if (temp1[1] == 'i' || temp1[1] == 'I') {
                    func_0011CBB0(sp1B8, D_0034E548, temp5);
                    temp1[0] = sp1B8[0];
                    temp1[1] = sp1B8[1];
                }
            }
        }
        break;
    case 0x213:
        sp1D4 = NULL;
        sp1D8 = NULL;
        sp1DC = NULL;
        arg1 = fn_p_stEvalTree(arg0, arg1, spA0);
        sp1D4 = fn_szGetStringFromTextOrStringParam(spA0);
        arg1 = fn_p_stEvalTree(arg0, arg1, spA0);
        sp1D8 = fn_szGetStringFromTextOrStringParam(spA0);
        arg1 = fn_p_stEvalTree(arg0, arg1, spA0);
        sp1DC = fn_szGetStringFromTextOrStringParam(spA0);
        strcpy(spB0, sp1D4);
        func_001E6190((void *)spB0, sp1D8);
        strcpy(sp1DC, spB0);
        break;
    }
    return arg1;
}
