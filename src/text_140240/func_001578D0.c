#include "common.h"

typedef struct {
    s16 unk_00;
    s16 unk_02;
    s16 unk_04;
    s16 unk_06;
} unk_func_001578D0_0;

typedef struct {
    s16 unk_00;
    unk_func_001578D0_0 *unk_04;
    f32 *unk_08;
} unk_func_001578D0_1;

typedef struct {
    s16 unk_00;
    unk_func_001578D0_1 *unk_04;
} unk_func_001578D0_2;

void *HMU_fn_p_vMalloc(u32, s32);
s16 func_00127318(f32);

unk_func_001578D0_2 *func_001578D0(unk_func_001578D0_2 *arg0, unk_func_001578D0_2 *arg1, s16 arg2, f32 arg3)
{
    unk_func_001578D0_2 *out;
    unk_func_001578D0_0 *out_04;
    unk_func_001578D0_0 *p_04;
    unk_func_001578D0_0 *q_04;
    f32 *out_08;
    f32 *p_08;
    f32 *q_08;
    f32 temp;
    s16 count;
    s16 i;

    count = arg0->unk_00;
    out = HMU_fn_p_vMalloc(sizeof(*out), 0);
    out->unk_00 = count;
    out->unk_04 = HMU_fn_p_vMalloc(count * sizeof(*out->unk_04), 0);
    for (i = 0; i < count; i++) {
        out->unk_04[i].unk_00 = 0;
        out->unk_04[i].unk_04 = NULL;
        out->unk_04[i].unk_08 = NULL;
    }

    count = arg0->unk_04[arg2].unk_00;
    out->unk_04[arg2].unk_00 = count;
    out_04 = HMU_fn_p_vMalloc(count * sizeof(*out_04), 0);
    out->unk_04[arg2].unk_04 = out_04;
    p_04 = arg0->unk_04[arg2].unk_04;
    q_04 = arg1->unk_04[arg2].unk_04;

    out_08 = HMU_fn_p_vMalloc(count * sizeof(*out_08), 0);
    out->unk_04[arg2].unk_08 = out_08;
    p_08 = arg0->unk_04[arg2].unk_08;
    q_08 = arg1->unk_04[arg2].unk_08;
    temp = 1.0f - arg3;
    for (i = 0; i < count; i++) {
        out_04[i].unk_00 = func_00127318(temp * p_04[i].unk_00 + arg3 * q_04[i].unk_00);
        out_04[i].unk_02 = func_00127318(temp * p_04[i].unk_02 + arg3 * q_04[i].unk_02);
        out_04[i].unk_04 = func_00127318(temp * p_04[i].unk_04 + arg3 * q_04[i].unk_04);
        out_04[i].unk_06 = func_00127318(temp * p_04[i].unk_06 + arg3 * q_04[i].unk_06);
        out_08[i] = temp * p_08[i] + arg3 * q_08[i];
    }
    return out;
}
