/* profile: o0_301 */
#include "common.h"

s32 func_002CE410(s32);
extern s32 D_0035F54C;
extern s32 D_0035F550;
extern s32 D_0035F554;
extern s32 D_0035F558;
extern s32 D_0035F55C;

s32 *func_002572B0(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 v;
    s32 type;

    type = arg1[-2];
    switch (type) {
    case 0x19C:
        v = D_0035F55C;
        break;
    case 0x19A:
        v = D_0035F554;
        break;
    case 0x198:
        v = D_0035F550;
        break;
    case 0x199:
        v = D_0035F54C;
        break;
    case 0x19B:
        v = D_0035F558;
        break;
    default:
        v = -1;
        break;
    }
    arg2[0] = func_002CE410(v);
    arg2[3] = 6;
    return arg1;
}
