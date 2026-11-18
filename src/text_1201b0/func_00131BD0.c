#include "common.h"

s32 func_00131BD0(void *arg0) {
    s32 var_v0;
    s8 temp_v1;
    void *temp_a0;

    temp_a0 = *(void **)((u8 *)arg0 + 4);
    temp_v1 = *(s8 *)((u8 *)temp_a0 + 0x185);
    var_v0 = temp_v1 == 0;
    if (var_v0 != 0) {
        var_v0 = (*(s8 *)((u8 *)temp_a0 + 0x184)) != temp_v1;
    }
    return var_v0;
}
