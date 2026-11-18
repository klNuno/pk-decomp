/* profile: o0 */
#include "common.h"

typedef struct unk_func_001EEFA0_0 {
    s32 unk_00;
    struct unk_func_001EEFA0_0 *unk_04;
} unk_func_001EEFA0_0;

void func_001EEEC0(s32);
extern unk_func_001EEFA0_0 *D_005ACAE4[];

void func_001EEFA0(void) {
    unk_func_001EEFA0_0 *p;

    for (p = D_005ACAE4[0]; p != NULL; p = p->unk_04) {
        func_001EEEC0(p->unk_00);
    }
}
