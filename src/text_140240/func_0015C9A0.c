/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0015C9A0_0 {
    u8 pad_00[4];
    u8 unk_04;
    u8 pad_05[0xFF];
} unk_func_0015C9A0_0;

extern unk_func_0015C9A0_0 D_003678B0[];

u8 func_0015C9A0(void) {
    u8 result;
    u32 i;
    u8 temp;

    result = 0xFF;
    for (i = 2; i < 0x12 && result == 0xFF; i++) {
        temp = D_003678B0[i].unk_04;
        if (temp == 4 || temp == 3) {
            result = i - 2;
        }
    }
    return result;
}
