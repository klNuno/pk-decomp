/* profile: o0 */
#include "common.h"

void fn_vDecryptBuffer(u8 *arg0, s32 arg1) {
    s32 i;
    s32 seed;
    s32 k;

    seed = 0x224896EB;
    for (i = 0; i < arg1; i++) {
        k = seed >> 12;
        arg0[i] ^= (u8)k;
        seed *= 0x3A41C471;
    }
}
