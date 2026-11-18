/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0xC];
} unk_func_001B1340_0;

s32 func_001B1340(unk_func_001B1340_0 *arg0, u16 arg1) {
    s32 temp;

    if (arg0 != NULL) {
        temp = arg0[arg1].unk_04;
    } else {
        temp = 0;
    }
    return temp;
}
