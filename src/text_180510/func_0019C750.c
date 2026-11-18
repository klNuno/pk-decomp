/* profile: o0 */
#include "common.h"

void func_0019C750(u8 *arg0, u8 arg1) {
    s32 temp;

    if (arg0 != NULL) {
        temp = *(s32 *)(arg0 + 0x30);
        if (arg1) {
            *(s32 *)(arg0 + 0x30) = temp & ~0x83;
        } else {
            *(s32 *)(arg0 + 0x30) = temp | 1 | 2 | 0x80;
        }
    }
}
