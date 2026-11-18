/* profile: o0_301 */
#include "common.h"

void func_0019BF70();
void func_0019D240();
void func_0012DA10(s32);
s32 func_0019B140();
s32 func_0019B120();
void func_0019AF90(s32);
void func_0019B130();
s32 func_0019AF80();
void func_00198230();
void func_00133170(s32);
void func_0019AD50(u8);
void func_001A63E0();
void func_001E7980();
void func_001AE6B0();
void func_001A99E0();
extern u8 D_005AB790[];

void func_001A5420(void) {
    u8 temp = D_005AB790[0];

    func_0019BF70();
    func_0019D240();
    func_0012DA10(0);
    if (func_0019B140()) {
        func_0019AF90(func_0019B120());
        func_0019B130();
    } else {
        func_0019AF90(func_0019AF80());
    }
    func_00198230();
    func_00133170(1);
    func_0019AD50(5);
    func_001A63E0();
    func_0019AD50(temp);
    func_001E7980();
    func_001AE6B0();
    func_001A99E0();
}
