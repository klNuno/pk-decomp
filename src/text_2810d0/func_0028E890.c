/* profile: opt_300 */
#include "common.h"

void func_0028E920(s32, s32, f32 *);
void func_0028EB90(s32, s32, f32);

void func_0028E890(s32 arg0, s32 arg1, s32 *arg2) {
    f32 sp10[4];

    switch (arg1) {
    case 0x1200:
    case 0x1201:
    case 0x1202:
    case 0x1203:
    case 0x1204:
        sp10[0] = arg2[0];
        sp10[1] = arg2[1];
        sp10[2] = arg2[2];
        sp10[3] = arg2[3];
        func_0028E920(arg0, arg1, sp10);
        break;
    default:
        func_0028EB90(arg0, arg1, arg2[0]);
        break;
    }
}
