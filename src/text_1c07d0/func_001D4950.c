/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x136];
    u8 unk_136;
    s8 unk_137;
} unk_func_001D4950_0;

typedef struct {
    unk_func_001D4950_0 *unk_00;
} unk_func_001D4950_1;

unk_func_001D4950_1 *HIE_fn_hGetSuperObjectObject();

void func_001D4950(s32 arg0) {
    unk_func_001D4950_0 *p;

    if (arg0 != 0 && HIE_fn_hGetSuperObjectObject(arg0)->unk_00 != NULL) {
        p = HIE_fn_hGetSuperObjectObject(arg0)->unk_00;
        p->unk_137++;
        if (p->unk_137 == p->unk_136) {
            p->unk_137 = 0;
        }
    }
}
