/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001D0830_0 {
    u8 pad_00[0x60];
} unk_func_001D0830_0;

typedef struct unk_func_001D0830_1 {
    u8 pad_00[0x70];
    u32 unk_70;
    u32 unk_74;
    s32 *unk_78;
    s32 *unk_7C;
    unk_func_001D0830_0 *unk_80;
    s32 *unk_84;
} unk_func_001D0830_1;

void *HMU_fn_p_vMalloc(u32, void *);
void HMU_fn_vFree(void **, void *);
void func_00155FA0(unk_func_001D0830_0 *, unk_func_001D0830_0 *);

void func_001D0830(unk_func_001D0830_1 *arg0, u32 arg1) {
    u32 i;
    u32 *temp_s1;
    u32 *temp_s2;
    s32 *temp_s3;
    s32 *temp_s4;
    s32 *temp_s5;
    unk_func_001D0830_0 *temp_s6;

    temp_s2 = &arg0->unk_70;
    temp_s1 = &arg0->unk_74;
    temp_s3 = HMU_fn_p_vMalloc((*temp_s1 + arg1) * sizeof(*temp_s3), NULL);
    temp_s4 = HMU_fn_p_vMalloc((*temp_s1 + arg1) * sizeof(*temp_s4), NULL);
    temp_s5 = HMU_fn_p_vMalloc((*temp_s1 + arg1) * sizeof(*temp_s5), NULL);
    temp_s6 = HMU_fn_p_vMalloc((*temp_s1 + arg1) * sizeof(*temp_s6), NULL);
    for (i = 0; i < *temp_s2; i++) {
        temp_s3[i] = arg0->unk_78[i];
        temp_s4[i] = arg0->unk_7C[i];
        temp_s5[i] = arg0->unk_84[i];
        func_00155FA0(&temp_s6[i], &arg0->unk_80[i]);
    }
    HMU_fn_vFree((void **)&arg0->unk_78, NULL);
    HMU_fn_vFree((void **)&arg0->unk_7C, NULL);
    HMU_fn_vFree((void **)&arg0->unk_84, NULL);
    HMU_fn_vFree((void **)&arg0->unk_80, NULL);
    arg0->unk_78 = temp_s3;
    arg0->unk_7C = temp_s4;
    arg0->unk_84 = temp_s5;
    arg0->unk_80 = temp_s6;
    *temp_s2 += arg1;
    *temp_s1 += arg1;
}
