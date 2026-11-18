/* profile: o0 */
#include "common.h"

typedef struct unk_func_001AAEA0_0 {
    u8 pad_00[0x106];
    s16 unk_106[0x11D];
    s32 unk_340[1];
} unk_func_001AAEA0_0;

void func_0016DDD0(s16, s16, s32);
extern unk_func_001AAEA0_0 D_005AB790[];
extern u8 D_005AB880[];
extern s16 D_005AB894[];

void func_001AAEA0(void) {
    u8 i;

    for (i = 0; i < (u8)(u8)D_005AB880[0]; i++) {
        func_0016DDD0(D_005AB894[0], D_005AB790->unk_106[i], D_005AB790->unk_340[i]);
    }
}
