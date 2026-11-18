/* profile: o0 */
#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
    s32 *unk_04;
} unk_func_001ED550_0;

s32 func_001ED550(unk_func_001ED550_0 *arg0, u8 arg1) {
    if (arg0->unk_00 == 0) {
        return 0;
    }
    if (arg1 >= arg0->unk_00 && arg1 != 0xFF) {
        return 0;
    }
    if (arg1 == 0xFF) {
        return arg0->unk_04[arg0->unk_00 - 1];
    }
    return arg0->unk_04[arg1];
}
