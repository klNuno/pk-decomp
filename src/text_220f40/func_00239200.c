/* profile: o0_301 */
#include "common.h"

void func_0015B8F0();
void func_0015B970();
void func_001EDBB0(s32, s32);

s32 *func_00239200(s32 arg0, s32 *arg1) {
    s32 temp_s0;

    temp_s0 = arg1[-2];
    switch (temp_s0) {
    case 0x20E:
        func_0015B970();
        func_0015B8F0();
        return arg1;
    case 0x20F:
        func_0015B970();
        return arg1;
    default:
        func_001EDBB0(0x27, 0);
        return arg1;
    }
}
