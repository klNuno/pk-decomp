/* profile: o0 */
#include "common.h"

void func_001A9A90(u8, u8);
extern u8 D_005AB880[];
extern u8 D_005AB881[];
extern u8 D_005AB882[];

void func_001A9810(u8 arg0) {
    if (arg0 != D_005AB882[0]) {
        D_005AB882[0] = arg0;
        func_001A9A90(D_005AB880[0], D_005AB881[0]);
    }
}
