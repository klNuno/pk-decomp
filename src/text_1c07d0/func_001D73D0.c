/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001D73D0_0 {
    struct unk_func_001D73D0_0 *unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_001D73D0_0;

void func_001D74A0(s32);
extern unk_func_001D73D0_0 *D_005ECC44[];

void func_001D73D0(void) {
    unk_func_001D73D0_0 *p;
    unk_func_001D73D0_0 *next;
    s32 i;
    unk_func_001D73D0_0 *a;
    unk_func_001D73D0_0 *b;

    for (i = 0, p = D_005ECC44[0], a = next = p ? p->unk_00 : NULL; p != NULL;
         i++, p = next, b = next = p ? p->unk_00 : NULL, (void)b) {
        func_001D74A0(p->unk_0C);
    }
}
