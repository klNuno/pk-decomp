/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x3C];
} unk_func_001CAAA0_0;

extern unk_func_001CAAA0_0 *D_00360064;

unk_func_001CAAA0_0 *func_001CAAA0(u16 arg0, s32) {
    return &D_00360064[arg0];
}
