#include "common.h"

typedef struct {
    u8 pad_00[4];
    s16 unk_04;
    s16 unk_06;
    s16 unk_08;
    u8 pad_0A[2];
    void *unk_0C;
    void *unk_10;
    void *unk_14;
    void *unk_18;
    u8 pad_1C[8];
    s32 unk_24;
    s16 unk_28;
    s16 unk_2A;
    u8 pad_2C[8];
    u8 unk_34;
} unk_func_00193810_0;

void *HMU_fn_p_vMalloc();
void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
extern char D_00349DF8[];
extern u8 D_0035F4F8;

unk_func_00193810_0 *func_00193810(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_00193810_0 *temp;
    s32 n;
    s32 sz;

    temp = HMU_fn_p_vMalloc(0x78, 0);
    if (arg0 != 0) {
        n = (s16)arg0;
        sz = n * 6;
        temp->unk_0C = HMU_fn_p_vMalloc(sz, 0);
        if (arg2 != 0) {
            temp->unk_10 = HMU_fn_p_vMalloc((s16)arg2 * sz, 0);
        } else {
            temp->unk_10 = NULL;
        }
        temp->unk_14 = HMU_fn_p_vMalloc(n * 0xC, 0);
    } else {
        temp->unk_0C = NULL;
        temp->unk_10 = NULL;
        temp->unk_14 = NULL;
        Erm_fn_ClearLastError(0, D_00349DF8, 0x57);
        Erm_fn_v_UpdateLastError(4, D_0035F4F8, 0, 9, -1, 0xFF, 0xFF, 0, D_00349DF8, 0x58);
    }
    if (arg1 != 0) {
        temp->unk_18 = HMU_fn_p_vMalloc((s16)arg1 * 8, 0);
    } else {
        temp->unk_18 = NULL;
    }
    temp->unk_06 = arg1;
    temp->unk_08 = arg2;
    temp->unk_04 = arg0;
    temp->unk_28 = 0;
    temp->unk_24 = 0;
    temp->unk_2A = -1;
    temp->unk_34 = 1;
    return temp;
}
