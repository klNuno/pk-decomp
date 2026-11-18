#include "common.h"

void func_0012F450(void *);

void func_00131AD0(void *arg0) {
    void *var_a0;
    void *var_v1;

    var_a0 = arg0;
    var_v1 = *(void **)((u8 *)var_a0 + 8);
    if (var_v1 != NULL) {
        do {
            var_a0 = *(void **)((u8 *)var_v1 + 4);
            (*(s8 *)((u8 *)var_a0 + 0x184)) = -1;
            (*(s8 *)((u8 *)var_a0 + 0x186)) = 0;
            (*(s32 *)((u8 *)var_a0 + 0x16C)) = 0;
            (*(s32 *)((u8 *)var_a0 + 0x170)) = 0;
            var_v1 = *(void **)((u8 *)var_v1 + 0x14);
        } while (var_v1 != NULL);
    }
    func_0012F450(var_a0);
}
