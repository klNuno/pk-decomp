/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001E7E30_0 {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[4];
    s32 unk_0C;
} unk_func_001E7E30_0;

typedef struct unk_func_001E7E30_1 {
    u8 pad_00[4];
    unk_func_001E7E30_0 *unk_04;
} unk_func_001E7E30_1;

typedef struct unk_func_001E7E30_2 {
    unk_func_001E7E30_1 *unk_00;
} unk_func_001E7E30_2;

typedef struct unk_func_001E7E30_3 {
    unk_func_001E7E30_2 *unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001E7E30_3;

typedef struct unk_func_001E7E30_4 {
    s32 unk_00;
    u8 pad_04[8];
    u8 unk_0C;
} unk_func_001E7E30_4;

typedef struct unk_func_001E7E30_5 {
    u8 pad_00[8];
    unk_func_001E7E30_4 *unk_08;
} unk_func_001E7E30_5;

typedef struct unk_func_001E7E30_6 {
    unk_func_001E7E30_5 *unk_00;
    u8 pad_04[8];
    unk_func_001E7E30_3 *unk_0C;
} unk_func_001E7E30_6;

typedef struct unk_func_001E7E30_7 {
    u8 pad_00[4];
    u8 unk_04;
} unk_func_001E7E30_7;

s32 func_001E8B50(s32, u8);
s32 func_00208E60(s32);
void *memcpy(void *, void *, s32);

void func_001E7E30(unk_func_001E7E30_6 *arg0) {
    u8 i;
    s32 a;
    s32 off;
    s32 n;
    unk_func_001E7E30_7 *p;
    s32 flag;
    s32 src;
    s32 dst;

    if (arg0 != NULL && arg0->unk_0C != NULL) {
        src = 0;
        dst = arg0->unk_0C->unk_08;
        if (arg0->unk_0C->unk_04 == 0) {
            src = arg0->unk_00->unk_08->unk_00;
        } else {
            src = arg0->unk_0C->unk_04;
        }
        for (i = 0; i < arg0->unk_00->unk_08->unk_0C; i++) {
            a = arg0->unk_0C->unk_00->unk_00->unk_04[i].unk_04;
            flag = arg0->unk_0C->unk_00->unk_00->unk_04[i].unk_0C;
            if (flag != 0) {
                off = arg0->unk_0C->unk_00->unk_00->unk_04[i].unk_00;
                if (func_00208E60(a) == 0x2A) {
                    p = (unk_func_001E7E30_7 *)(arg0->unk_00->unk_08->unk_00 + arg0->unk_0C->unk_00->unk_00->unk_04[i].unk_00);
                    n = func_001E8B50(a, p->unk_04);
                } else {
                    n = func_001E8B50(a, 0);
                }
                memcpy((void *)(dst + off), (void *)(src + off), n);
            }
        }
    }
}
