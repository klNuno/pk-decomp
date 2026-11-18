/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001EE5A0_0 {
    struct unk_func_001EE5A0_0 *unk_00;
    struct unk_func_001EE5A0_0 *unk_04;
    struct unk_func_001EE5A0_1 *unk_08;
} unk_func_001EE5A0_0;

typedef struct unk_func_001EE5A0_1 {
    unk_func_001EE5A0_0 *unk_00;
    unk_func_001EE5A0_0 *unk_04;
    s32 unk_08;
} unk_func_001EE5A0_1;

void HMU_fn_vFree(void *, s32);
void func_001F0AE0(unk_func_001EE5A0_0 *);

void func_001EE5A0(unk_func_001EE5A0_0 **arg0) {
    s32 i;
    unk_func_001EE5A0_0 *elem;
    unk_func_001EE5A0_0 *next;
    unk_func_001EE5A0_0 *a;
    unk_func_001EE5A0_0 *b;

    for (i = 0, elem = *arg0, a = next = (elem != NULL ? elem->unk_00 : NULL); elem != NULL;
         i++, elem = next, b = next = (elem != NULL ? elem->unk_00 : NULL), (void)b) {
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
        func_001F0AE0(elem);
    }
    HMU_fn_vFree(&arg0, 1);
    arg0 = NULL;
}
