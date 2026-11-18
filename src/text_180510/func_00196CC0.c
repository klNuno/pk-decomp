#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    void *unk_0C;
    void *unk_10;
    void *unk_14;
    u8 pad_18[8];
    s16 unk_20;
    s16 unk_22;
    s16 unk_24;
} unk_func_00196CC0_0;

void *HMU_fn_p_vMalloc();
void memset();
void func_001942F0();

void func_00196CC0(unk_func_00196CC0_0 **arg0, s32 arg1, s32 arg2, s32 arg3) {
    unk_func_00196CC0_0 *temp;
    s32 temp2;

    temp = HMU_fn_p_vMalloc(0x88, 1);
    temp->unk_22 = arg2;
    temp->unk_20 = arg1;
    temp2 = (s16)arg2;
    temp->unk_0C = HMU_fn_p_vMalloc(temp2 * 2, 1);
    temp->unk_10 = HMU_fn_p_vMalloc(temp2 * 4, 1);
    temp2 = (s16)arg1 * 0xC;
    temp->unk_00 = HMU_fn_p_vMalloc(temp2, 1);
    memset(temp->unk_00, 0, temp2);
    temp->unk_08 = 0;
    temp->unk_14 = NULL;
    temp->unk_14 = HMU_fn_p_vMalloc((s16)arg3 * 0x1C, 1);
    *arg0 = temp;
    func_001942F0(*arg0, arg1, arg2);
    (*arg0)->unk_24 = arg3;
}
