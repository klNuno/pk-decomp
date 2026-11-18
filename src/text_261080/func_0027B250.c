/* profile: opt_300 */
#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} unk_func_0027B250_0;

typedef struct {
    unk_func_0027B250_0 *unk_00;
    u32 unk_04;
} unk_func_0027B250_1;

void HMU_fn_vFree();
void func_00161920();
extern unk_func_0027B250_1 D_007AB4C0[];
extern void *D_007AB7E0[];

void func_0027B250(s32 arg0) {
    unk_func_0027B250_1 *entry;
    unk_func_0027B250_0 *p;
    void **ptr;
    u32 i;
    u32 n;

    entry = &D_007AB4C0[arg0];
    n = D_007AB4C0[arg0].unk_04;
    p = entry->unk_00;
    for (i = 0; i < n; i++) {
        *p->unk_00 = p->unk_04;
        p++;
    }
    func_00161920();
    ptr = &D_007AB7E0[arg0];
    HMU_fn_vFree(ptr, 0);
    if (entry->unk_00 != NULL) {
        HMU_fn_vFree(entry, 0);
    }
    *ptr = NULL;
    entry->unk_00 = NULL;
}
