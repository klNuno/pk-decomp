/* profile: opt_300 */
#include "common.h"

extern s32 D_0035F65C;
extern s32 D_0035F660;
extern s32 D_003604B8;
extern s32 D_003604BC;
extern s32 D_003604C0;
extern s32 D_003604C4;

void func_002CC950(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg2 >= 0x280) {
        D_0035F65C = 0x280;
    } else if (arg2 >= 0x200) {
        D_0035F65C = 0x200;
    } else if (arg2 >= 0x140) {
        D_0035F65C = 0x140;
    } else {
        D_0035F65C = 0x100;
    }
    if (arg3 >= 0x240) {
        D_0035F660 = 0x240;
    } else if (arg3 >= 0x200) {
        D_0035F660 = 0x200;
    } else if (arg3 >= 0x1C0) {
        D_0035F660 = 0x1C0;
    } else if (arg3 >= 0x120) {
        D_0035F660 = 0x120;
    } else if (arg3 >= 0x100) {
        D_0035F660 = 0x100;
    } else {
        D_0035F660 = 0xE0;
    }
    if (arg0 >= 0x280) {
        D_003604BC = 0x280;
        D_003604C4 = 10;
    } else if (arg0 >= 0x200) {
        D_003604BC = 0x200;
        D_003604C4 = 9;
    } else if (arg0 >= 0x140) {
        D_003604BC = 0x140;
        D_003604C4 = 9;
    } else if (arg0 >= 0x100) {
        D_003604BC = 0x100;
        D_003604C4 = 8;
    } else {
        D_003604BC = 0;
        D_003604C4 = 0;
    }
    if (arg1 >= 0x240) {
        D_003604B8 = 0x240;
        D_003604C0 = 10;
    } else if (arg1 >= 0x200) {
        D_003604B8 = 0x200;
        D_003604C0 = 10;
    } else if (arg1 >= 0x1C0) {
        D_003604B8 = 0x1C0;
        D_003604C0 = 9;
    } else if (arg1 >= 0x120) {
        D_003604B8 = 0x120;
        D_003604C0 = 9;
    } else if (arg1 >= 0x100) {
        D_003604B8 = 0x100;
        D_003604C0 = 8;
    } else if (arg1 >= 0xE0) {
        D_003604B8 = 0xE0;
        D_003604C0 = 8;
    } else {
        D_003604B8 = 0;
        D_003604C0 = 0;
    }
}
