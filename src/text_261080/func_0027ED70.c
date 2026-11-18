/* profile: o0_301 */
#include "common.h"

extern s32 D_003603B8;
s32 func_0027D660(void);
void func_0027EE10(s32);
void func_0011B418(char *);
extern char D_0034F4A0[];
extern char D_0034F4B0[];

s32 func_0027ED70(void) {
    s32 temp;

    if (D_003603B8 == 1) {
        return 0;
    }
    temp = func_0027D660();
    D_003603B8 = 1;
    func_0027EE10(0);
    if (temp == 1) {
        func_0011B418(D_0034F4A0);
        return 1;
    }
    func_0011B418(D_0034F4B0);
    return 0;
}
