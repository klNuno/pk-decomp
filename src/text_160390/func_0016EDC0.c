/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0016EDC0_0 {
    s32 unk_00;
    u8 pad_04[0x6C];
    f32 unk_70;
    f32 unk_74;
    f32 unk_78;
    f32 unk_7C;
    u8 pad_80[0x64];
    f32 unk_E4;
} unk_func_0016EDC0_0;

void *HMU_fn_p_vMalloc(s32, s32);

void func_0016EDC0(unk_func_0016EDC0_0 **arg0, s32 arg1) {
    *arg0 = HMU_fn_p_vMalloc(0x100, 0);
    if (*arg0 != NULL) {
        (*arg0)->unk_00 = arg1;
        switch ((*arg0)->unk_00) {
        case 0x64:
        case 0x65:
            (*arg0)->unk_70 = 1.0f;
            (*arg0)->unk_74 = 1.0f;
            break;
        case 0x66:
        case 0x67:
            (*arg0)->unk_70 = 0.7853982f;
            (*arg0)->unk_74 = 0.7853982f;
            break;
        }
        (*arg0)->unk_78 = 0.25f;
        (*arg0)->unk_7C = 10000.0f;
        (*arg0)->unk_E4 = (*arg0)->unk_74 / (*arg0)->unk_70;
    }
}
