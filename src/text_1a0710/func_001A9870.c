/* profile: o0_301 */
#include "common.h"

void func_001AA190(s32, u8, u8);
extern u8 D_005AB880[];

void func_001A9870(u8 arg0, u8 arg1) {
    if (arg0 >= D_005AB880[0] || arg1 >= D_005AB880[0] || arg0 == arg1) {
        return;
    }
    func_001AA190(0, arg0, arg1);
    func_001AA190(1, arg0, arg1);
}
