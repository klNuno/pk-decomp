/* profile: o0 */
#include "common.h"

void func_001ADDE0();
void func_0019C440();
void func_001ADDB0();
void func_001ADD80();

void func_001ADD10(s32 arg0, u16 arg1) {
    s32 sp1C;

    func_001ADDE0(arg0, arg1);
    func_0019C440(&sp1C, arg1);
    func_001ADDB0(arg0, sp1C);
    func_001ADD80(arg0, sp1C);
}
