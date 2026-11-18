#include "common.h"

extern s32 D_007B8278[];
extern s32 D_007B82FC[];

void func_00289CB0(s32 arg0) {
    s32 mask = -1;

    switch (arg0) {
    case 0x8074:
        mask = -0x21;
        break;
    case 0x8075:
        mask = -9;
        break;
    case 0x8076:
        mask = (D_007B82FC[0] == 0) ? -2 : -0x81;
        break;
    case 0x8077:
        mask = -5;
        break;
    case 0x8078:
        mask = (D_007B82FC[0] == 0) ? -0x11 : -0x41;
        break;
    case 0x8079:
        mask = -3;
        break;
    }
    D_007B8278[0] &= mask;
}
