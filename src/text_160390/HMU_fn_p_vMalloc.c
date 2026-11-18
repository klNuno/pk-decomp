#include "common.h"

void Erm_fn_ClearLastError(s32, char *, s32);
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, char *, char *, s32);
void Mmg_fn_v_SetModeAlloc(u8, u8, s32);
void *fn_p_vGenAlloc(s32, s32);
void func_00136810(void);
void func_00136820(void);
u8 func_00161A20(void);
u8 func_00161A50(void);
void func_00161EA0(void);
void func_00161EB0(void);
void *memset(void *, s32, u32);

extern char D_00348FD0[];
extern char D_00348FE0[];
extern char D_00349020[];
extern char D_00349070[];
extern char D_003490B0[];
extern u8 D_0035F408;
extern u8 D_00369908[];
extern s32 D_00369910[];

void *HMU_fn_p_vMalloc(s32 arg0, s32 arg1) {
    void *temp;
    u32 temp2;
    u8 *temp3;

    func_00161EB0();
    if (arg0 == 0) {
        Erm_fn_ClearLastError(0, D_00348FD0, 0x21);
        Erm_fn_v_UpdateLastError(9, D_0035F408, 0, 4, -1, 0xFF, 0xFF, NULL, D_00348FD0, 0x21);
    }
    if (arg1 != 0) {
        temp2 = func_00161A20();
    } else {
        temp2 = func_00161A50();
    }
    func_00136820();
    Mmg_fn_v_SetModeAlloc(D_0035F408, temp2, 0);
    temp = fn_p_vGenAlloc(arg0, 0);
    if (temp == NULL) {
        if (arg1 != 0) {
            temp3 = &D_00369908[temp2];
            if (*temp3 == 0) {
                if (temp2 == 1) {
                    Erm_fn_ClearLastError(0, D_00348FD0, 0x3E);
                    Erm_fn_v_UpdateLastError(9, D_0035F408, 0, 0xB, -1, 0xFF, 0, D_00348FE0, D_00348FD0, 0x3E);
                    Erm_fn_ClearLastError(0, D_00348FD0, 0x3E);
                } else {
                    Erm_fn_ClearLastError(0, D_00348FD0, 0x45);
                    Erm_fn_v_UpdateLastError(9, D_0035F408, 0, 0xB, -1, 0xFF, 0, D_00349020, D_00348FD0, 0x45);
                    Erm_fn_ClearLastError(0, D_00348FD0, 0x45);
                }
                *temp3 = 1;
            }
            Mmg_fn_v_SetModeAlloc(D_0035F408, 0xFF, 0);
            temp = fn_p_vGenAlloc(arg0, 0);
            if (temp == NULL) {
                Erm_fn_ClearLastError(0, D_00348FD0, 0x4F);
                Erm_fn_v_UpdateLastError(9, D_0035F408, 0, 6, -1, 0xFF, 0xFF, NULL, D_00348FD0, 0x4F);
            }
        } else {
            temp3 = &D_00369908[temp2];
            if (*temp3 == 0) {
                if (temp2 == 0) {
                    Erm_fn_ClearLastError(0, D_00348FD0, 0x59);
                    Erm_fn_v_UpdateLastError(9, D_0035F408, 0, 0xB, -1, 0xFF, 0, D_00349070, D_00348FD0, 0x59);
                    Erm_fn_ClearLastError(0, D_00348FD0, 0x59);
                } else {
                    Erm_fn_ClearLastError(0, D_00348FD0, 0x5E);
                    Erm_fn_v_UpdateLastError(9, D_0035F408, 0, 0xB, -1, 0xFF, 0, D_003490B0, D_00348FD0, 0x5E);
                    Erm_fn_ClearLastError(0, D_00348FD0, 0x5E);
                }
                *temp3 = 1;
            }
            Mmg_fn_v_SetModeAlloc(D_0035F408, 0xFF, 0);
            temp = fn_p_vGenAlloc(arg0, 0);
            if (temp == NULL) {
                Erm_fn_ClearLastError(0, D_00348FD0, 0x67);
                Erm_fn_v_UpdateLastError(9, D_0035F408, 0, 7, -1, 0xFF, 0xFF, NULL, D_00348FD0, 0x67);
            }
        }
    }
    func_00136810();
    if (arg1 != 0) {
        if (temp != NULL) {
            memset(temp, 0xFF, arg0);
        }
    } else if (temp != NULL) {
        memset(temp, 0, arg0);
    }
    D_00369910[temp2]++;
    func_00161EA0();
    return temp;
}
