/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001B5010_1 unk_func_001B5010_1;

typedef struct unk_func_001B5010_0 {
    u8 pad_00[0x4];
    struct unk_func_001B5010_0 *unk_04;
    struct unk_func_001B5010_0 *unk_08;
    unk_func_001B5010_1 *unk_0C;
} unk_func_001B5010_0;

struct unk_func_001B5010_1 {
    unk_func_001B5010_0 *unk_00;
    unk_func_001B5010_0 *unk_04;
    s32 unk_08;
};

void HMU_fn_vFree(unk_func_001B5010_0 **, s32);
extern unk_func_001B5010_0 *D_005ABD88[];
extern s32 D_005ABD8C[];
extern s32 D_005ABD90[];

void func_001B5010(void) {
    s32 i;
    unk_func_001B5010_0 *p;
    unk_func_001B5010_0 *next;
    unk_func_001B5010_0 *next2;
    unk_func_001B5010_0 *next3;

    for (i = 0, p = D_005ABD88[0], next2 = next = (p ? p->unk_04 : NULL); p != NULL;
         i++, p = next, next3 = next = (p ? p->unk_04 : NULL), (void)next3) {
        if (p->unk_04 != NULL) {
            p->unk_04->unk_08 = p->unk_08;
        }
        if (p->unk_08 != NULL) {
            p->unk_08->unk_04 = p->unk_04;
        }
        if (p->unk_0C != NULL) {
            p->unk_0C->unk_08--;
            if (p->unk_0C->unk_00 == p) {
                p->unk_0C->unk_00 = p->unk_04;
            }
            if (p->unk_0C->unk_04 == p) {
                p->unk_0C->unk_04 = p->unk_08;
            }
        }
        p->unk_04 = NULL;
        p->unk_08 = NULL;
        p->unk_0C = NULL;
        HMU_fn_vFree(&p, 0);
    }
    D_005ABD88[0] = NULL;
    D_005ABD8C[0] = 0;
    D_005ABD90[0] = 0;
}
