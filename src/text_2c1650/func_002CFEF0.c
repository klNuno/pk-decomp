/* profile: opt_301 */
#include "common.h"

typedef struct unk_func_002CFEF0_0 {
    struct unk_func_002CFEF0_0 *unk_00;
    struct unk_func_002CFEF0_0 *unk_04;
    u32 unk_08;
} unk_func_002CFEF0_0;

void func_002CFEF0(unk_func_002CFEF0_0 **arg0) {
    unk_func_002CFEF0_0 *n;
    unk_func_002CFEF0_0 *cur;
    unk_func_002CFEF0_0 *p;

    n = (*arg0)->unk_04;
    if (n != NULL) {
        while (n->unk_00 != NULL) {
            n = n->unk_00;
        }
        *arg0 = n;
    } else {
        while ((cur = *arg0) != (p = (unk_func_002CFEF0_0 *)(cur->unk_08 & ~1))->unk_00) {
            *arg0 = p;
        }
        *arg0 = p;
    }
}
