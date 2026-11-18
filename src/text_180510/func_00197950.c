/* profile: o0 */
#include "common.h"

typedef struct unk_func_00197950_0 {
    u8 pad_00[0x29];
    u8 unk_29;
} unk_func_00197950_0;

void func_00197950(unk_func_00197950_0 *arg0, u8 arg1) {
    if (arg1) {
        arg0->unk_29 |= 2;
    } else {
        arg0->unk_29 &= 0xFD;
    }
}
