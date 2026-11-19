/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001AF230_0 {
    s32 unk_00;
    struct unk_func_001AF230_0 *unk_04;
} unk_func_001AF230_0;

typedef struct unk_func_001AF230_1 {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_001AF230_1;

typedef struct unk_func_001AF230_2 {
    u8 pad_00[0x10];
    unk_func_001AF230_1 *unk_10;
} unk_func_001AF230_2;

unk_func_001AF230_2 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001B4CB0(s32);
extern unk_func_001AF230_0 *D_005ABD88[];

s32 func_001AF230(s32 arg0) {
    unk_func_001AF230_0 *first;
    s32 i;
    unk_func_001AF230_0 *next;
    unk_func_001AF230_1 *obj;
    unk_func_001AF230_0 *p;
    s32 n;

    n = 0;
    i = 0;
    p = D_005ABD88[0];
    first = p;
    while (p != NULL) {
        obj = HIE_fn_hGetSuperObjectObject(p->unk_00)->unk_10;
        if (func_001B4CB0(obj->unk_04)) {
            n++;
        }
        if (n == arg0) {
            if (p != NULL) {
                return p->unk_00;
            }
            return 0;
        }
        i++;
        p = p->unk_04;
        next = p;
        (void)next;
    }
    return 0;
}
