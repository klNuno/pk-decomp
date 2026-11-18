/* profile: o0 */
#include "common.h"

void func_001A9A90(u8, u8);
extern u8 D_005AB880[];
extern u8 D_005AB881[];

void func_001A95E0(u8 arg0, u8 arg1) {
    arg0 = (arg0 <= 0) ? 1 : arg0;
    arg1 = (arg1 <= 0) ? 1 : arg1;
    if (arg0 < 5) {
        D_005AB880[0] = arg0;
    } else {
        D_005AB880[0] = 4;
    }
    D_005AB881[0] = arg1;
    func_001A9A90(D_005AB880[0], D_005AB881[0]);
}
