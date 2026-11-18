#include "common.h"

typedef struct unk_func_002D3EA0_1 {
    struct unk_func_002D3EA0_1 *unk_00;
    struct unk_func_002D3EA0_1 *unk_04;
    u8 pad_08[4];
    u8 unk_0C[4];
} unk_func_002D3EA0_1;

typedef struct unk_func_002D3EA0_0 {
    s32 unk_00;
    unk_func_002D3EA0_1 *unk_04;
    u8 pad_08[4];
    void *unk_0C;
} unk_func_002D3EA0_0;

void func_002CD2A0(void *, s32);
void func_002D22A0(unk_func_002D3EA0_0 *, unk_func_002D3EA0_1 *);
void func_002D24C0(void *);
void func_002D24D0(void *, s32);
void func_002D2530(unk_func_002D3EA0_0 *);
void func_002D2BB0(unk_func_002D3EA0_1 *);

void func_002D3EA0(unk_func_002D3EA0_0 *arg0) {
    unk_func_002D3EA0_1 *temp_s0;
    unk_func_002D3EA0_1 *temp_s1;

    temp_s0 = arg0->unk_04;
    if (temp_s0 != NULL) {
        temp_s1 = temp_s0->unk_00;
        if (temp_s1 != NULL) {
            if (temp_s1->unk_00 != NULL) {
                func_002D22A0(arg0, temp_s1->unk_00);
            }
            if (temp_s1->unk_04 != NULL) {
                func_002D22A0(arg0, temp_s1->unk_04);
            }
            func_002D2530(arg0);
            func_002D24D0(temp_s1->unk_0C, -1);
            func_002D24C0(&arg0->unk_04);
            func_002D2BB0(temp_s1);
        }
        temp_s1 = temp_s0->unk_04;
        if (temp_s1 != NULL) {
            if (temp_s1->unk_00 != NULL) {
                func_002D22A0(arg0, temp_s1->unk_00);
            }
            if (temp_s1->unk_04 != NULL) {
                func_002D22A0(arg0, temp_s1->unk_04);
            }
            func_002D2530(arg0);
            func_002D24D0(temp_s1->unk_0C, -1);
            func_002D24C0(&arg0->unk_04);
            func_002D2BB0(temp_s1);
        }
        if (temp_s0->unk_0C != NULL) {
            func_002CD2A0(temp_s0->unk_0C, -1);
        }
        func_002D2BB0(temp_s0);
        arg0->unk_00 = 0;
        arg0->unk_04 = NULL;
        arg0->unk_0C = &arg0->unk_04;
    }
}
