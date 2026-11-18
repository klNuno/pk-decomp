#include "common.h"

typedef struct {
    u8 unk_00;
} unk_func_002D1D10_0;

void func_002D2540();

s32 func_002D1D10(s32 arg0, unk_func_002D1D10_0 *arg1) {
    unk_func_002D1D10_0 temp;
    s32 temp2;

    temp = *arg1;
    func_002D2540(arg0, &temp, &temp2);
    return arg0;
}
