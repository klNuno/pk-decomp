/* profile: o0 */
#include "common.h"

s32 func_001E6250(void *, s32);

void func_001D6850(void *arg0, s32 *arg1, u8 *arg2, u8 *arg3)
{
    *arg1 = 1;
    *arg2 = 0;
    *arg3 = 0;
    if (func_001E6250(arg0, 'S') || func_001E6250(arg0, 's')) {
        *arg2 = 1;
    } else if (func_001E6250(arg0, 'D') || func_001E6250(arg0, 'd')) {
        *arg2 = 0;
    }
    if (func_001E6250(arg0, 'O') || func_001E6250(arg0, 'o')) {
        *arg3 = 1;
    } else if (func_001E6250(arg0, 'N') || func_001E6250(arg0, 'n')) {
        *arg3 = 0;
    }
    if (func_001E6250(arg0, 'C') || func_001E6250(arg0, 'c')) {
        *arg1 = 1;
    } else if (func_001E6250(arg0, 'W') || func_001E6250(arg0, 'w')) {
        *arg1 = 2;
    } else if (func_001E6250(arg0, 'L') || func_001E6250(arg0, 'l')) {
        *arg1 = 3;
    } else if (func_001E6250(arg0, 'F') || func_001E6250(arg0, 'f')) {
        *arg1 = 4;
    } else if (func_001E6250(arg0, 'V') || func_001E6250(arg0, 'v')) {
        *arg1 = 5;
    } else if (func_001E6250(arg0, 'T') || func_001E6250(arg0, 't')) {
        *arg1 = 6;
    }
}
