/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0015DE60_1 {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[8];
    s32 unk_10;
    s32 unk_14;
} unk_func_0015DE60_1;

typedef struct unk_func_0015DE60_0 {
    s32 unk_00;
    unk_func_0015DE60_1 *unk_04;
    struct unk_func_0015DE60_0 *unk_08;
    u8 pad_0C[8];
    struct unk_func_0015DE60_0 *unk_14;
} unk_func_0015DE60_0;

void func_0015CA40();
void func_001765C0();

void func_0015DE60(unk_func_0015DE60_0 *arg0) {
    unk_func_0015DE60_0 *var_s1;
    unk_func_0015DE60_0 *var_s2;
    unk_func_0015DE60_1 *temp;

    for (var_s1 = arg0->unk_08; var_s1 != NULL; var_s1 = var_s1->unk_14) {
        for (var_s2 = var_s1->unk_08; var_s2 != NULL; var_s2 = var_s2->unk_14) {
            func_0015DE60(var_s2);
        }
        if (var_s1->unk_00 == 0x20) {
            temp = var_s1->unk_04;
            func_001765C0(temp);
            if (temp->unk_04 != 0) {
                func_0015CA40(temp, 0);
                temp->unk_14 = 0;
                temp->unk_10 = -1;
            }
        }
    }
    if (arg0->unk_00 == 0x20) {
        temp = arg0->unk_04;
        func_001765C0(temp);
        if (temp->unk_04 != 0) {
            func_0015CA40(temp, 0);
            temp->unk_14 = 0;
            temp->unk_10 = -1;
        }
    }
}
