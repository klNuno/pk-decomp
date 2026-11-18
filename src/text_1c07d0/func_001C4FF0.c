/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001C4FF0_1 {
    u8 pad_00[8];
    struct unk_func_001C4FF0_0 *unk_08;
    struct unk_func_001C4FF0_0 *unk_0C;
    s32 unk_10;
} unk_func_001C4FF0_1;

typedef struct unk_func_001C4FF0_0 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0xC];
    struct unk_func_001C4FF0_0 *unk_14;
    struct unk_func_001C4FF0_0 *unk_18;
    unk_func_001C4FF0_1 *unk_1C;
} unk_func_001C4FF0_0;

extern u32 D_0035FFF0;
extern u32 D_0035FFF4;
extern s32 D_0035FFF8;
extern u32 D_00360000;
extern u16 D_005DFB60[];

unk_func_001C4FF0_0 *func_00199810(s32, s32);
void func_0019A290(unk_func_001C4FF0_0 *, s32);
void func_0019A2C0(unk_func_001C4FF0_0 *, s32);

unk_func_001C4FF0_0 *func_001C4FF0(void) {
    unk_func_001C4FF0_0 *p;

    D_0035FFF0++;
    if ((s64)D_0035FFF0 >= 0x400) {
        p = func_00199810(D_0035FFF8, 0x400);
    } else {
        while (D_005DFB60[D_0035FFF4]) {
            D_0035FFF4++;
            if ((s64)D_0035FFF4 == 0x400) {
                D_0035FFF4 = 0;
            }
        }
        D_005DFB60[D_0035FFF4] = 1;
        p = func_00199810(D_0035FFF8, D_0035FFF4);
    }
    func_0019A290(p, -1);
    func_0019A2C0(p, 0);
    if (D_00360000 < D_0035FFF4) {
        D_00360000 = D_0035FFF4;
    }
    if (p->unk_14 != NULL) {
        p->unk_14->unk_18 = p->unk_18;
    }
    if (p->unk_18 != NULL) {
        p->unk_18->unk_14 = p->unk_14;
    }
    if (p->unk_1C != NULL) {
        p->unk_1C->unk_10--;
        if (p->unk_1C->unk_08 == p) {
            p->unk_1C->unk_08 = p->unk_14;
        }
        if (p->unk_1C->unk_0C == p) {
            p->unk_1C->unk_0C = p->unk_18;
        }
    }
    p->unk_14 = NULL;
    p->unk_18 = NULL;
    p->unk_1C = NULL;
    p->unk_00 = 1;
    p->unk_04 = 0;
    return p;
}
