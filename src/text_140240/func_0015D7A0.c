/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0015D7A0_0 {
    u8 pad_00[0x10];
    s32 unk_10;
    f32 unk_14;
} unk_func_0015D7A0_0;

typedef struct unk_func_0015D7A0_1 {
    u8 pad_00[0x14];
    struct unk_func_0015D7A0_1 *unk_14;
} unk_func_0015D7A0_1;

typedef struct unk_func_0015D7A0_2 {
    s32 unk_00;
    unk_func_0015D7A0_0 *unk_04;
    unk_func_0015D7A0_1 *unk_08;
} unk_func_0015D7A0_2;

void func_0015D410(unk_func_0015D7A0_0 *, f32);
void func_0015D5C0(unk_func_0015D7A0_1 *);
extern u8 D_0035F974;
extern s8 D_0035F978;
extern s32 D_0035F97C;
extern s8 D_0035F980;
extern s32 D_0035F98C;
extern f32 D_0035F990;
extern f32 D_0035F994;
extern u8 D_0035F99C;
extern u8 D_0035F9A0;
extern u8 D_0035F9A4;
extern f32 D_0035F9AC;
extern unk_func_0015D7A0_2 *D_0035FF74;

void func_0015D7A0(void) {
    s8 done;
    s32 eq;
    unk_func_0015D7A0_2 *temp_s1;
    unk_func_0015D7A0_1 *var_s0;
    unk_func_0015D7A0_0 *temp_a0;

    if (D_0035F980 == 0) {
        return;
    }
    done = 0;
    if (D_0035F978 == 1) {
        if (!(D_0035F990 < 1.0f)) {
            D_0035F99C = D_0035F9A0;
            if (D_0035F99C == D_0035F9A4) {
                done = 1;
            } else {
                D_0035F990 = 0.0f;
                D_0035F98C = 0;
                D_0035F9A0 = (D_0035F99C + 1) % D_0035F974;
            }
        }
    } else if (D_0035F978 == 2) {
        done = (D_0035F9AC > 0.0f && D_0035F990 >= D_0035F9AC) || (D_0035F9AC < 0.0f && D_0035F990 <= D_0035F9AC);
    } else {
        done = 1;
    }
    if (done) {
        temp_s1 = D_0035FF74;
        D_0035F994 = D_0035F990;
        for (var_s0 = temp_s1->unk_08; var_s0 != NULL; var_s0 = var_s0->unk_14) {
            func_0015D5C0(var_s0);
        }
        if (temp_s1->unk_00 == 0x20) {
            temp_a0 = temp_s1->unk_04;
            if (temp_a0->unk_10 != D_0035F97C) {
                eq = 0;
            } else {
                eq = temp_a0->unk_14 == D_0035F994;
            }
            if (!eq) {
                func_0015D410(temp_a0, D_0035F990);
            }
        }
        D_0035F978 = 0;
        D_0035F98C = 0;
        D_0035F990 = 0.0f;
        D_0035F980 = 0;
    }
}
