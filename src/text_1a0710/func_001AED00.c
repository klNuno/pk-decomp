/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001AED00_0 {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x4];
    u8 unk_0C;
} unk_func_001AED00_0;

typedef struct unk_func_001AED00_1 {
    s32 unk_00;
    struct unk_func_001AED00_1 *unk_04;
} unk_func_001AED00_1;

typedef struct unk_func_001AED00_2 {
    u8 pad_00[0x74];
    s32 unk_74;
    u8 pad_78[0x1];
    u8 unk_79;
} unk_func_001AED00_2;

typedef struct unk_func_001AED00_3 {
    u8 pad_00[0x10];
    unk_func_001AED00_2 **unk_10;
} unk_func_001AED00_3;

unk_func_001AED00_3 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_001AED00_0 *func_001AEC20(s32);
void func_001AECB0(s32, s32);
extern unk_func_001AED00_1 *D_005ABD88[];

void func_001AED00(void) {
    s32 i;
    unk_func_001AED00_0 *e;
    unk_func_001AED00_1 *elem;
    unk_func_001AED00_1 *next;
    unk_func_001AED00_1 *a;
    unk_func_001AED00_1 *b;
    unk_func_001AED00_2 *s;
    s32 h;

    for (i = 0; i <= 4; i++) {
        e = func_001AEC20(i);
        e->unk_04 = 0;
        e->unk_0C = 0;
    }
    for (i = 0, elem = D_005ABD88[0], a = next = (elem != NULL ? elem->unk_04 : NULL); elem != NULL;
         i++, elem = next, b = next = (elem != NULL ? elem->unk_04 : NULL)) {
        if (elem != NULL) {
            h = elem->unk_00;
            s = *HIE_fn_hGetSuperObjectObject(h)->unk_10;
            if (s->unk_79 && s->unk_74 != -1) {
                func_001AECB0(s->unk_74, h);
            }
        }
    }
}
