/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00224B20_0 {
    u8 unk_00;
    u8 unk_01;
} unk_func_00224B20_0;

typedef struct unk_func_00224B20_1 {
    u8 pad_00[0x8];
    struct unk_func_00224B20_1 *unk_08;
    u8 pad_0C[0x8];
    struct unk_func_00224B20_1 *unk_14;
} unk_func_00224B20_1;

typedef struct unk_func_00224B20_3 {
    void *unk_00;
} unk_func_00224B20_3;

typedef struct unk_func_00224B20_2 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_00224B20_2;

s32 func_001971C0(unk_func_00224B20_1 *);
unk_func_00224B20_2 *HIE_fn_hGetSuperObjectObject(unk_func_00224B20_1 *);
unk_func_00224B20_3 *fn_p_stBrainGetMind(s32);
void func_001EC3E0(unk_func_00224B20_0 *, unk_func_00224B20_1 *);

void func_00224B20(unk_func_00224B20_0 *arg0, unk_func_00224B20_1 *arg1, void *arg2) {
    unk_func_00224B20_1 *var_s0;
    s32 var_s3;
    s32 var_s2;
    unk_func_00224B20_1 *var_s1;
    unk_func_00224B20_1 *var_s4;

    if (arg0->unk_00 < arg0->unk_01) {
        if (func_001971C0(arg1) == 2) {
            var_s3 = HIE_fn_hGetSuperObjectObject(arg1)->unk_0C;
            if (var_s3 != 0) {
                if (fn_p_stBrainGetMind(var_s3)->unk_00 == arg2) {
                    func_001EC3E0(arg0, arg1);
                }
            }
        }
        for (var_s2 = 0, var_s0 = arg1->unk_08, var_s4 = var_s0; var_s0 != NULL; var_s2++, var_s0 = var_s0->unk_14, var_s1 = var_s0, (void)var_s1) {
            func_00224B20(arg0, var_s0, arg2);
        }
    }
}
