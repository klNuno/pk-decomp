/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[4];
    u16 unk_0C;
    u8 pad_0E[6];
} unk_func_00176750_0;
typedef struct {
    unk_func_00176750_0 *unk_00;
    u8 pad_04[4];
    u16 unk_08;
} unk_func_00176750_1;
typedef struct {
    u8 pad_00[0x10];
    unk_func_00176750_1 *unk_10;
} unk_func_00176750_2;
typedef struct {
    unk_func_00176750_2 *unk_00;
    u8 pad_04[0x178];
    void *unk_17C, *unk_180;
} unk_func_00176750_3;
typedef struct unk_func_00176750_4 {
    s32 unk_00;
    unk_func_00176750_3 *unk_04;
    struct unk_func_00176750_4 *unk_08;
    u8 pad_0C[8];
    struct unk_func_00176750_4 *unk_14;
} unk_func_00176750_4;
typedef struct {
    u8 pad_00[4];
    s16 unk_04, unk_06;
    u8 pad_08[4];
    s32 *unk_0C;
} unk_func_00176750_5;

void func_0011B418(const char *);
unk_func_00176750_5 *func_00133AB0(s32);
void func_001769B0(void *, s32);
void func_00176B70(s32, s32);
void func_0018ECD0(void **);
extern const char D_00349590[];
extern unk_func_00176750_4 *D_0035FE28;

void func_00176750(unk_func_00176750_4 *arg0) {
    unk_func_00176750_4 *temp;
    s16 i;
    unk_func_00176750_0 *p;
    unk_func_00176750_5 *temp_s2;
    s32 j;
    s32 temp_04;
    unk_func_00176750_1 *temp_s5;
    D_0035FE28 = arg0;
    if (arg0->unk_00 == 2) {
        if (arg0 && arg0->unk_04 && arg0->unk_04->unk_00) {
            temp_s5 = arg0->unk_04->unk_00->unk_10;
            if (temp_s5) {
                if (temp_s5->unk_08 != 0) {
                    p = temp_s5->unk_00;
                }
                for (i = 0; i < temp_s5->unk_08; i++, p++) {
                    if (p->unk_0C == 0) {
                        temp_s2 = func_00133AB0(p->unk_04);
                        if (temp_s2 != NULL && temp_s2->unk_06 == 0) {
                            if (temp_s2->unk_04 == 0) {
                                func_00176B70(temp_s2->unk_0C[0], 0);
                            } else {
                                for (j = 0, temp_04 = 0; j < temp_s2->unk_04; temp_04 += 4, j++) {
                                    func_00176B70(*(s32 *)((u8 *)temp_s2->unk_0C + temp_04), 0);
                                }
                            }
                        } else {
                            func_0011B418(D_00349590);
                        }
                    }
                }
            }
        }
    } else if (arg0->unk_00 == 0x20) {
        if (arg0->unk_04 && arg0->unk_04->unk_00) {
            func_001769B0(arg0->unk_04->unk_00, 0);
        }
    } else if (arg0->unk_00 == 8) {
        if (arg0->unk_04) {
            func_001769B0(arg0->unk_04, 0);
        }
    } else if (arg0->unk_00 == 4) {
        unk_func_00176750_3 *temp_s0 = arg0->unk_04;
        if (temp_s0) {
            if (temp_s0->unk_17C) {
                func_0018ECD0(&temp_s0->unk_17C);
            }
            temp_s0->unk_17C = NULL;
            if (temp_s0->unk_180) {
                func_0018ECD0(&temp_s0->unk_180);
            }
            temp_s0->unk_180 = NULL;
        }
    }
    for (i = 0, temp = arg0->unk_08; temp; temp = temp->unk_14, i++) {
        func_00176750(temp);
    }
    D_0035FE28 = NULL;
}
