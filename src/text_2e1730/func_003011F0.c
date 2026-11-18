#include "common.h"

typedef struct {
    u8 unk_00;
} unk_func_003011F0_0;

void func_00301620();

s32 func_003011F0(s32 arg0, unk_func_003011F0_0 *arg1) {
    unk_func_003011F0_0 temp;
    s32 temp2;

    temp = *arg1;
    func_00301620(arg0, &temp, &temp2);
    return arg0;
}
