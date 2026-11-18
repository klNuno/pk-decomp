#include "common.h"

typedef struct unk_func_002EDCF0_0 {
    struct unk_func_002EDCF0_0 *unk_00;
    struct unk_func_002EDCF0_0 *unk_04;
    u8 pad_08[4];
    char *unk_0C;
} unk_func_002EDCF0_0;

typedef struct unk_func_002EDCF0_1 {
    unk_func_002EDCF0_0 *unk_00;
    u8 unk_04;
} unk_func_002EDCF0_1;

extern "C" {
s32 strcmp(...);
unk_func_002EDCF0_0 *func_002EDE20(unk_func_002EDCF0_0 *, unk_func_002EDCF0_0 *, bool, bool, char **);
extern u8 D_0035F700;
extern u8 D_0035F704;

unk_func_002EDCF0_1 *func_002EDCF0(unk_func_002EDCF0_1 *arg0, unk_func_002EDCF0_0 *arg1, char **arg2) {
    unk_func_002EDCF0_0 *var_s0;
    unk_func_002EDCF0_0 *var_s1;
    bool var_s2;
    unk_func_002EDCF0_0 *var_s6 = (unk_func_002EDCF0_0 *)&arg1->unk_04;
    bool var_s3;

    var_s3 = var_s2 = true;
    var_s1 = arg1->unk_04;
    var_s0 = 0;

    while (var_s1 != 0) {
        var_s6 = var_s1;
        if (strcmp(*arg2, var_s1->unk_0C) < 0) {
            var_s1 = var_s1->unk_00;
            var_s2 = true;
        } else {
            var_s0 = var_s1;
            var_s1 = var_s1->unk_04;
            var_s2 = false;
            var_s3 = false;
        }
    }
    if (var_s0 == 0 || strcmp(var_s0->unk_0C, *arg2) < 0) {
        arg0->unk_00 = func_002EDE20(arg1, var_s6, var_s2, var_s3, arg2);
        arg0->unk_04 = D_0035F700;
        return arg0;
    }
    arg0->unk_00 = var_s0;
    arg0->unk_04 = D_0035F704;
    return arg0;
}
}
