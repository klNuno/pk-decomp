#include "common.h"

typedef struct unk_func_00165B20_0 {
    s32 unk_00;
    u8 pad_04[4];
    s32 unk_08;
    u8 pad_0C[0x24];
    u8 unk_30[0x60];
    f32 unk_90;
    f32 unk_94;
    f32 unk_98;
    f32 unk_9C;
    u8 pad_A0[0x1C];
    s32 unk_BC;
    u8 pad_C0[4];
    u8 unk_C4;
    u8 unk_C5;
    u8 unk_C6;
    u8 pad_C7[0x49];
    s32 unk_110;
    s32 unk_114;
    s32 unk_118;
    s32 unk_11C;
    s32 unk_120;
} unk_func_00165B20_0;

void *HMU_fn_p_vMalloc(s32, s32);
void func_00155C70();

void func_00165B20(unk_func_00165B20_0 **arg0, s32 arg1) {
    *arg0 = HMU_fn_p_vMalloc(0x130, 0);
    if (*arg0 != NULL) {
        (*arg0)->unk_08 = arg1;
        func_00155C70((*arg0)->unk_30);
        (*arg0)->unk_00 = 1;
        (*arg0)->unk_90 = 0.8f;
        (*arg0)->unk_94 = 0.8f;
        (*arg0)->unk_98 = 0.8f;
        (*arg0)->unk_9C = 0.8f;
        (*arg0)->unk_BC = 0;
        (*arg0)->unk_C4 = 1;
        (*arg0)->unk_C6 = 0;
        (*arg0)->unk_120 = 0;
        (*arg0)->unk_C5 = 3;
        (*arg0)->unk_110 = 0;
        (*arg0)->unk_114 = 0;
        (*arg0)->unk_118 = 0;
        (*arg0)->unk_11C = 0;
    }
}
