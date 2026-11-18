/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002E8850_0 {
    struct unk_func_002E8850_0 *unk_00;
    struct unk_func_002E8850_0 *unk_04;
    u32 unk_08;
} unk_func_002E8850_0;

void func_002E8850(unk_func_002E8850_0 **arg0) {
    unk_func_002E8850_0 *p;
    unk_func_002E8850_0 *q;

    p = (*arg0)->unk_00;
    if (p != NULL) {
        while (p->unk_04 != NULL) {
            p = p->unk_04;
        }
        *arg0 = p;
        return;
    }
    while (q = (unk_func_002E8850_0 *)((*arg0)->unk_08 & ~1), *arg0 == q->unk_00) {
        *arg0 = q;
    }
    *arg0 = q;
}
