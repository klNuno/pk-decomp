/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001D4100_0 unk_func_001D4100_0;

typedef struct {
    unk_func_001D4100_0 *unk_00;
    unk_func_001D4100_0 *unk_04;
    s32 unk_08;
} unk_func_001D4100_1;

struct unk_func_001D4100_0 {
    unk_func_001D4100_0 *unk_00;
    unk_func_001D4100_0 *unk_04;
    unk_func_001D4100_1 *unk_08;
};

typedef struct {
    u8 pad_00[0xD4];
    u8 unk_D4[0x84];
    unk_func_001D4100_0 *unk_158;
} unk_func_001D4100_2;

typedef struct {
    unk_func_001D4100_2 *unk_00;
    void *unk_04;
} unk_func_001D4100_3;

void Erm_fn_ClearLastError(void *, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, void *, s32, s32, s32, s32, void *, char *, s32);
void HMU_fn_vFree(void *, s32);
void *fn_h_StandardGameGetSuperObject(void *);
void func_001C5E80(void *, unk_func_001D4100_3 *);
void func_0019CA60(void *);
extern char D_0034BD48[];
extern u8 D_0035F528;

void func_001D4100(unk_func_001D4100_3 *arg0, s32 arg1) {
    unk_func_001D4100_0 *temp0;
    unk_func_001D4100_0 *temp1;
    s32 temp2;
    unk_func_001D4100_0 *temp3;
    unk_func_001D4100_0 *temp4;

    if (arg0 == NULL) {
        Erm_fn_ClearLastError(NULL, D_0034BD48, 0x26A);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, NULL, 0xE, -1, 0xFF, 0xFF, NULL, D_0034BD48, 0x26A);
    }
    if (arg0->unk_00 == NULL) {
        Erm_fn_ClearLastError(NULL, D_0034BD48, 0x26D);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, NULL, 0xF, -1, 0xFF, 0xFF, NULL, D_0034BD48, 0x26D);
    }

    switch (arg1) {
    case 2:
        break;
    case 1:
        func_001C5E80(fn_h_StandardGameGetSuperObject(arg0->unk_04), arg0);
        func_0019CA60(arg0->unk_00->unk_D4);
        break;
    case 4:
        break;
    }

    temp2 = 0;
    temp4 = arg0->unk_00->unk_158;
    temp3 = temp0 = temp4 != NULL ? temp4->unk_00 : NULL;
    while (temp4 != NULL) {
        if (temp4->unk_00 != NULL) {
            temp4->unk_00->unk_04 = temp4->unk_04;
        }
        if (temp4->unk_04 != NULL) {
            temp4->unk_04->unk_00 = temp4->unk_00;
        }
        if (temp4->unk_08 != NULL) {
            temp4->unk_08->unk_08--;
            if (temp4->unk_08->unk_00 == temp4) {
                temp4->unk_08->unk_00 = temp4->unk_00;
            }
            if (temp4->unk_08->unk_04 == temp4) {
                temp4->unk_08->unk_04 = temp4->unk_04;
            }
        }
        temp4->unk_00 = NULL;
        temp4->unk_04 = NULL;
        temp4->unk_08 = NULL;
        HMU_fn_vFree(&temp4, 1);
        temp2++;
        temp4 = temp0;
        temp1 = temp0 = temp4 != NULL ? temp4->unk_00 : NULL;
        (void)temp1;
    }
}
