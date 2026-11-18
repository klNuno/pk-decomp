/* profile: o0_301_p */
#include "common.h"

typedef struct unk_Q_0 {
    struct unk_Q_0 *unk_00;
    struct unk_Q_0 *unk_04;
    struct unk_Q_1 *unk_08;
    s32 *unk_0C;
    u8 pad_10[0x4];
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    f32 unk_20;
    u8 pad_24;
    u8 unk_25;
    u8 pad_26[0x2];
} unk_Q_0;

typedef struct unk_Q_1 {
    unk_Q_0 *unk_00;
    unk_Q_0 *unk_04;
    s32 unk_08;
} unk_Q_1;

typedef struct {
    u8 pad_00[0x18];
    s32 *unk_18;
} unk_Q_2;

typedef struct {
    u8 pad_00[0x14];
    unk_Q_2 *unk_14;
    u8 pad_18[0x140];
    unk_Q_1 unk_158;
} unk_Q_3;

unk_Q_3 **HIE_fn_hGetSuperObjectObject(s32);
s32 func_001D5410(s32, s32);
void func_001CA490(s32, unk_Q_0 *);
unk_Q_0 *HMU_fn_p_vMalloc(s32, s32);
extern s32 D_005AB800[];

void func_001D4CA0(s32 arg0, s32 arg1, u8 arg2, s32 arg3) {
    unk_Q_0 *node;
    s32 *target;
    unk_Q_0 *first;
    unk_Q_0 *p;
    unk_Q_3 *obj;
    s32 i;
    unk_Q_0 *next;

    obj = *HIE_fn_hGetSuperObjectObject(arg0);
    i = 0;
    if (func_001D5410(arg0, arg1) == 1) {
        target = &obj->unk_14->unk_18[arg1];
        i = 0;
        for (i = 0, node = obj->unk_158.unk_00, first = node; node != NULL; i++, next = node = node->unk_00, (void)next) {
            if (node->unk_0C == target) {
                node->unk_20 = 0.0f;
                node->unk_25 = arg2;
                node->unk_1C = arg3;
                node->unk_14 = D_005AB800[0];
                func_001CA490(arg0, node);
                return;
            }
        }
        return;
    }
    target = &obj->unk_14->unk_18[arg1];
    i = 0;
    if (target != NULL) {
        p = HMU_fn_p_vMalloc(0x28, 1);
        p->unk_0C = target;
        p->unk_18 = 0;
        p->unk_20 = 0.0f;
        p->unk_25 = arg2;
        p->unk_1C = arg3;
        p->unk_14 = D_005AB800[0];
        func_001CA490(arg0, p);
        p->unk_00 = NULL;
        p->unk_04 = NULL;
        p->unk_08 = NULL;
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
        p->unk_00 = NULL;
        p->unk_04 = obj->unk_158.unk_04;
        p->unk_08 = &obj->unk_158;
        if (obj->unk_158.unk_00 == NULL) {
            obj->unk_158.unk_00 = p;
        } else {
            obj->unk_158.unk_04->unk_00 = p;
        }
        obj->unk_158.unk_04 = p;
        obj->unk_158.unk_08++;
    }
}
