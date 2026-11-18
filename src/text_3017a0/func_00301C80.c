#include "common.h"

void func_003023B0();
void func_002D0DA0();
extern u8 D_0035ED00[];

void **func_00301C80(void ** volatile arg0) {
    s32 temp;

    func_003023B0(arg0);
    *arg0 = D_0035ED00;
    func_002D0DA0((u8 *)arg0 + 0x18, &temp);
    return arg0;
}
