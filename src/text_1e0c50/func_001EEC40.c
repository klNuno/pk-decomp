/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001EEC40_0 {
    struct unk_func_001EEC40_0 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001EEC40_0;

typedef struct {
    unk_func_001EEC40_0 *unk_00;
} unk_func_001EEC40_1;

s32 func_001F00F0(unk_func_001EEC40_0 *, unk_func_001EEC40_0 *, s32);

s32 func_001EEC40(unk_func_001EEC40_1 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    unk_func_001EEC40_0 *p;
    unk_func_001EEC40_0 *q;
    s32 i;
    unk_func_001EEC40_0 *next;
    unk_func_001EEC40_0 *next2;
    unk_func_001EEC40_0 *first;
    unk_func_001EEC40_0 *first2;

    if (arg0 != NULL && arg1 != 0 && arg2 != 0) {
        for (i = 0, p = arg0->unk_00, first = p; p != NULL; i++, p = p->unk_00, next = p) {
            if (p->unk_0C == arg2) {
                break;
            }
        }
        if (p != NULL) {
            for (i = 0, q = arg0->unk_00, first2 = q; q != NULL; i++, q = q->unk_00, next2 = q) {
                if (q->unk_0C == arg1) {
                    return func_001F00F0(q, p, arg3);
                }
            }
        }
    }
    return -1;
}
