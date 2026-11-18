/* profile: o0_p */
#include "common.h"

typedef struct {
    u8 unk_00[0x10];
    u32 unk_10;
} unk_func_00199200_0;

u8 func_00199200(unk_func_00199200_0 *arg0, u8 arg1) {
    u8 found;
    u32 i;

    found = 0;
    for (i = 0; !found && i < arg0->unk_10; i++) {
        found = arg1 == arg0->unk_00[i];
    }
    return found;
}
