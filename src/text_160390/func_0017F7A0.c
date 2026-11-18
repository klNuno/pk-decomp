/* profile: opt_300 */
#include "common.h"

void func_00285CA0(s32);
void func_002AB330(s32);
void func_002AB3E0(s32);
void func_002AB5F0(void);
void func_002AB750(void);
void func_002AB820(s32, s32, s32, s32, s32);
void func_002ABAC0(s32);
extern s32 D_0035FD20;

void func_0017F7A0(void) {
    s32 temp = D_0035FD20;

    if (temp == 1) {
        func_002AB750();
        func_00285CA0(0);
        func_002AB330(0);
        func_002AB3E0(0);
        func_002AB820(0, 2, 2, 1, 0x20);
        func_002ABAC0(2);
        func_002AB820(0, 1, 2, 1, 0x40);
        func_002ABAC0(2);
        func_002AB5F0();
    } else if (temp == 2) {
        func_002AB750();
        func_00285CA0(0);
        func_002AB330(0);
        func_002AB3E0(0);
        func_002AB820(0, 2, 2, 1, 0x20);
        func_002ABAC0(1);
        func_002AB820(0, 1, 2, 1, 0x40);
        func_002ABAC0(1);
        func_002AB5F0();
    } else if (temp == 3) {
        func_002AB750();
        func_00285CA0(0);
        func_002AB330(0);
        func_002AB3E0(0);
        func_002AB820(0, 2, 2, 1, 0x40);
        func_002ABAC0(1);
        func_002AB820(0, 1, 2, 1, 0x40);
        func_002ABAC0(1);
        func_002AB5F0();
    }
}
