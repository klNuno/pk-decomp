/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0012D450_0 {
    u8 pad_00[8];
    struct unk_func_0012D450_0 *unk_08;
    u8 pad_0C[8];
    struct unk_func_0012D450_0 *unk_14;
    u8 pad_18[0x10];
    s32 unk_28;
} unk_func_0012D450_0;

void func_0012DA30(unk_func_0012D450_0 *);
extern s32 D_0035F8A8;

void func_0012D450(unk_func_0012D450_0 *arg0) {
    unk_func_0012D450_0 *var_s0;
    unk_func_0012D450_0 *var_s1;
    unk_func_0012D450_0 *var_s2;

    if (arg0->unk_28 != -1) {
        if (D_0035F8A8 != 0) {
            arg0->unk_28 = D_0035F8A8 - 1;
        } else {
            arg0->unk_28 = D_0035F8A8 - 2;
        }
    }
    for (var_s0 = arg0->unk_08; var_s0 != NULL; var_s0 = var_s0->unk_14) {
        if (var_s0->unk_28 != -1) {
            if (D_0035F8A8 != 0) {
                var_s0->unk_28 = D_0035F8A8 - 1;
            } else {
                var_s0->unk_28 = D_0035F8A8 - 2;
            }
        }
        for (var_s1 = var_s0->unk_08; var_s1 != NULL; var_s1 = var_s1->unk_14) {
            func_0012DA30(var_s1);
            for (var_s2 = var_s1->unk_08; var_s2 != NULL; var_s2 = var_s2->unk_14) {
                func_0012D450(var_s2);
            }
        }
    }
}
