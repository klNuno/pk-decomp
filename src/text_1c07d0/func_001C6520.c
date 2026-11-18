/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001C6520_0 {
    u8 pad_00[0x14];
    struct unk_func_001C6520_0 *unk_14;
} unk_func_001C6520_0;

typedef struct {
    u8 pad_00[0x8];
    unk_func_001C6520_0 *unk_08;
} unk_func_001C6520_1;

s32 func_001BFB20(unk_func_001C6520_1 *);
void func_001C6400(unk_func_001C6520_0 *);
s32 func_001C8340(unk_func_001C6520_1 *);

void func_001C6520(unk_func_001C6520_1 *arg0) {
    unk_func_001C6520_0 *p;
    unk_func_001C6520_0 *next;
    s32 i;
    unk_func_001C6520_0 *first;

    if ((func_001BFB20(arg0) & 2) || func_001C8340(arg0) != 0) {
        i = 0;
        first = p = arg0->unk_08;
        while (p != NULL) {
            func_001C6400(p);
            i++;
            next = p = p->unk_14;
            (void)next;
        }
    }
}
