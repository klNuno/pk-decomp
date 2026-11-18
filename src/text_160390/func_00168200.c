/* profile: opt_300 */
#include "common.h"

s32 func_00168200(s32 arg0) {
    if (arg0 > 0x2000) {
        return 0xD;
    }
    if (arg0 > 0x1000) {
        return 0xC;
    }
    if (arg0 > 0x800) {
        return 0xB;
    }
    if (arg0 > 0x400) {
        return 0xA;
    }
    if (arg0 > 0x200) {
        return 9;
    }
    if (arg0 > 0x100) {
        return 8;
    }
    if (arg0 > 0x80) {
        return 7;
    }
    if (arg0 > 0x40) {
        return 6;
    }
    if (arg0 > 0x20) {
        return 5;
    }
    if (arg0 > 0x10) {
        return 4;
    }
    if (arg0 > 8) {
        return 3;
    }
    if (arg0 > 4) {
        return 2;
    }
    return arg0 > 2;
}
