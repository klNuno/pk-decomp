/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0015A590_1 {
    u8 pad_00[4];
    u32 unk_04;
} unk_func_0015A590_1;

typedef struct unk_func_0015A590_2 {
    u8 pad_00[8];
    unk_func_0015A590_1 *unk_08;
} unk_func_0015A590_2;

typedef struct unk_func_0015A590_0 {
    u8 unk_00;
    u8 pad_01[7];
    unk_func_0015A590_2 *unk_08;
    u8 pad_0C[0xF8];
} unk_func_0015A590_0;

u32 func_0015ED70();
extern u32 D_003312D0[];
extern unk_func_0015A590_0 D_003678B0[];

static inline s32 func_0015A590_inl(u32 m, u32 v) {
    return (m & v) == m;
}

s32 func_0015A590(void) {
    s32 j;
    s32 i;
    unk_func_0015A590_2 *p;
    s32 a;

    if (D_003678B0[0].unk_00 == 2) {
        for (i = 2; i < 0x12; i++) {
            p = D_003678B0[i].unk_08;
            for (j = 0xC; j <= 0x1B; j++) {
                a = (D_003312D0[j - 0xC] & p->unk_08->unk_04) == D_003312D0[j - 0xC];
                if (a) {
                    a = (D_003312D0[j - 0xC] & func_0015ED70(p)) == D_003312D0[j - 0xC];
                    if (!a) {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}
