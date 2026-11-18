/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00175FD0_0 {
    s32 unk_00;
    s32 *unk_04;
    struct unk_func_00175FD0_0 *unk_08;
    u8 pad_0C[8];
    struct unk_func_00175FD0_0 *unk_14;
    u8 pad_18[0x18];
    s32 unk_30;
    u8 pad_34[0x1C];
    s32 unk_50;
    u8 pad_54[0x29];
    u8 unk_7D;
} unk_func_00175FD0_0;

s32 func_00157780();
s32 func_001577B0();
s32 func_0015CA20();
void func_0015D4E0();
void func_00175D70();
extern s32 D_0035FAF0;
extern s32 D_0035FC58;
extern s32 D_0035FC68;
extern s32 D_0035FC6C;
extern s32 D_0035FC80;

void func_00175FD0(unk_func_00175FD0_0 *arg0) {
    unk_func_00175FD0_0 *child;
    s32 *temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s2;

    if (arg0 == NULL) {
        D_0035FC68 = 1;
        return;
    }
    if (arg0->unk_7D != 0) {
        D_0035FC80 += 1;
    }
    for (child = arg0->unk_08; child != NULL; child = child->unk_14) {
        func_00175FD0(child);
    }
    if (D_0035FC6C != 0 || arg0->unk_50 == D_0035FC58) {
        if (arg0->unk_00 == 0x20 && !(u8)(arg0->unk_30 & 2)) {
            temp_s1 = arg0->unk_04;
            if (temp_s1 != NULL) {
                temp_s2 = *temp_s1;
                if (temp_s2 != 0) {
                    temp_s1_2 = func_0015CA20(temp_s1);
                    func_0015D4E0(temp_s1);
                    if (temp_s1_2 != 0) {
                        temp_s1_3 = func_001577B0(temp_s1_2, 0);
                        D_0035FAF0 = func_00157780(temp_s1_2, 0);
                        func_00175D70(arg0, temp_s2, temp_s1_3);
                    }
                }
            }
        }
        if (arg0->unk_7D != 0) {
            D_0035FC80 -= 1;
        }
    }
}
