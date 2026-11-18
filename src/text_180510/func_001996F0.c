/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    u8 unk_10;
} unk_func_001996F0_0;

unk_func_001996F0_0 *func_00199580();
unk_func_001996F0_0 *func_00199590();

void func_001996F0(void) {
    unk_func_001996F0_0 *p;

    for (p = func_00199580(); p != NULL; p = func_00199590(p, 0)) {
        p->unk_10 = 1;
    }
}
