#include "common.h"

void func_001623B0();
void func_0016C210();
void func_00172C60();
s32 func_00285BA0(s32);
void func_00289F80(void (*)());
void func_00164460();
extern s32 D_0035FA18;
extern u8 *D_0035FB04;

void func_00164400(void) {
    D_0035FA18 = func_00285BA0(1);
    func_0016C210();
    func_00172C60();
    func_00289F80(func_00164460);
    *(s32 *)(D_0035FB04 + 0x1C0) = 0;
    func_001623B0();
}
