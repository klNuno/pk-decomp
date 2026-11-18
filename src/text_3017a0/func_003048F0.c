#include "common.h"

void func_00304AE0(void *);

void func_003048F0(u8 *arg0, void (*arg1)(void *, s32)) {
    u32 var_s2;
    u32 temp_s3;
    s32 temp_s4;
    u8 *var_s5;

    if (arg0 != NULL) {
        if (arg1 != NULL) {
            temp_s3 = *(u32 *)(arg0 - 0xC);
            temp_s4 = *(s32 *)(arg0 - 0x10);
            var_s5 = arg0 + temp_s4 * temp_s3;
            for (var_s2 = 0; var_s2 < temp_s3; var_s2++) {
                var_s5 -= temp_s4;
                arg1(var_s5, -1);
            }
        }
        func_00304AE0(arg0 - 0x10);
    }
}
