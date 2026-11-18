/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001D3690_0 unk_func_001D3690_0;

typedef struct unk_func_001D3690_1 {
    unk_func_001D3690_0 *unk_00;
    unk_func_001D3690_0 *unk_04;
    s32 unk_08;
} unk_func_001D3690_1;

struct unk_func_001D3690_0 {
    unk_func_001D3690_0 *unk_00;
    unk_func_001D3690_0 *unk_04;
    unk_func_001D3690_1 *unk_08;
};

typedef struct unk_func_001D3690_2 {
    u8 pad_00[0xD4];
    u8 unk_D4[0x84];
    unk_func_001D3690_0 *unk_158;
} unk_func_001D3690_2;

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void HMU_fn_vFree(void *, s32);
void func_0019CA60(void *);
void func_001C5E80(s32, unk_func_001D3690_2 **);
void func_001D44B0(unk_func_001D3690_2 *);

extern char D_0034BD48[];
extern u8 D_0035F528;

void func_001D3690(unk_func_001D3690_2 **arg0)
{
    unk_func_001D3690_0 *temp2;
    unk_func_001D3690_0 *temp3;
    s32 temp4;
    unk_func_001D3690_0 *temp6;
    unk_func_001D3690_0 *temp7;

    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034BD48, 0x198);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034BD48, 0x198);
    }
    if (*arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034BD48, 0x19B);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xF, -1, 0xFF, 0xFF, 0, D_0034BD48, 0x19B);
    }
    func_001D44B0(*arg0);
    func_001C5E80(0, arg0);
    func_0019CA60((*arg0)->unk_D4);
    temp4 = 0;
    temp7 = (*arg0)->unk_158;
    temp6 = temp2 = temp7 != NULL ? temp7->unk_00 : NULL;
    while (temp7 != NULL) {
        if (temp7->unk_00 != NULL) {
            temp7->unk_00->unk_04 = temp7->unk_04;
        }
        if (temp7->unk_04 != NULL) {
            temp7->unk_04->unk_00 = temp7->unk_00;
        }
        if (temp7->unk_08 != NULL) {
            temp7->unk_08->unk_08--;
            if (temp7->unk_08->unk_00 == temp7) {
                temp7->unk_08->unk_00 = temp7->unk_00;
            }
            if (temp7->unk_08->unk_04 == temp7) {
                temp7->unk_08->unk_04 = temp7->unk_04;
            }
        }
        temp7->unk_00 = NULL;
        temp7->unk_04 = NULL;
        temp7->unk_08 = NULL;
        HMU_fn_vFree(&temp7, 1);
        temp4++;
        temp7 = temp2;
        temp3 = temp2 = temp7 != NULL ? temp7->unk_00 : NULL;
        (void)temp3;
    }
}
