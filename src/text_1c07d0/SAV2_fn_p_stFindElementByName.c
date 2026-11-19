/* profile: o0_p */
#include "common.h"

typedef struct unk_SAV2_fn_p_stFindElementByName_0 {
    struct unk_SAV2_fn_p_stFindElementByName_0 *unk_00;
    u8 pad_04[8];
    char *unk_0C;
} unk_SAV2_fn_p_stFindElementByName_0;

s32 StrICmp(char *, char *);
extern unk_SAV2_fn_p_stFindElementByName_0 *D_003600B4;
extern s32 D_003600B8;
extern unk_SAV2_fn_p_stFindElementByName_0 *D_005ECC44[];
extern s32 D_005ECC48[];

unk_SAV2_fn_p_stFindElementByName_0 *SAV2_fn_p_stFindElementByName(char *arg0) {
    unk_SAV2_fn_p_stFindElementByName_0 *cur = 0;
    s32 i = 0;
    unk_SAV2_fn_p_stFindElementByName_0 *prev;
    unk_SAV2_fn_p_stFindElementByName_0 *head;

    if (D_005ECC44[0] != D_003600B4) {
        D_005ECC44[0] = D_003600B4;
    }
    if (D_005ECC48[0] != D_003600B8) {
        D_005ECC48[0] = D_003600B8;
    }
    i = 0;
    cur = D_005ECC44[0];
    head = cur;
    while (cur != 0) {
        if (StrICmp(cur->unk_0C, arg0) == 0) {
            return cur;
        }
        i++;
        cur = cur->unk_00;
        prev = cur;
        (void)prev;
    }
    return 0;
}
