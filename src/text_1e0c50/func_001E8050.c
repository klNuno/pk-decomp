/* profile: o0_301 */
#include "common.h"

void func_001332D0(s32, u16);
s32 func_001E8B50(s32, s32);
void func_00133180(s32, s32, u16);

void func_001E8050(s32 arg0, s32 arg1, u16 arg2) {
    switch (arg1) {
    case 0x13:
    case 0xA:
    case 0xB:
    case 0x12:
    case 0x10:
    case 0x11:
        func_001332D0(arg0, arg2);
        break;
    case 0x9:
    case 0x1B:
    case 0x1A:
    case 0x19:
    case 0x18:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x21:
        break;
    default:
        func_00133180(arg0, func_001E8B50(arg1, 0), arg2);
        break;
    }
}
