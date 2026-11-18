#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_00162220_0;

void *HMU_fn_p_vMalloc();

unk_func_00162220_0 *func_00162220(void) {
    unk_func_00162220_0 *p;

    p = HMU_fn_p_vMalloc(8, 0);
    if (p != NULL) {
        p->unk_00 = -1;
        p->unk_04 = -1;
        return p;
    }
    return NULL;
}
