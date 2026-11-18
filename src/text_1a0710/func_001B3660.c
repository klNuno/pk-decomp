/* profile: o0_301 */
#include "common.h"

s32 func_001E7990();
void func_0019AA50();
void func_001B3700();
void func_001B36D0();

void func_001B3660(s32 arg0) {
    s32 temp;

    temp = func_001E7990();
    func_0019AA50(arg0, temp);
    func_001B3700(arg0, (void *)0xCDCDCDCD);
    func_001B36D0(arg0, 0);
}
