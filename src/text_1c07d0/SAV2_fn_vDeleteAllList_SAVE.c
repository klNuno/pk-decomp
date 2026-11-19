/* profile: o0_301_p */
#include "common.h"

typedef struct unk_SAV2_fn_vDeleteAllList_SAVE_0 {
    struct unk_SAV2_fn_vDeleteAllList_SAVE_0 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_SAV2_fn_vDeleteAllList_SAVE_0;

s32 SAV2_fn_vGetElementFlagSave(unk_SAV2_fn_vDeleteAllList_SAVE_0 *);
void SAV2_fn_vFreeAnElement(unk_SAV2_fn_vDeleteAllList_SAVE_0 *);
void func_0011B418();
extern char D_0034BE38[];
extern s32 D_003600B4;
extern s32 D_003600B8;
extern unk_SAV2_fn_vDeleteAllList_SAVE_0 *D_005ECC44[];

void SAV2_fn_vDeleteAllList_SAVE(void) {
    unk_SAV2_fn_vDeleteAllList_SAVE_0 *p;
    unk_SAV2_fn_vDeleteAllList_SAVE_0 *next;
    unk_SAV2_fn_vDeleteAllList_SAVE_0 *a;
    unk_SAV2_fn_vDeleteAllList_SAVE_0 *b;
    s32 i;

    for (i = 0, p = D_005ECC44[0], a = next = (p != NULL ? p->unk_00 : NULL); p != NULL;
         i++, p = next, b = next = (p != NULL ? p->unk_00 : NULL), (void)b) {
        if ((u8)SAV2_fn_vGetElementFlagSave(p)) {
            SAV2_fn_vFreeAnElement(p);
        } else {
            func_0011B418(D_0034BE38, p->unk_0C);
        }
    }
    D_003600B4 = 0;
    D_003600B8 = 0;
}
