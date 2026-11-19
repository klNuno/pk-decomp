/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001D7640_0 {
    struct unk_func_001D7640_0 *unk_00;
} unk_func_001D7640_0;

void SAV2_fn_vFreeAnElement(unk_func_001D7640_0 *);
void memset();
extern s32 D_003600B4;
extern s32 D_003600B8;
extern u8 D_005ECC30[];
extern unk_func_001D7640_0 *D_005ECC44[];

void func_001D7640(void) {
    unk_func_001D7640_0 *p;
    unk_func_001D7640_0 *next;
    s32 i;

    memset(D_005ECC30, 0, 0x14);
    i = 0;
    p = D_005ECC44[0];
    {
        unk_func_001D7640_0 *temp;

        temp = (next = (p != NULL ? p->unk_00 : NULL));
        (void)temp;
    }
    while (p != NULL) {
        SAV2_fn_vFreeAnElement(p);
        i++;
        p = next;
        {
            unk_func_001D7640_0 *temp;

            temp = (next = (p != NULL ? p->unk_00 : NULL));
            (void)temp;
        }
    }
    D_003600B4 = 0;
    D_003600B8 = 0;
}
