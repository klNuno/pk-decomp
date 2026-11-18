/* profile: o0 */
#include "common.h"

void func_0019AD50(s32);
void func_001EB640(s32);

u8 *func_00225AD0(s32 arg0, u8 *arg1) {
    s32 temp;

    temp = *(s32 *)(arg1 - 8);
    switch (temp) {
    case 0x75:
        func_0019AD50(2);
        func_001EB640(3);
        break;
    }
    return arg1;
}
