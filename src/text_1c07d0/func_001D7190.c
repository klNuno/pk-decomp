/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001D7190_0 unk_func_001D7190_0;

typedef struct {
    unk_func_001D7190_0 *unk_00;
    unk_func_001D7190_0 *unk_04;
    s32 unk_08;
} unk_func_001D7190_1;

struct unk_func_001D7190_0 {
    unk_func_001D7190_0 *unk_00;
    unk_func_001D7190_0 *unk_04;
    unk_func_001D7190_1 *unk_08;
    u8 pad_0C[0x5];
    u8 unk_11;
    u8 pad_12[0x2];
    s32 unk_14;
};

unk_func_001D7190_0 *SAV2_fn_p_stFindElementByName(s32);
s32 SAV2_fn_p_vMalloc(s32);
void SAV2_fn_vFreeAnElement(unk_func_001D7190_0 *);
unk_func_001D7190_0 *func_001D6D50(s32, u8, u8, s32);
extern unk_func_001D7190_0 *D_003600B4;
extern unk_func_001D7190_0 *D_003600B8;
extern u8 D_003600C8[8];
extern unk_func_001D7190_1 D_005ECC44;

void func_001D7190(s32 arg0, s32 arg1, u32 arg2, u8 arg3, u8 arg4) {
    unk_func_001D7190_0 *var_s0;

    var_s0 = SAV2_fn_p_stFindElementByName(arg0);
    if (var_s0 != 0) {
        SAV2_fn_vFreeAnElement(var_s0);
    }
    var_s0 = func_001D6D50(arg0, arg3, arg4, arg1);
    var_s0->unk_11 = arg2;
    if (arg2 != 1) {
        var_s0->unk_14 = SAV2_fn_p_vMalloc(D_003600C8[arg1] * arg2);
    }
    if (var_s0->unk_00 != 0) {
        var_s0->unk_00->unk_04 = var_s0->unk_04;
    }
    if (var_s0->unk_04 != 0) {
        var_s0->unk_04->unk_00 = var_s0->unk_00;
    }
    if (var_s0->unk_08 != 0) {
        var_s0->unk_08->unk_08--;
        if (var_s0->unk_08->unk_00 == var_s0) {
            var_s0->unk_08->unk_00 = var_s0->unk_00;
        }
        if (var_s0->unk_08->unk_04 == var_s0) {
            var_s0->unk_08->unk_04 = var_s0->unk_04;
        }
    }
    var_s0->unk_00 = 0;
    var_s0->unk_04 = 0;
    var_s0->unk_08 = 0;
    var_s0->unk_00 = 0;
    var_s0->unk_04 = D_005ECC44.unk_04;
    var_s0->unk_08 = &D_005ECC44;
    if (D_005ECC44.unk_00 == 0) {
        D_005ECC44.unk_00 = var_s0;
    } else {
        D_005ECC44.unk_04->unk_00 = var_s0;
    }
    D_005ECC44.unk_04 = var_s0;
    D_005ECC44.unk_08++;
    D_003600B4 = D_005ECC44.unk_00;
    D_003600B8 = D_005ECC44.unk_04;
}
