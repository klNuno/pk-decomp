#include "common.h"

s32 func_002D3BB0(s32, s32);
void func_002F52F0(s32);
void func_002F5340(s32);
void func_002F8080();
extern s32 D_00360538;
extern s32 D_0036053C;

s32 func_002D0370(s32 arg0) {
    s32 var_s0;

    var_s0 = 0;
    if (func_002D3BB0(D_00360538, arg0) != 0) {
        var_s0 = 1;
    }
    func_002F52F0(D_0036053C);
    func_002F5340(D_0036053C);
    func_002F8080();
    return var_s0;
}
