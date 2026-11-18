/* profile: opt_300 */
#include "common.h"

extern s32 D_007B2440[];
extern s32 D_007B2444[];
extern s32 D_007B24E8[];
extern s32 D_007B8EC4[];

s32 func_00288D20(s32 arg0, s32 arg1) {
    s32 temp;
    s32 temp2;

    temp = D_007B8EC4[0];
    temp2 = 7;
    if (D_007B2444[0] & 0xC) {
        temp2 += 2;
    }
    if (D_007B24E8[0] & 0x200) {
        temp2 += 7;
    }
    switch (arg0) {
    case 8:
    case 5:
        arg1 -= 2;
        temp -= 2;
        if (D_007B2440[0] & 0x502) {
            temp -= 2;
        }
        break;
    case 9:
    case 6:
        arg1 -= 2;
        temp -= 2;
        temp2 += 4;
        break;
    }
    return temp2 * ((arg1 + temp - 1) / temp) + 1;
}
