/* profile: opt_noprop */
#include "common.h"

typedef struct unk_func_002B44E0_0 {
    u16 unk_00;
    u16 unk_02;
} unk_func_002B44E0_0;

typedef struct unk_func_002B44E0_1 {
    s32 unk_00_0 : 10;
    s32 unk_00_10 : 11;
    s32 unk_00_21 : 11;
} unk_func_002B44E0_1;

typedef struct unk_func_002B44E0_2 {
    u8 pad_00[0x3BA4];
    unk_func_002B44E0_0 unk_3BA4[0x25E];
    s32 unk_451C[10];
    unk_func_002B44E0_1 unk_4544[1];
} unk_func_002B44E0_2;

extern s32 D_00341500[];
extern s32 D_00341530[];
extern unk_func_002B44E0_2 D_007B2370;

void *memmove(void *, const void *, u32);

void func_002B44E0(s32 arg0) {
    s32 i;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 *temp_s5;
    s32 j = 0;
    s32 temp_fp = 10;
    s32 *temp_s7;
    s32 temp_v1;

    if (arg0 >= 0) {
        s32 k = 0;
        s32 offset = 0;
        do {
            s32 *temp = (s32 *)((u8 *)D_00341500 + offset);
            if (arg0 >= temp[0] && arg0 < temp[1]) {
                j = k;
                temp_fp = k + 1;
                goto block_7;
            }
            offset += 4;
            k++;
        } while (k < 9);
        return;
    }
block_7:
    for (temp_s3 = j * 4; j < temp_fp; j++, temp_s3 += 4) {
        temp_s5 = (s32 *)((u8 *)D_00341530 + temp_s3);
        i = *temp_s5;
        temp_s7 = (s32 *)((u8 *)&D_007B2370 + temp_s3 + 0x451C);
        temp_s1 = i + *temp_s7;
        temp_s2 = -1;
        temp_v1 = -1;
        while (i < temp_s1) {
            for (; i < temp_s1; i++) {
                if ((D_007B2370.unk_3BA4[D_007B2370.unk_4544[i].unk_00_10].unk_00 & 0x3FF) == 0x3FF) {
                    if (temp_s2 < temp_v1) {
                        unk_func_002B44E0_1 *temp_a0 = &D_007B2370.unk_4544[temp_s2];
                        unk_func_002B44E0_1 *temp_a1 = &D_007B2370.unk_4544[temp_v1];
                        temp_s4 = i - temp_v1;
                        memmove(temp_a0, temp_a1,
                                temp_s4 * sizeof(D_007B2370.unk_4544[0]));
                        temp_s2 += temp_s4;
                        temp_v1 = -1;
                    } else {
                        temp_s2 = i;
                    }
                    break;
                }
            }
            for (; i < temp_s1; i++) {
                if ((D_007B2370.unk_3BA4[D_007B2370.unk_4544[i].unk_00_10].unk_00 & 0x3FF) != 0x3FF) {
                    temp_v1 = i;
                    break;
                }
            }
        }
        if (temp_s2 >= 0) {
            if (temp_s2 < temp_v1) {
                i -= temp_v1;
                memmove(&D_007B2370.unk_4544[temp_s2], &D_007B2370.unk_4544[temp_v1],
                        i * sizeof(D_007B2370.unk_4544[0]));
                temp_s2 += i;
            }
            *temp_s7 = temp_s2 - *temp_s5;
        }
    }
}
