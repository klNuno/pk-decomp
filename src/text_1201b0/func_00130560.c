#include "common.h"

s32 func_0012B470(void *);
void func_00130610(void *);
void func_001306C0(void *);

void func_00130560(void *arg0) {
    void *var_s0;
    void *var_s1;

    var_s0 = *(void **)((u8 *)arg0 + 8);
    if (var_s0 != NULL) {
        do {
            if (func_0012B470(var_s0) != 0) {
                (*(s32 *)((u8 *)var_s0 + 0x2C)) = (s32) ((*(s32 *)((u8 *)var_s0 + 0x2C)) & 0xEFFFFFFF);
                var_s1 = *(void **)((u8 *)var_s0 + 8);
                if (var_s1 != NULL) {
                    do {
                        if ((*(s32 *)((u8 *)var_s1 + 0)) & 0x40) {
                            func_001306C0(var_s1);
                        } else {
                            func_00130610(var_s1);
                        }
                        var_s1 = *(void **)((u8 *)var_s1 + 0x14);
                    } while (var_s1 != NULL);
                }
            }
            var_s0 = *(void **)((u8 *)var_s0 + 0x14);
        } while (var_s0 != NULL);
    }
}
