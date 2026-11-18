#include "common.h"

typedef struct unk_func_0016DDD0_1 {
    u8 pad_00[0x70];
    f32 unk_70;
} unk_func_0016DDD0_1;

typedef struct unk_func_0016DDD0_0 {
    u8 pad_00[0x68];
    unk_func_0016DDD0_1 **unk_68;
    u8 pad_6C[4];
} unk_func_0016DDD0_0;

typedef struct unk_func_0016DDD0_2 {
    u8 pad_00[0x60];
} unk_func_0016DDD0_2;

s32 func_00169790();
s32 func_00169A40();
void func_0016BC10();
void func_0016E6E0();
extern f32 D_0035F498;
extern unk_func_0016DDD0_1 *D_0035FBC4;

void func_0016DDD0(s32 arg0, s32 arg1, unk_func_0016DDD0_1 *arg2) {
    unk_func_0016DDD0_0 sp50;
    unk_func_0016DDD0_0 spC0;
    unk_func_0016DDD0_2 sp130;
    unk_func_0016DDD0_1 *var_s3;

    func_0016BC10();
    if (func_00169790(arg0, arg1, &sp50) != 0) {
        if (arg2 != *sp50.unk_68) {
            *sp50.unk_68 = arg2;
            var_s3 = arg2;
            if (func_00169A40(arg0, &sp130) != 0 && func_00169790(arg0, arg1, &spC0) != 0) {
                if (arg2 == NULL) {
                    var_s3 = D_0035FBC4;
                } else {
                    D_0035FBC4 = arg2;
                }
                func_0016E6E0(&sp130, &spC0, var_s3);
            }
        }
        if (arg2 != NULL) {
            D_0035F498 = (0.75f * (180.0f * arg2->unk_70)) / 3.1415927f;
        }
    }
}
