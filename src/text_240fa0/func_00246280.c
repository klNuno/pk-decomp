/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    void *unk_04;
    u8 pad_08[0x14B0];
} unk_func_00246280_0;

extern unk_func_00246280_0 D_0060CD50[];

unk_func_00246280_0 *func_00246280(void *arg0) {
    u8 i;

    for (i = 0; i < 8; i++) {
        if (D_0060CD50[i].unk_04 == arg0) {
            return &D_0060CD50[i];
        }
    }
    return NULL;
}
