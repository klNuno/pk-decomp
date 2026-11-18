/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
} unk_func_001C8560_0;

extern s32 D_0035FFE8;
extern unk_func_001C8560_0 D_005C2560[];

void func_001C8560(s32 arg0, unk_func_001C8560_0 **arg1, s32 arg2) {
    *arg1 = &D_005C2560[D_0035FFE8];
    D_0035FFE8 += arg0;
}
