/* profile: o0 */
#include "common.h"

typedef struct unk_func_001B6FA0_0 {
    u8 pad_00[0x42];
    u8 unk_42;
} unk_func_001B6FA0_0;

void func_001B6FA0(unk_func_001B6FA0_0 *arg0, u8 arg1) {
    if (arg1) {
        arg0->unk_42 |= 0x20;
    } else {
        arg0->unk_42 &= 0xDF;
    }
}
