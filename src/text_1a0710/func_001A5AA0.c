/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001A5AA0_0 {
    u8 pad_00[8];
    struct unk_func_001A5AA0_0 *unk_08;
    u8 pad_0C[8];
    struct unk_func_001A5AA0_0 *unk_14;
} unk_func_001A5AA0_0;

u32 func_0019B200(unk_func_001A5AA0_0 *);
void func_0019A290(unk_func_001A5AA0_0 *, u32);

void func_001A5AA0(unk_func_001A5AA0_0 *arg0) {
    unk_func_001A5AA0_0 *child;
    unk_func_001A5AA0_0 *first;
    unk_func_001A5AA0_0 *next;

    func_0019A290(arg0, func_0019B200(arg0) | 0xEFFFFFFF);
    {
        s32 i;
        for (i = 0, first = child = arg0->unk_08; child != NULL; i++, next = child = child->unk_14, (void)next) {
            func_001A5AA0(child);
        }
    }
}
