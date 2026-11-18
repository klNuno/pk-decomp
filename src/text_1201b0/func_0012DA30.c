#include "common.h"

extern s32 D_0035F8A8;

void func_0012DA30(u8 *arg0) {
    if (*(s32 *)(arg0 + 0x28) != -1) {
        if (D_0035F8A8 != 0) {
            *(s32 *)(arg0 + 0x28) = D_0035F8A8 - 1;
        } else {
            *(s32 *)(arg0 + 0x28) = D_0035F8A8 - 2;
        }
    }
}
