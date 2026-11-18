/* profile: o0_p */
#include "common.h"

typedef struct {
    u8 pad_00[0xF4];
    s32 unk_F4[1];
} unk_func_001A9770_0;

extern unk_func_001A9770_0 D_005AB790;
extern u8 D_005AB880[];

u8 func_001A9770(s32 arg0) {
    s32 i = 0;
    s32 found = 0;

    do {
        if (D_005AB790.unk_F4[i] == arg0) {
            found = 1;
        } else {
            i++;
        }
    } while (i < D_005AB880[0] && !found);
    if (found) {
        return i + 1;
    }
    return 0;
}
