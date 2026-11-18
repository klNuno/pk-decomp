/* profile: o0_p */
#include "common.h"

typedef struct unk_WPARCLST_fn_vAdd_1 unk_WPARCLST_fn_vAdd_1;

typedef struct unk_WPARCLST_fn_vAdd_0 {
    struct unk_WPARCLST_fn_vAdd_0 *unk_00;
    struct unk_WPARCLST_fn_vAdd_0 *unk_04;
    unk_WPARCLST_fn_vAdd_1 *unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
} unk_WPARCLST_fn_vAdd_0;

struct unk_WPARCLST_fn_vAdd_1 {
    unk_WPARCLST_fn_vAdd_0 *unk_00;
    unk_WPARCLST_fn_vAdd_0 *unk_04;
    s32 unk_08;
};

unk_WPARCLST_fn_vAdd_0 *WPARC_CreateArc(s32, s32, s32);

void WPARCLST_fn_vAdd(unk_WPARCLST_fn_vAdd_1 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    unk_WPARCLST_fn_vAdd_0 *p;
    s32 i;
    unk_WPARCLST_fn_vAdd_0 *next;
    unk_WPARCLST_fn_vAdd_0 *first;
    unk_WPARCLST_fn_vAdd_0 *arc;
    s8 found;

    found = 0;
    if (arg0 != NULL) {
        for (i = 0, p = arg0->unk_00, first = p; p != NULL; i++, p = p->unk_00, next = p, next = next) {
            if (p->unk_0C == arg1) {
                p->unk_14 = arg3;
                p->unk_10 = arg3;
                p->unk_1C = arg2;
                p->unk_18 = arg2;
                found = 1;
                break;
            }
        }
        if (found == 0) {
            arc = WPARC_CreateArc(arg1, arg2, arg3);
            if (arc != NULL) {
                if (arc->unk_00 != NULL) {
                    arc->unk_00->unk_04 = arc->unk_04;
                }
                if (arc->unk_04 != NULL) {
                    arc->unk_04->unk_00 = arc->unk_00;
                }
                if (arc->unk_08 != NULL) {
                    arc->unk_08->unk_08--;
                    if (arc->unk_08->unk_00 == arc) {
                        arc->unk_08->unk_00 = arc->unk_00;
                    }
                    if (arc->unk_08->unk_04 == arc) {
                        arc->unk_08->unk_04 = arc->unk_04;
                    }
                }
                arc->unk_00 = NULL;
                arc->unk_04 = NULL;
                arc->unk_08 = NULL;
                arc->unk_00 = NULL;
                arc->unk_04 = arg0->unk_04;
                arc->unk_08 = arg0;
                if (arg0->unk_00 == NULL) {
                    arg0->unk_00 = arc;
                } else {
                    arg0->unk_04->unk_00 = arc;
                }
                arg0->unk_04 = arc;
                arg0->unk_08++;
            }
        }
    }
}
