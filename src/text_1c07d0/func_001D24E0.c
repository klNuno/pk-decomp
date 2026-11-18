/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001D24E0_0 {
    s32 unk_00;
    s32 unk_04;
    struct unk_func_001D24E0_0 *unk_08;
} unk_func_001D24E0_0;

extern unk_func_001D24E0_0 *D_00360080;

s32 func_001D24E0(s32 arg0, s32 arg1) {
    s32 key;
    unk_func_001D24E0_0 *p;

    key = ((arg0 & 0xFFFF) << 16) + (arg1 & 0xFFFF);
    for (p = D_00360080; p != NULL; p = p->unk_08) {
        if (p->unk_00 == key) {
            return p->unk_04;
        }
    }
    return 0;
}
