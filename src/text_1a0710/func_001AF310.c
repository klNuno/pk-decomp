/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001AF310_0 {
    s32 unk_00;
    struct unk_func_001AF310_0 *unk_04;
} unk_func_001AF310_0;

typedef struct {
    u8 pad_00[0x74];
    s32 unk_74;
    u8 pad_78;
    u8 unk_79;
} unk_func_001AF310_1;

typedef struct {
    u8 pad_00[0x4];
    unk_func_001AF310_1 *unk_04;
    u8 pad_08[0x4];
    unk_func_001AF310_1 *unk_0C;
    u8 pad_10[0x64];
    u8 unk_74;
} unk_func_001AF310_2;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001AF310_2 *unk_10;
} unk_func_001AF310_3;

typedef struct {
    u8 pad_00[0xC];
    u8 unk_0C;
} unk_func_001AF310_4;

unk_func_001AF310_3 *HIE_fn_hGetSuperObjectObject();
void func_001A2220();
unk_func_001AF310_4 *func_001AEC20();
void func_001AEF90();
extern unk_func_001AF310_0 *D_005ABD88[];

void func_001AF310(void) {
    unk_func_001AF310_0 *node;
    s32 i;
    unk_func_001AF310_1 *d;
    s32 so;
    unk_func_001AF310_4 *p;
    unk_func_001AF310_0 *t1;
    unk_func_001AF310_0 *t0;

    for (i = 0, t0 = node = D_005ABD88[0]; node != NULL; i++, t1 = node = node->unk_04) {
        if (node != NULL) {
            so = node->unk_00;
            if (HIE_fn_hGetSuperObjectObject(so)->unk_10->unk_74 & 1) {
                d = HIE_fn_hGetSuperObjectObject(so)->unk_10->unk_0C;
            } else {
                d = HIE_fn_hGetSuperObjectObject(so)->unk_10->unk_04;
            }
            if (d->unk_79 || d->unk_74 != -1) {
                if (d->unk_74 != -1) {
                    func_001A2220(node->unk_00, 1);
                } else {
                    func_001A2220(node->unk_00, 0);
                }
            }
        }
    }
    for (i = 3; i >= 0; i--) {
        p = func_001AEC20(i);
        if (p->unk_0C) {
            func_001AEF90(i);
        }
    }
}
