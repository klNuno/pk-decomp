/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
} unk_func_001ABC30_1;

typedef struct {
    u8 pad_00[0x54];
    unk_func_001ABC30_1 *unk_54;
    s32 unk_58;
} unk_func_001ABC30_0;

void *func_001ABBD0(unk_func_001ABC30_1 *);

unk_func_001ABC30_1 *func_001ABC30(unk_func_001ABC30_0 *arg0, void *arg1) {
    unk_func_001ABC30_1 *p;
    s32 i;
    unk_func_001ABC30_1 *cur;
    s32 other;

    p = arg0->unk_54;
    i = 0;
    other = 0;
    while (i < arg0->unk_58) {
        if (func_001ABBD0(p) == arg1) {
            return p;
        }
        i++;
        p++;
        cur = p;
    }
    return NULL;
}
