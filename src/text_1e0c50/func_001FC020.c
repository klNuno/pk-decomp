/* profile: o0 */
#include "common.h"

void func_001FD670();
extern u8 D_005AD820[];
extern u8 D_005AD8A0[];

s32 *func_001FC020(s32 arg0, s32 *arg1) {
    s32 temp = arg1[-2];

    switch (temp) {
    case 0x260:
        func_001FD670(D_005AD820, D_005AD8A0, 0x80);
        break;
    case 0x261:
        func_001FD670(D_005AD8A0, D_005AD820, 0x80);
        break;
    }
    return arg1;
}
