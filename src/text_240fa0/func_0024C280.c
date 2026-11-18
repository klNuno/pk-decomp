/* profile: o0_p */
#include "common.h"

typedef struct {
    s8 unk_00;
    u8 pad_01[0xB];
    void *unk_0C;
    s32 unk_10;
    u8 pad_14[0x14A4];
} unk_func_0024C280_0;

extern unk_func_0024C280_0 D_0060CD50[];

s32 func_0024C280(void *arg0) {
    u8 i;

    if (arg0) {
        for (i = 0; i < 8; i++) {
            if (D_0060CD50[i].unk_0C == arg0) {
                if (D_0060CD50[i].unk_00 >= 0) {
                    return D_0060CD50[i].unk_10;
                }
            }
        }
    }
    return 0;
}
