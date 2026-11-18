/* profile: o0_301 */
#include "common.h"

extern char D_00349F80[];
extern char D_00349FA0[];
extern char D_00349FC0[];
extern s32 D_0035FEE0;
extern s32 D_0035FEE4;
extern s32 D_0035FEE8;
extern s8 D_0035FEEC;
extern s8 D_0035FEF0;
extern s32 D_0035FF28;
extern s32 D_0035FF30;

s32 func_00133410(s32, s32, s32);
void func_0019AD50(s32);
char *strcpy(char *, const char *);
s32 func_0019ED20(s32 *);
void func_0019B510(s32, s32);
void func_0011CBB0(char *, char *, s32);

void func_0019EF10(void) {
    char buf[0x6C];
    s32 sp7C;

    D_0035FF28++;
    if (D_0035FF28 < D_0035FEE8) {
        return;
    }
    D_0035FEE8 = func_00133410(0, D_0035FEE4, D_0035FEE0);
    D_0035FF28 = 0;
    D_0035FF30++;
    if (D_0035FEEC == 3 || (D_0035FEF0 && func_00133410(0, 1, 100) > 40)) {
        func_0019AD50(8);
        strcpy(buf, D_00349F80);
        return;
    }
    switch (func_0019ED20(&sp7C)) {
    case 0:
        func_0019B510(sp7C, 1);
        func_0011CBB0(buf, D_00349FA0, sp7C);
        break;
    case 1:
        func_0019AD50(2);
        strcpy(buf, D_00349FC0);
        break;
    }
}
