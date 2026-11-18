/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00169AD0_0 {
    s32 unk_00;
    s32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} unk_func_00169AD0_0;

typedef struct unk_func_00169AD0_1 {
    u8 pad_00[0xA0];
    s32 unk_A0;
    u8 pad_A4[0x18];
    s32 unk_BC;
} unk_func_00169AD0_1;

void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, char *, char *, s32);
void Mmg_fn_v_SetModeAlloc(u8, u8, u8);
void *fn_p_vGenAlloc(u32, u8);
s16 func_0012AA40();
void func_00136B10(u8, s32, s32);
void func_00170060();
u8 func_001DB790();
void func_001DB870();
void func_0016A030();
void *memcpy(void *, void *, u32);
void *memset(void *, s32, u32);
extern char D_00330AE8[];
extern char D_00330B00[];
extern char D_00349290[];
extern char D_003492B0[];
extern u8 D_0035F380;
extern s32 D_0035F484;
extern u8 D_0035F57C;
extern void *D_0036A450[];

inline s32 inl_init(void) {
    func_001DB870(func_0016A030);
    if (D_0035F380 == 0xFF) {
        D_0035F380 = func_001DB790(D_00330AE8, D_00330B00);
    } else {
        Erm_fn_v_UpdateLastError(3, D_0035F57C, 0, 4, -1, 0xFF, 0xFF, NULL, D_003492B0, 0x7D);
    }
    func_00136B10(D_0035F380, 4, 100000);
    Mmg_fn_v_SetModeAlloc(D_0035F380, 0xFF, 0);
    memset(D_0036A450, 0, 0x40);
    if (func_0012AA40() == 0x7FFF) {
        Erm_fn_v_UpdateLastError(0x34, D_0035F380, 0, 0x36, -1, 0xFF, 0xFF, D_00349290, D_003492B0, 0x85);
        return 0;
    }
    func_00170060();
    return 1;
}

s32 func_00169AD0(unk_func_00169AD0_0 *arg0, s16 *arg1) {
    unk_func_00169AD0_1 *p;
    s16 i;

    if (D_0035F484) {
        if (!inl_init()) {
            return 0;
        }
        D_0035F484 = 0;
    }
    Mmg_fn_v_SetModeAlloc(D_0035F380, 0xFF, 0);
    p = fn_p_vGenAlloc(0xC0, 0);
    memset(p, 0, 0xC0);
    arg0->unk_04 = 0x280;
    arg0->unk_00 = 0x1E0;
    for (i = 0; i < 16; i++) {
        if (D_0036A450[i] == NULL) {
            *arg1 = i;
            goto found;
        }
    }
    *arg1 = -1;
found:
    D_0036A450[*arg1] = p;
    arg0->unk_08 = 0.0003125f;
    arg0->unk_0C = 0.0003125f;
    arg0->unk_10 = 0;
    arg0->unk_14 = -1;
    memcpy(p, arg0, 0x60);
    p->unk_A0 = 0;
    p->unk_BC = 0;
    return 1;
}
