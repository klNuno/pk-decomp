/* profile: o0 */
#include "common.h"

void func_0019B260(s32 *arg0, s32 arg1, u8 arg2) {
    if (arg1 == 0) {
        if (arg2 == 1) {
            *arg0 |= -1;
        } else {
            *arg0 &= 0;
        }
    } else if (arg1 == 2) {
        if (arg2 == 1) {
            *arg0 |= 1;
        } else {
            *arg0 &= ~1;
        }
    } else if (arg1 == 1) {
        if (arg2 == 1) {
            *arg0 |= 2;
        } else {
            *arg0 &= ~2;
        }
    } else if (arg1 == 3) {
        if (arg2 == 0) {
            *arg0 |= 0x8000;
        } else {
            *arg0 &= ~0x8000;
        }
    } else if (arg1 == 4) {
        if (arg2 == 1) {
            *arg0 |= 0x1000;
        } else {
            *arg0 &= ~0x1000;
        }
    } else if (arg1 == 5) {
        if (arg2 == 0) {
            *arg0 |= 4;
        } else {
            *arg0 &= ~4;
        }
    } else if (arg1 == 6) {
        if (arg2 == 0) {
            *arg0 |= 0x400000;
        } else {
            *arg0 &= ~0x400000;
        }
    }
}
