#include "common.h"

s32 func_00155FF0(s32 *arg0) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = *arg0;
    var_v0 = temp_v1 == 4;
    if (var_v0 == 0) {
        var_v0 = temp_v1 == 3;
    }
    if (var_v0 == 0) {
        var_v0 = temp_v1 == 7;
    }
    if (var_v0 == 0) {
        var_v0 = temp_v1 == 6;
    }
    if (var_v0 == 0) {
        var_v0 = temp_v1 == 8;
    }
    return var_v0 & 0xFF;
}
