/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001BD420_0 {
    struct unk_func_001BD420_0 *unk_00;
    struct unk_func_001BD420_0 *unk_04;
    struct unk_func_001BD420_1 *unk_08;
    s32 unk_0C;
    s32 unk_10;
} unk_func_001BD420_0;

typedef struct unk_func_001BD420_1 {
    unk_func_001BD420_0 *unk_00;
    unk_func_001BD420_0 *unk_04;
    s32 unk_08;
} unk_func_001BD420_1;

unk_func_001BD420_0 *HMU_fn_p_vMalloc();
s32 func_002CE3E0();
extern unk_func_001BD420_1 D_005AD930;

void func_001BD420(u8 **arg0) {
    unk_func_001BD420_0 *temp_s0;

    temp_s0 = HMU_fn_p_vMalloc(0x14, 0);
    temp_s0->unk_00 = NULL;
    temp_s0->unk_04 = NULL;
    temp_s0->unk_08 = NULL;
    temp_s0->unk_0C = func_002CE3E0();
    temp_s0->unk_10 = (s32)arg0;
    if (temp_s0->unk_00 != NULL) {
        temp_s0->unk_00->unk_04 = temp_s0->unk_04;
    }
    if (temp_s0->unk_04 != NULL) {
        temp_s0->unk_04->unk_00 = temp_s0->unk_00;
    }
    if (temp_s0->unk_08 != NULL) {
        temp_s0->unk_08->unk_08--;
        if (temp_s0->unk_08->unk_00 == temp_s0) {
            temp_s0->unk_08->unk_00 = temp_s0->unk_00;
        }
        if (temp_s0->unk_08->unk_04 == temp_s0) {
            temp_s0->unk_08->unk_04 = temp_s0->unk_04;
        }
    }
    temp_s0->unk_00 = NULL;
    temp_s0->unk_04 = NULL;
    temp_s0->unk_08 = NULL;
    temp_s0->unk_00 = NULL;
    temp_s0->unk_04 = D_005AD930.unk_04;
    temp_s0->unk_08 = &D_005AD930;
    if (D_005AD930.unk_00 == NULL) {
        D_005AD930.unk_00 = temp_s0;
    } else {
        D_005AD930.unk_04->unk_00 = temp_s0;
    }
    D_005AD930.unk_04 = temp_s0;
    D_005AD930.unk_08++;
    arg0[9][4] = 1;
}
