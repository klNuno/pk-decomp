/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001BDC40_0;

typedef struct {
    s32 unk_00;
    s32 *unk_04;
    u8 pad_08[0xC];
    s32 unk_14;
} unk_func_001BDC40_1;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x18];
    unk_func_001BDC40_1 *unk_20;
} unk_func_001BDC40_2;

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
} unk_func_001BDC40_3;

extern void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
extern void Erm_fn_ClearLastError(s32, char *, s32);
extern unk_func_001BDC40_3 *HIE_fn_hGetSuperObjectObject(s32);
extern s32 fn_h_StandardGameGetSuperObject(s32);
extern void func_00132820(s32 *, s32);
extern void func_00132860(s32 *, s32);
extern unk_func_001BDC40_0 *func_00155EE0(s32);
extern s32 func_001979C0(s32);
extern s32 func_001997F0(s32);
extern s32 *func_001B9740(s32);
extern s32 func_001B9A50(s32);
extern void func_001BE120(s32, unk_func_001BDC40_0 *);
extern void func_001BE240(s32, s32);
extern char D_0034B738[];
extern u8 D_0035F528;

void func_001BDC40(unk_func_001BDC40_2 *arg0, s32 arg1)
{
    unk_func_001BDC40_0 *ptr;
    s32 a;
    s32 b;
    s32 *c;

    if (arg0 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B738, 0xFC);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xE, -1, 0xFF, 0xFF, 0, D_0034B738, 0xFC);
    }
    if (arg0->unk_20 == NULL) {
        Erm_fn_ClearLastError(0, D_0034B738, 0xFF);
        Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0xF, -1, 0xFF, 0xFF, 0, D_0034B738, 0xFF);
    }
    switch (arg1) {
    case 1:
        arg0->unk_20->unk_00 = 0;
        /* fall through */
    case 3:
    case 2:
    case 4:
        if (fn_h_StandardGameGetSuperObject(arg0->unk_04) != 0) {
            arg0->unk_20->unk_14 = 0;
            ptr = func_00155EE0(func_001997F0(arg0->unk_00));
            func_001BE120(fn_h_StandardGameGetSuperObject(arg0->unk_04), ptr);
            ((unk_func_001BDC40_0 *)((u8 *)arg0->unk_20 + 8))->unk_00 = ptr->unk_00;
            ((unk_func_001BDC40_0 *)((u8 *)arg0->unk_20 + 8))->unk_04 = ptr->unk_04;
            ((unk_func_001BDC40_0 *)((u8 *)arg0->unk_20 + 8))->unk_08 = ptr->unk_08;
        }
        break;
    case 5:
        if (fn_h_StandardGameGetSuperObject(arg0->unk_04) != 0) {
            arg0->unk_20->unk_14 = 0;
            a = fn_h_StandardGameGetSuperObject(arg0->unk_04);
            ptr = func_00155EE0(func_001979C0(a));
            func_001BE240(arg0->unk_20->unk_00, a);
            func_00132860(arg0->unk_20->unk_04, a);
            ((unk_func_001BDC40_0 *)((u8 *)arg0->unk_20 + 8))->unk_00 = ptr->unk_00;
            ((unk_func_001BDC40_0 *)((u8 *)arg0->unk_20 + 8))->unk_04 = ptr->unk_04;
            ((unk_func_001BDC40_0 *)((u8 *)arg0->unk_20 + 8))->unk_08 = ptr->unk_08;
            b = HIE_fn_hGetSuperObjectObject(a)->unk_1C;
            if (b != 0) {
                c = func_001B9740(b);
                func_00132820(c, func_001B9A50(b));
            }
        }
        break;
    }
}
