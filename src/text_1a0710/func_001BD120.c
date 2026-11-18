/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BD120_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001BD120_0;

typedef struct unk_func_001BD120_1 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_001BD120_1;

typedef struct unk_func_001BD120_2 {
    u8 pad_00[0x24];
    s32 *unk_24;
} unk_func_001BD120_2;

unk_func_001BD120_1 *func_001BC790(s32);
s32 fn_h_StandardGameGetSuperObject(s32);
unk_func_001BD120_2 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001979C0(s32);
void func_00150060(s32, unk_func_001BD120_0 *, unk_func_001BD120_0 *, unk_func_001BD120_0 *);

s32 func_001BD120(s32 arg0, unk_func_001BD120_0 *arg1) {
    unk_func_001BD120_1 *temp_s1;
    s32 temp_s0;
    s32 *temp_s2;
    s32 temp_s4;
    s32 temp_s5;
    s32 var_s3;
    unk_func_001BD120_0 sp70;
    unk_func_001BD120_0 sp80;
    unk_func_001BD120_0 sp90;
    unk_func_001BD120_0 spA0;
    unk_func_001BD120_0 spB0;
    unk_func_001BD120_0 spC0;
    unk_func_001BD120_0 spD0;

    var_s3 = 0;
    if (arg1 != NULL) {
        temp_s1 = func_001BC790(arg0);
        if (temp_s1 != NULL) {
            temp_s0 = fn_h_StandardGameGetSuperObject(temp_s1->unk_04);
            if (temp_s0 != 0) {
                temp_s2 = HIE_fn_hGetSuperObjectObject(temp_s0)->unk_24;
                if (temp_s2 != NULL) {
                    temp_s4 = func_001979C0(temp_s0);
                    temp_s5 = *temp_s2;
                    func_00150060(temp_s4, &sp70, &sp80, &sp90);
                    func_00150060(temp_s5, &spA0, &spB0, &spC0);
                    spD0.unk_00 = sp70.unk_00 * spB0.unk_00 + sp80.unk_00 * spB0.unk_04 + sp90.unk_00 * spB0.unk_08;
                    spD0.unk_04 = sp70.unk_04 * spB0.unk_00 + sp80.unk_04 * spB0.unk_04 + sp90.unk_04 * spB0.unk_08;
                    spD0.unk_08 = sp70.unk_08 * spB0.unk_00 + sp80.unk_08 * spB0.unk_04 + sp90.unk_08 * spB0.unk_08;
                    arg1->unk_00 = spD0.unk_00;
                    arg1->unk_04 = spD0.unk_04;
                    arg1->unk_08 = spD0.unk_08;
                    var_s3 = 1;
                }
            }
        }
    }
    return var_s3;
}
