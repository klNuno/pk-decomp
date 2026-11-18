/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001CA490_0 {
    u8 pad_00[0xC];
} unk_func_001CA490_0;

typedef struct unk_func_001CA490_1 {
    u8 pad_00[0x5E];
    u8 unk_5E;
} unk_func_001CA490_1;

typedef struct unk_func_001CA490_2 {
    u8 pad_00[0xC];
    unk_func_001CA490_1 **unk_0C;
    u8 *unk_10;
    u8 pad_14[0x10];
    u8 unk_24;
} unk_func_001CA490_2;

unk_func_001CA490_0 *func_001CBDA0(unk_func_001CA490_1 *, s32, s32);
u8 *HMU_fn_p_vMalloc(s32, s32);
u8 func_001CA410(unk_func_001CA490_0 *);

void func_001CA490(s32 arg0, unk_func_001CA490_2 *arg1) {
    u8 i;
    unk_func_001CA490_0 *p;
    unk_func_001CA490_0 *temp;
    u8 n;

    p = func_001CBDA0(*arg1->unk_0C, 0, 0);
    if (p != NULL) {
        n = (*arg1->unk_0C)->unk_5E;
        arg1->unk_10 = HMU_fn_p_vMalloc(n, 1);
        arg1->unk_24 = 0;
        i = 0;
        while (i < n) {
            arg1->unk_10[i] = func_001CA410(p);
            i++;
            temp = p++;
            temp = temp;
        }
    } else {
        arg1->unk_10 = NULL;
        arg1->unk_24 = 0;
    }
}
