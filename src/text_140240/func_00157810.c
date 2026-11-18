/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    void *unk_04;
    void *unk_08;
} unk_func_00157810_1;

typedef struct {
    s16 unk_00;
    unk_func_00157810_1 *unk_04;
} unk_func_00157810_0;

void HMU_fn_vFree(void *, s32);

void func_00157810(unk_func_00157810_0 *arg0) {
    s16 i;

    for (i = 0; i < arg0->unk_00; i++) {
        if (arg0->unk_04[i].unk_04 != NULL) {
            HMU_fn_vFree(&arg0->unk_04[i].unk_04, 0);
        }
        if (arg0->unk_04[i].unk_08 != NULL) {
            HMU_fn_vFree(&arg0->unk_04[i].unk_08, 0);
        }
    }
    HMU_fn_vFree(&arg0->unk_04, 0);
    HMU_fn_vFree(&arg0, 0);
}
