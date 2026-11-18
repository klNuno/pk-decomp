/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0019F9F0_1 {
    struct unk_func_0019F9F0_0 *unk_00;
    struct unk_func_0019F9F0_0 *unk_04;
    s32 unk_08;
} unk_func_0019F9F0_1;

typedef struct unk_func_0019F9F0_0 {
    struct unk_func_0019F9F0_0 *unk_00;
    struct unk_func_0019F9F0_0 *unk_04;
    unk_func_0019F9F0_1 *unk_08;
    u8 pad_0C[0x28];
    u8 unk_34;
} unk_func_0019F9F0_0;

extern unk_func_0019F9F0_0 *D_005ABD98[];

void func_0019F9F0(u8 arg0) {
    s32 i;
    unk_func_0019F9F0_0 *elem;
    unk_func_0019F9F0_0 *next;
    unk_func_0019F9F0_0 *a;
    unk_func_0019F9F0_0 *b;

    i = 0;
    elem = D_005ABD98[0];
    a = next = (elem != NULL ? elem->unk_00 : NULL);
    while (elem != NULL) {
        if (elem->unk_34 == arg0) {
            if (elem->unk_00 != NULL) {
                elem->unk_00->unk_04 = elem->unk_04;
            }
            if (elem->unk_04 != NULL) {
                elem->unk_04->unk_00 = elem->unk_00;
            }
            if (elem->unk_08 != NULL) {
                elem->unk_08->unk_08--;
                if (elem->unk_08->unk_00 == elem) {
                    elem->unk_08->unk_00 = elem->unk_00;
                }
                if (elem->unk_08->unk_04 == elem) {
                    elem->unk_08->unk_04 = elem->unk_04;
                }
            }
            elem->unk_00 = NULL;
            elem->unk_04 = NULL;
            elem->unk_08 = NULL;
        }
        i++;
        elem = next;
        b = next = (elem != NULL ? elem->unk_00 : NULL);
        (void)b;
    }
}
