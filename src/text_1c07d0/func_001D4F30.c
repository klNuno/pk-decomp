/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001D4F30_1 unk_func_001D4F30_1;

typedef struct unk_func_001D4F30_0 {
    unk_func_001D4F30_1 *unk_00;
    unk_func_001D4F30_1 *unk_04;
    s32 unk_08;
} unk_func_001D4F30_0;

struct unk_func_001D4F30_1 {
    unk_func_001D4F30_1 *unk_00;
    unk_func_001D4F30_1 *unk_04;
    unk_func_001D4F30_0 *unk_08;
    s32 *unk_0C;
};

typedef struct unk_func_001D4F30_2 {
    u8 pad_00[0x18];
    s32 *unk_18;
} unk_func_001D4F30_2;

typedef struct unk_func_001D4F30_3 {
    u8 pad_00[0x14];
    unk_func_001D4F30_2 *unk_14;
    u8 pad_18[0x140];
    unk_func_001D4F30_1 *unk_158;
} unk_func_001D4F30_3;

unk_func_001D4F30_3 **HIE_fn_hGetSuperObjectObject(s32);
void HMU_fn_vFree(void *, s32);
void func_001CA5A0(s32, unk_func_001D4F30_1 *);

void func_001D4F30(s32 arg0, s32 arg1) {
    unk_func_001D4F30_3 *obj;
    s32 *target;
    s32 idx;
    unk_func_001D4F30_1 *c2;
    unk_func_001D4F30_1 *next;
    unk_func_001D4F30_1 *c1;
    unk_func_001D4F30_1 *p;

    obj = *HIE_fn_hGetSuperObjectObject(arg0);
    idx = 0;
    target = &obj->unk_14->unk_18[arg1];
    idx = 0;
    idx = 0;
    p = obj->unk_158;
    c1 = next = p ? p->unk_00 : NULL;
    while (p != NULL) {
        if (p->unk_0C == target) {
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
            func_001CA5A0(arg0, p);
            HMU_fn_vFree(&p, 1);
            return;
        }
        idx++;
        p = next;
        c2 = next = p ? p->unk_00 : NULL;
        (void)c2;
    }
}
