/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001ECC10_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_001ECC10_0;

unk_func_001ECC10_0 *HIE_fn_hGetSuperObjectObject();
s32 *HMU_fn_p_vMalloc();
void HMU_fn_vFree();
void **fn_p_stBrainGetMind();
void func_001EC3E0();
s32 func_001ED550(u8 *, u8);

void func_001ECC10(u8 *arg0, void *arg1) {
    s32 obj;
    u8 j;
    u8 i;
    u8 count;
    s32 *list;

    i = 0;
    count = 0;
    list = HMU_fn_p_vMalloc(*arg0, 1);
    obj = func_001ED550(arg0, i);
    while (obj != 0) {
        if (HIE_fn_hGetSuperObjectObject(obj)->unk_0C != 0) {
            if (*fn_p_stBrainGetMind(HIE_fn_hGetSuperObjectObject(obj)->unk_0C) == arg1) {
                list[count++] = obj;
            }
        }
        i++;
        obj = func_001ED550(arg0, i);
    }
    *arg0 = 0;
    for (j = 0; j < count; j++) {
        func_001EC3E0(arg0, list[j]);
    }
    HMU_fn_vFree(&list, 1);
}
