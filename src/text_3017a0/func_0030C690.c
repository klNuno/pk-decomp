/* profile: opt_300 */
#include "common.h"

extern s32 D_007DD190[];
extern s32 D_007DE190[];

void func_0030C690(s32 *arg0, s32 arg1, s32 arg2) {
    switch (arg1) {
    case 0x30:
        if (*arg0 != 0) {
            D_007DD190[arg2 & 0x3FF] = *arg0;
        } else {
            D_007DE190[arg2 & 0x3FF] = 0;
        }
        break;
    case 0x41:
        D_007DD190[arg2 & 0x3FF] = *arg0;
        break;
    case 0x44:
        D_007DD190[arg2 & 0x3FF] = *arg0;
        break;
    case 0x51:
        D_007DD190[arg2 & 0x3FF] = *arg0;
        break;
    case 0x54:
        D_007DD190[arg2 & 0x3FF] = *arg0;
        break;
    case 0x14:
        D_007DD190[arg2 & 0x3FF] = *arg0;
        break;
    }
}
