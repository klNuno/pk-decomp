/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001CA5A0_0 {
    u8 pad_00[0xC];
} unk_func_001CA5A0_0;

typedef struct unk_func_001CA5A0_1 {
    u8 pad_00[0x5E];
    u8 unk_5E;
} unk_func_001CA5A0_1;

typedef struct unk_func_001CA5A0_2 {
    u8 pad_00[0xC];
    unk_func_001CA5A0_1 **unk_0C;
    s32 unk_10;
    u8 pad_14[0x10];
    u8 unk_24;
} unk_func_001CA5A0_2;

unk_func_001CA5A0_0 *func_001CBDA0(unk_func_001CA5A0_1 *, s32, s32);
u8 func_001CA410(unk_func_001CA5A0_0 *);
void func_001CA0A0(unk_func_001CA5A0_0 *, s32, s32);
void HMU_fn_vFree(s32 *, s32);

void func_001CA5A0(s32 arg0, unk_func_001CA5A0_2 *arg1) {
    unk_func_001CA5A0_0 *var_s0;
    u8 var_s1;
    unk_func_001CA5A0_0 *temp_s2;
    u8 temp_s3;

    if (arg1->unk_10 != 0) {
        temp_s3 = (*arg1->unk_0C)->unk_5E;
        var_s0 = func_001CBDA0(*arg1->unk_0C, 0, 0);
        for (var_s1 = 0; var_s1 < temp_s3; var_s1++, temp_s2 = var_s0, var_s0 = temp_s2 + 1) {
            if (func_001CA410(var_s0) == 0xFF) {
                func_001CA0A0(var_s0, 2, arg0);
            }
        }
        HMU_fn_vFree(&arg1->unk_10, 1);
        arg1->unk_10 = 0;
        arg1->unk_24 = 0;
    }
}
