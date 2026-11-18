/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x123];
    s8 unk_123;
} unk_func_001D4870_1;

typedef struct {
    unk_func_001D4870_1 *unk_00;
} unk_func_001D4870_0;

unk_func_001D4870_0 *HIE_fn_hGetSuperObjectObject();

u8 func_001D4870(s32 arg0) {
    unk_func_001D4870_1 *p;

    if (arg0 != 0 && HIE_fn_hGetSuperObjectObject(arg0)->unk_00 != NULL) {
        p = HIE_fn_hGetSuperObjectObject(arg0)->unk_00;
        return p->unk_123 == 0;
    }
    return 1;
}
