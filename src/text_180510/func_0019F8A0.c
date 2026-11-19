/* profile: o0_p */
#include "common.h"

typedef struct unk_func_0019F8A0_0 {
    struct unk_func_0019F8A0_0 *unk_00;
    struct unk_func_0019F8A0_0 *unk_04;
    struct unk_func_0019F8A0_1 *unk_08;
} unk_func_0019F8A0_0;

typedef struct unk_func_0019F8A0_1 {
    unk_func_0019F8A0_0 *unk_00;
    unk_func_0019F8A0_0 *unk_04;
    s32 unk_08;
} unk_func_0019F8A0_1;

extern unk_func_0019F8A0_0 *D_005ABD98[];

void func_0019F8A0(void) {
    unk_func_0019F8A0_0 *p;
    unk_func_0019F8A0_0 *next;
    s32 count;
    unk_func_0019F8A0_0 *a;
    unk_func_0019F8A0_0 *b;

    count = 0;
    p = D_005ABD98[0];
    a = next = p != NULL ? p->unk_00 : NULL;
    while (p != NULL) {
        if (p->unk_00 != NULL) {
            p->unk_00->unk_04 = p->unk_04;
        }
        if (p->unk_04 != NULL) {
            p->unk_04->unk_00 = p->unk_00;
        }
        if (p->unk_08 != NULL) {
            p->unk_08->unk_08--;
            if (p->unk_08->unk_00 == p) {
                p->unk_08->unk_00 = p->unk_00;
            }
            if (p->unk_08->unk_04 == p) {
                p->unk_08->unk_04 = p->unk_04;
            }
        }
        p->unk_00 = NULL;
        p->unk_04 = NULL;
        p->unk_08 = NULL;
        count++;
        p = next;
        b = next = p != NULL ? p->unk_00 : NULL;
        (void)b;
    }
}
