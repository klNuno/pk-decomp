#include "common.h"

void func_003176A0();
void func_003168D0();
void func_00318B30();
void func_00304B00();
extern u8 D_0035F210[];

u8 *func_00316D70(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(u8 **)(arg0 + 0xAC) = D_0035F210;
        func_003176A0(arg0 + 0xD0, -1);
        func_003176A0(arg0 + 0xC4, -1);
        func_003168D0(arg0 + 0xB8, -1);
        func_00318B30(arg0, 0);
        if (arg1 > 0) {
            func_00304B00(arg0);
        }
    }
    return arg0;
}
