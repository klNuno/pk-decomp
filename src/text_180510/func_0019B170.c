/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[0x10];
} unk_func_0019B170_0;

extern unk_func_0019B170_0 *D_005ABDC4[];

s32 *func_0019B170(u8 arg0) {
    return &D_005ABDC4[0][arg0].unk_14;
}
