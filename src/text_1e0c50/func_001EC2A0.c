/* profile: o0_p */
#include "common.h"

void func_0011B418(char *);
u8 func_001EBEC0(s32, s32);
u8 func_001EC0C0(s32, s32);
void func_001EC210(s32);
extern char D_0034D8A0[];
extern s32 D_0035FEB4;
extern u8 D_00360138;
extern s32 D_003601A4;

u8 func_001EC2A0(s32 arg0, s32 arg1) {
    u8 temp;
    u8 ret;

    ret = 0;
    do {
        D_00360138 = 0;
        temp = func_001EBEC0(arg0, arg1);
        if ((temp & 8) != 8) {
            if ((temp & 1) == 1 || D_00360138) {
                func_001EC210(arg1);
            } else {
                temp = func_001EC0C0(arg0, arg1);
            }
        }
        ret |= D_00360138;
    } while ((temp & 8) == 8 && (temp & 1) != 1 && D_0035FEB4 == 0);
    if (D_0035FEB4 != 0) {
        D_0035FEB4 = 0;
        func_0011B418(D_0034D8A0);
        D_003601A4 = 0;
    }
    return ret;
}
