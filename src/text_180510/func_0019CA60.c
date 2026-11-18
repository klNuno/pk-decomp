/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0019CA60_0 {
    struct unk_func_0019CA60_0 *unk_00;
    struct unk_func_0019CA60_0 *unk_04;
    struct unk_func_0019CA60_1 *unk_08;
} unk_func_0019CA60_0;

typedef struct unk_func_0019CA60_1 {
    unk_func_0019CA60_0 *unk_00;
    unk_func_0019CA60_0 *unk_04;
    s32 unk_08;
} unk_func_0019CA60_1;

void func_0019C9C0(unk_func_0019CA60_0 *);
void HMU_fn_vFree(unk_func_0019CA60_1 **, s32);

void func_0019CA60(unk_func_0019CA60_1 **arg0) {
    unk_func_0019CA60_0 *temp_s0;

    if (*arg0 == NULL) {
        return;
    }
    while ((*arg0)->unk_08 > 0) {
        temp_s0 = (*arg0)->unk_00;
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
        func_0019C9C0(temp_s0);
    }
    HMU_fn_vFree(arg0, 1);
    *arg0 = NULL;
}
