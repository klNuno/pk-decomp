/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001AC650_1 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_001AC650_1;

typedef struct unk_func_001AC650_0 {
    unk_func_001AC650_1 unk_00;
    unk_func_001AC650_1 unk_10;
    unk_func_001AC650_1 unk_20;
} unk_func_001AC650_0;

s32 func_001AC090(unk_func_001AC650_0 *, s32, s32, u8 *, u8 *);

u16 func_001AC650(unk_func_001AC650_0 *arg0, s32 arg1, s32 arg2, f32 *arg3) {
    unk_func_001AC650_0 sp20;
    f32 sp50;
    f32 sp54;
    f32 sp58;
    u8 sp5E;
    u8 sp5F;
    s16 var_s0;

    var_s0 = 0;
    sp50 = 0.0f;
    sp54 = arg0->unk_00.unk_00;
    sp20 = *arg0;
    if (sp54 < 0.0f) {
        sp54 = 1000.0f;
    }
    do {
        arg2 = func_001AC090(arg0, arg1, arg2, &sp5E, &sp5F);
        if (!sp5F) {
            sp58 = sp50 + arg0->unk_10.unk_04;
            if (sp58 < sp54) {
                sp50 = sp58;
                var_s0++;
            } else {
                sp5F = 1;
            }
        }
    } while (!sp5F);
    *arg0 = sp20;
    *arg3 = sp50;
    return var_s0;
}
