/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001BD720_1 unk_func_001BD720_1;

typedef struct unk_func_001BD720_0 {
    unk_func_001BD720_1 *unk_00;
    unk_func_001BD720_1 *unk_04;
    s32 unk_08;
} unk_func_001BD720_0;

struct unk_func_001BD720_1 {
    unk_func_001BD720_1 *unk_00;
    unk_func_001BD720_1 *unk_04;
    unk_func_001BD720_0 *unk_08;
    s32 unk_0C;
};

void func_002CE3B0(s32);
void HMU_fn_vFree(void *, s32);
extern unk_func_001BD720_0 D_005AD930;

void func_001BD720(void) {
    unk_func_001BD720_1 *elem;
    unk_func_001BD720_1 *nB;
    unk_func_001BD720_1 *nA;
    s32 i;
    unk_func_001BD720_1 *next;

    i = 0;
    elem = D_005AD930.unk_00;
    nA = next = elem ? elem->unk_00 : NULL;
    while (elem != NULL) {
        func_002CE3B0(elem->unk_0C);
        if (elem->unk_00 != NULL) {
            elem->unk_00->unk_04 = elem->unk_04;
        }
        if (elem->unk_04 != NULL) {
            elem->unk_04->unk_00 = elem->unk_00;
        }
        if (elem->unk_08 != NULL) {
            elem->unk_08->unk_08--;
            if (elem->unk_08->unk_00 == elem) {
                elem->unk_08->unk_00 = elem->unk_00;
            }
            if (elem->unk_08->unk_04 == elem) {
                elem->unk_08->unk_04 = elem->unk_04;
            }
        }
        elem->unk_00 = NULL;
        elem->unk_04 = NULL;
        elem->unk_08 = NULL;
        HMU_fn_vFree(&elem, 0);
        i++;
        elem = next;
        nB = next = elem ? elem->unk_00 : NULL;
        (void)nB;
    }
    D_005AD930.unk_00 = NULL;
    D_005AD930.unk_04 = NULL;
    D_005AD930.unk_08 = 0;
}
