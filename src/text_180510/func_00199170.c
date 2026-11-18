/* profile: o0 */
#include "common.h"

typedef struct {
    u8 unk_00[0x10];
    u32 unk_10;
} unk_func_00199170_0;

void func_00199170(unk_func_00199170_0 *arg0, u8 arg1) {
    u32 i;

    for (i = 0; i < arg0->unk_10; i++) {
        if (arg1 == arg0->unk_00[i]) {
            return;
        }
    }
    arg0->unk_00[arg0->unk_10++] = arg1;
}
