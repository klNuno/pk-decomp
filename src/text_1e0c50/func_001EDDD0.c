/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001EDDD0_0 {
    struct unk_func_001EDDD0_0 *unk_00;
    struct unk_func_001EDDD0_0 *unk_04;
    struct unk_func_001EDDD0_1 *unk_08;
} unk_func_001EDDD0_0;

typedef struct unk_func_001EDDD0_1 {
    unk_func_001EDDD0_0 *unk_00;
    unk_func_001EDDD0_0 *unk_04;
    s32 unk_08;
} unk_func_001EDDD0_1;

void func_001EE510(unk_func_001EDDD0_0 *);
void HMU_fn_vFree(void *, s32);

void func_001EDDD0(unk_func_001EDDD0_1 *arg0) {
    unk_func_001EDDD0_0 *temp0;
    unk_func_001EDDD0_0 *temp1;
    unk_func_001EDDD0_0 *temp2;
    unk_func_001EDDD0_0 *temp3;
    s32 temp4;
    unk_func_001EDDD0_0 *temp5;

    if (arg0 != NULL) {
        for (temp4 = 0, temp0 = arg0->unk_00, temp5 = temp2 = (temp0 != NULL ? temp0->unk_00 : NULL); temp0 != NULL;
             temp4++, temp0 = temp2, temp3 = temp2 = (temp0 != NULL ? temp0->unk_00 : NULL), (void)temp3) {
            if (temp0->unk_00 != NULL) {
                temp0->unk_00->unk_04 = temp0->unk_04;
            }
            if (temp0->unk_04 != NULL) {
                temp0->unk_04->unk_00 = temp0->unk_00;
            }
            if (temp0->unk_08 != NULL) {
                temp0->unk_08->unk_08--;
                if (temp0->unk_08->unk_00 == temp0) {
                    temp0->unk_08->unk_00 = temp0->unk_00;
                }
                if (temp0->unk_08->unk_04 == temp0) {
                    temp0->unk_08->unk_04 = temp0->unk_04;
                }
            }
            temp0->unk_00 = NULL;
            temp0->unk_04 = NULL;
            temp0->unk_08 = NULL;
            func_001EE510(temp0);
        }
        HMU_fn_vFree(&arg0, 1);
        arg0 = NULL;
    }
}
