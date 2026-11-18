#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_002FF5B0_0;

unk_func_002FF5B0_0 *func_002D2BC0(s32);
s32 func_002FF6C0(s32);
unk_func_002FF5B0_0 *func_002FF6E0(unk_func_002FF5B0_0 *, s32);
void func_002FF750(unk_func_002FF5B0_0 *, s32);

unk_func_002FF5B0_0 *func_002FF5B0(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_002FF5B0_0 *temp_v0;
    unk_func_002FF5B0_0 *var_s0;

    temp_v0 = func_002D2BC0(0x1C);
    var_s0 = temp_v0;
    if (temp_v0 != NULL) {
        var_s0 = func_002FF6E0(temp_v0, arg1);
    }
    var_s0->unk_04 = arg0;
    if (arg2 != 0) {
        func_002FF750(var_s0, func_002FF6C0(arg2));
    }
    return var_s0;
}
