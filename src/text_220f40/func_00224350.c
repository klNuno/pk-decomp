/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} unk_func_00224350_0;

typedef struct {
    s32 v[3];
} unk_func_00224350_1;

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x70];
    unk_func_00224350_0 unk_78[8];
    unk_func_00224350_1 unk_D8[8];
    f32 unk_138[8];
} unk_func_00224350_2;

typedef struct {
    u8 pad_00[0x10];
    unk_func_00224350_2 *unk_10;
} unk_func_00224350_3;

unk_func_00224350_3 *HIE_fn_hGetSuperObjectObject(s32);
s32 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(s32, s32, void **);
unk_func_00224350_1 *func_00155EE0(s32);
s32 func_001979C0(void *);
void *func_001B4C70(s32);
extern s32 D_005ABDBC[];

s32 *func_00224350(s32 arg0, s32 *arg1) {
    void *sp58;
    f32 sp5C;
    u32 var_s0;
    unk_func_00224350_2 *var_s1;
    unk_func_00224350_1 *var_s2;
    s32 temp_s3;

    temp_s3 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp_s3), arg0, &sp58);
    switch (temp_s3) {
    case 0xB4:
        if (D_005ABDBC[0] != 0) {
            var_s1 = HIE_fn_hGetSuperObjectObject(D_005ABDBC[0])->unk_10;
            if (func_001B4C70(var_s1->unk_04) == sp58) {
                var_s2 = func_00155EE0(func_001979C0(sp58));
                sp5C = 0.03f;
                for (var_s0 = 0; var_s0 < 8; var_s0++) {
                    var_s1->unk_138[var_s0] = sp5C;
                    var_s1->unk_78[var_s0].z = var_s1->unk_78[var_s0].y = var_s1->unk_78[var_s0].x = 0.0f;
                    ((unk_func_00224350_1 *)((u32)var_s1 + 12 * var_s0 + 0xD8))->v[0] = var_s2->v[0];
                    ((unk_func_00224350_1 *)((u32)var_s1 + 12 * var_s0 + 0xD8))->v[1] = var_s2->v[1];
                    ((unk_func_00224350_1 *)((u32)var_s1 + 12 * var_s0 + 0xD8))->v[2] = var_s2->v[2];
                }
            }
        }
        return arg1;
    }
    return arg1;
}
