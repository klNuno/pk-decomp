/* profile: o0_p */
#include "common.h"

typedef struct unk_func_001998B0_0 {
    struct unk_func_001998B0_0 *unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
} unk_func_001998B0_0;

s32 func_001BDC10(s32);
void func_00197450(s32, s32);
extern unk_func_001998B0_0 *D_003338C4[];
extern s32 D_0035FF90;

void func_001998B0(void) {
    s32 i;
    unk_func_001998B0_0 *p;
    unk_func_001998B0_0 *next;
    unk_func_001998B0_0 *first;
    unk_func_001998B0_0 *copy;

    i = 0;
    p = D_003338C4[0];
    first = next = p != NULL ? p->unk_00 : NULL;
    (void)first;
    while (p != NULL) {
        if (D_0035FF90 == 0 && func_001BDC10(p->unk_10) != 0) {
            func_00197450(p->unk_10, 1);
        }
        i++;
        p = next;
        copy = next = p != NULL ? p->unk_00 : NULL;
        (void)copy;
    }
}
