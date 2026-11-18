/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001D2940_0 {
    u8 pad_00[0x128];
    u8 unk_128;
    u8 pad_129[0x57];
    struct unk_func_001D2940_0 *unk_180;
} unk_func_001D2940_0;

s32 func_001D2940(unk_func_001D2940_0 **arg0) {
    unk_func_001D2940_0 *p;

    p = *arg0;
    while (p != NULL) {
        if (p->unk_128) {
            return 1;
        }
        p = p->unk_180;
    }
    return 0;
}
