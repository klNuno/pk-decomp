/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0015B620_0 {
    s16 unk_00;
    u8 pad_02[0xA];
    s16 unk_0C;
    u8 pad_0E[0xA];
    s16 unk_18;
} unk_func_0015B620_0;

typedef struct unk_func_0015B620_1 {
    u8 pad_00[0xC];
    unk_func_0015B620_0 *unk_0C;
} unk_func_0015B620_1;

typedef struct unk_func_0015B620_2 {
    u8 pad_00[0x4];
    u32 unk_04;
} unk_func_0015B620_2;

typedef struct unk_func_0015B620_3 {
    u8 pad_00[0x8];
    unk_func_0015B620_2 *unk_08;
} unk_func_0015B620_3;

typedef struct unk_func_0015B620_4 {
    s16 unk_00;
    u8 pad_02[0x6];
} unk_func_0015B620_4;

typedef struct unk_func_0015B620_5 {
    unk_func_0015B620_3 *unk_00;
    u8 pad_04[0x100];
} unk_func_0015B620_5;

unk_func_0015B620_1 *func_0015B850(s32, s32, s32);
u32 func_0015ED70(unk_func_0015B620_3 *);
extern unk_func_0015B620_4 D_003310E4[];
extern u32 D_003312D0[];
extern unk_func_0015B620_5 D_00367AC0[];

static inline u8 unk_inline_0(u32 arg0, u32 arg1) {
    return (arg1 & arg0) == arg1;
}

u8 func_0015B620(unk_func_0015B620_1 *arg0, u8 arg1) {
    s32 temp_s0;
    u32 var_s1;
    unk_func_0015B620_3 *temp_s2;
    u8 var_s6;
    unk_func_0015B620_1 *temp_v0;
    unk_func_0015B620_0 *temp_s3;
    u8 var_s7;
    u32 temp_s5;

    var_s7 = 0;
    temp_s3 = arg0->unk_0C;
    var_s6 = 0;
    if (temp_s3->unk_00 == -0xFEA) {
        temp_s0 = temp_s3->unk_0C;
        temp_s2 = D_00367AC0[temp_s0].unk_00;
        if (temp_s2 != NULL) {
            for (var_s1 = 0xC; var_s1 <= 0x1B &&
                 (!unk_inline_0(temp_s2->unk_08->unk_04, D_003312D0[var_s1 - 0xC]) ||
                  unk_inline_0(func_0015ED70(temp_s2), D_003312D0[var_s1 - 0xC]));
                 var_s1++) {
            }
            if (var_s1 <= 0x1B) {
            temp_v0 = func_0015B850(-0xFEA, temp_s0, D_003310E4[var_s1].unk_00);
            if (arg1 == 0) {
                var_s6 = 1;
            } else if (arg1 == 2) {
                if (temp_v0 == NULL || temp_v0 == arg0) {
                    var_s6 = 1;
                }
            } else if (arg1 == 1) {
                var_s6 = 1;
                if (temp_v0 != NULL && temp_v0 != arg0) {
                    temp_v0->unk_0C->unk_18 = temp_s3->unk_18;
                }
            }
            if (var_s6) {
                var_s7 = 1;
                temp_s3->unk_18 = D_003310E4[var_s1].unk_00;
            }
            }
        } else {
            var_s7 = 1;
        }
    }
    return var_s7;
}
