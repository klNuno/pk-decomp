/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0019CEC0_0 {
    struct unk_func_0019CEC0_0 *unk_00;
    struct unk_func_0019CEC0_0 *unk_04;
    struct unk_func_0019CEC0_1 *unk_08;
    u16 unk_0C;
} unk_func_0019CEC0_0;

typedef struct unk_func_0019CEC0_1 {
    unk_func_0019CEC0_0 *unk_00;
    unk_func_0019CEC0_0 *unk_04;
    s32 unk_08;
} unk_func_0019CEC0_1;

void func_0019C9C0(unk_func_0019CEC0_0 *);

void func_0019CEC0(unk_func_0019CEC0_1 *arg0, u16 arg1) {
    unk_func_0019CEC0_0 *cur;
    unk_func_0019CEC0_0 *next;
    u16 i;
    unk_func_0019CEC0_0 *a;
    unk_func_0019CEC0_0 *b;

    if (arg0 == 0) {
        return;
    }
    i = 0;
    cur = arg0->unk_00;
    a = next = cur ? cur->unk_00 : 0;
    while (cur != 0) {
        if (cur->unk_0C == arg1) {
            if (arg0->unk_08 == 0) {
                return;
            }
            if (cur->unk_00 != 0) {
                cur->unk_00->unk_04 = cur->unk_04;
            }
            if (cur->unk_04 != 0) {
                cur->unk_04->unk_00 = cur->unk_00;
            }
            if (cur->unk_08 != 0) {
                cur->unk_08->unk_08--;
                if (cur->unk_08->unk_00 == cur) {
                    cur->unk_08->unk_00 = cur->unk_00;
                }
                if (cur->unk_08->unk_04 == cur) {
                    cur->unk_08->unk_04 = cur->unk_04;
                }
            }
            cur->unk_00 = 0;
            cur->unk_04 = 0;
            cur->unk_08 = 0;
            func_0019C9C0(cur);
            return;
        }
        i++;
        cur = next;
        b = next = cur ? cur->unk_00 : 0;
        (void)b;
    }
}
