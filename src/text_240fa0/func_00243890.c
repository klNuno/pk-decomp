/* profile: o0 */
#include "common.h"

extern s32 D_0035FB7C;

s32 *func_00243890(s32 arg0, s32 *arg1) {
    s32 temp;

    temp = arg1[-2];
    switch (temp) {
    case 0x316:
        D_0035FB7C = 1;
        break;
    case 0x317:
        D_0035FB7C = 0;
        break;
    }
    return arg1;
}
