/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 unk_00;
    s32 *unk_04;
} unk_func_001ED730_0;

typedef struct {
    union {
        s32 unk_00;
        f32 unk_00_f;
    } unk_00;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_001ED730_1;

void *HMU_fn_p_vMalloc(s32, s32);
void HMU_fn_vFree(void *, s32);
s32 fn_p_stEvalTree(s32, s32, unk_func_001ED730_1 *);

#define UNK_SWAP()                              \
    unk_04[unk_01] = unk_04[i];                  \
    unk_03 = arg0->unk_04[unk_01];               \
    arg0->unk_04[unk_01] = arg0->unk_04[i];      \
    arg0->unk_04[i] = unk_03

s32 func_001ED730(unk_func_001ED730_0 *arg0, u8 arg1, s8 arg2, s32 arg3)
{
    u8 j;
    u8 unk_01;
    u8 i;
    s32 unk_03;
    s32 *p;
    f32 *q;
    s32 temp;
    unk_func_001ED730_1 v;
    f32 *unk_04;
    f32 unk_08;

    unk_01 = 0;
    temp = arg3;
    p = arg0->unk_04;
    unk_04 = HMU_fn_p_vMalloc(arg0->unk_00, 1);
    q = unk_04;
    for (; p < arg0->unk_04 + arg0->unk_00; p++) {
        arg3 = fn_p_stEvalTree(*p, temp, &v);
        *q++ = v.unk_0C == 8 ? v.unk_00.unk_00_f : (f32)v.unk_00.unk_00;
    }

    if (arg2 == 0) {
        unk_08 = -3.402822e38f;
        for (i = 0; i < arg0->unk_00 - 1 && i < arg1; i++) {
            for (j = i; j < arg0->unk_00; j++) {
                if (!(unk_04[j] <= unk_08)) {
                    unk_08 = unk_04[j];
                    unk_01 = j;
                }
            }
            UNK_SWAP();
        }
    } else {
        unk_08 = 3.402822e38f;
        for (i = 0; i < arg0->unk_00 - 1 && i < arg1; i++) {
            for (j = i; j < arg0->unk_00; j++) {
                if (unk_04[j] < unk_08) {
                    unk_08 = unk_04[j];
                    unk_01 = j;
                }
            }
            UNK_SWAP();
        }
    }
    arg0->unk_00 = arg0->unk_00 > arg1 ? arg1 : arg0->unk_00;
    HMU_fn_vFree(&unk_04, 1);
    return arg3;
}
