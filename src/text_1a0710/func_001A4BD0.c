/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001A4BD0_0 {
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
} unk_func_001A4BD0_0;

typedef struct unk_func_001A4BD0_1 {
    u8 pad_00[0xA4];
    s32 *unk_A4;
} unk_func_001A4BD0_1;

unk_func_001A4BD0_0 *HIE_fn_hGetSuperObjectObject(s32 *);
s32 func_001B84B0(s32);
unk_func_001A4BD0_1 *func_00138760(s32);
s32 *HIE_fn_hGetSuperObjectFather(s32 *);

s32 *func_001A4BD0(s32 *arg0) {
    s32 *var_s0;
    unk_func_001A4BD0_1 *temp_s1;
    s32 temp_s2;
    s32 temp_s3;

    temp_s2 = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
    if (temp_s2 == 0) {
        return NULL;
    }
    if ((temp_s3 = func_001B84B0(temp_s2)) == 0) {
        return NULL;
    }
    temp_s1 = func_00138760(temp_s3);
    if (temp_s1 == NULL) {
        return NULL;
    }
    var_s0 = temp_s1->unk_A4;
    while (var_s0 != NULL && *var_s0 != 2) {
        var_s0 = HIE_fn_hGetSuperObjectFather(var_s0);
    }
    if (var_s0 != NULL && HIE_fn_hGetSuperObjectObject(var_s0)->unk_04 == 0) {
        var_s0 = NULL;
        temp_s1->unk_A4 = NULL;
    }
    return var_s0;
}
