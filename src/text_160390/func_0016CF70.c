#include "common.h"

typedef struct unk_func_0016CF70_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0x44];
    s32 unk_50;
} unk_func_0016CF70_0;

void HMU_fn_vFree(void *, s32);

void func_0016CF70(unk_func_0016CF70_0 *arg0) {
    if (arg0 != NULL) {
        arg0->unk_00 = 0;
        if (arg0->unk_50 != 0) {
            HMU_fn_vFree(&arg0->unk_50, 1);
        }
        if (arg0->unk_08 != 0) {
            HMU_fn_vFree(&arg0->unk_08, 1);
        }
        if (arg0->unk_04 != 0) {
            HMU_fn_vFree(&arg0->unk_04, 1);
        }
        arg0->unk_04 = 0;
        HMU_fn_vFree(&arg0, 1);
    }
}
