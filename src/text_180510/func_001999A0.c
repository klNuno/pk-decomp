/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001999A0_0 {
    struct unk_func_001999A0_0 *unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
} unk_func_001999A0_0;

void func_00197250(s32, s32);
extern unk_func_001999A0_0 *D_003338C4[];

void func_001999A0(s32 arg0) {
    unk_func_001999A0_0 *node;
    unk_func_001999A0_0 *next;
    unk_func_001999A0_0 *first;
    s32 i;

    i = 0;
    first = node = D_003338C4[0];
    while (node != 0) {
        func_00197250(node->unk_10, arg0);
        i++;
        next = node = node->unk_00;
        (void)next;
    }
}
