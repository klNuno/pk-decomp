/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x17C];
    u8 unk_17C;
} unk_func_001F9890_0;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001F9890_0 *unk_10;
} unk_func_001F9890_1;

typedef struct {
    u8 pad_00[0x1C];
    f32 unk_1C[3];
    u8 pad_28[0x38];
    s32 unk_60;
} unk_func_001F9890_2;

typedef struct {
    u8 pad_00[0x72];
    u16 unk_72;
} unk_func_001F9890_3;

typedef struct {
    u8 pad_00[0x68];
    s32 unk_68;
} unk_func_001F9890_4;

typedef struct {
    u8 pad_00[8];
    unk_func_001F9890_2 *unk_08;
    unk_func_001F9890_3 *unk_0C;
    unk_func_001F9890_4 *unk_10;
    u8 pad_14[0xBC];
} unk_func_001F9890_5;

unk_func_001F9890_1 *HIE_fn_hGetSuperObjectObject();
s32 func_00208CC0();
s32 *func_00155EE0();
void fn_vGetUltraOperatorPerso();
void func_001B4D70();
void func_001FF6A0();
void func_001F49F0();
void func_001F4BF0();
void func_001F55C0();
void func_001F6260();
void func_00202620();
extern u8 D_0035F590;
extern u8 D_00360154;
extern u8 D_00360158;

s32 *func_001F9890(s32 arg0, s32 *arg1, s32 *arg2)
{
    unk_func_001F9890_0 *temp;
    s32 a, b, c;
    unk_func_001F9890_5 sp50;
    f32 sp120[3];
    s32 *sp12C;

    c = arg1[-2];
    fn_vGetUltraOperatorPerso(func_00208CC0(c), arg0, &sp12C);
    temp = HIE_fn_hGetSuperObjectObject(sp12C)->unk_10;
    if (!temp->unk_17C) {
        arg2[0] = func_00155EE0(sp12C[9])[0];
        arg2[1] = func_00155EE0(sp12C[9])[1];
        arg2[2] = func_00155EE0(sp12C[9])[2];
        arg2[3] = 0x15;
        return arg1;
    }
    func_001B4D70(temp);
    func_001FF6A0(sp12C, &sp50);
    if (sp50.unk_0C->unk_72 & 0x4000) {
        a = 1;
    } else {
        a = 0;
    }
    D_00360158 = a;
    if (sp50.unk_0C->unk_72 & 0x20) {
        b = 1;
    } else {
        b = 0;
    }
    D_00360154 = b;
    D_0035F590 = 1;
    func_001F49F0(&sp50);
    func_001F4BF0(&sp50);
    func_001F55C0(&sp50);
    func_001F6260(&sp50);
    if (!sp50.unk_10->unk_68) {
        return arg1;
    }
    func_00202620(&sp50);
    if (sp50.unk_08->unk_60 == 2) {
        ((s32 *)&sp120)[0] = ((s32 *)&sp50.unk_08->unk_1C)[0];
        ((s32 *)&sp120)[1] = ((s32 *)&sp50.unk_08->unk_1C)[1];
        ((s32 *)&sp120)[2] = ((s32 *)&sp50.unk_08->unk_1C)[2];
        temp->unk_17C = 0;
    } else {
        sp120[2] = sp120[1] = sp120[0] = 0.0f;
    }
    sp50.unk_08->unk_60 = 0;
    arg2[0] = ((s32 *)&sp120)[0];
    arg2[1] = ((s32 *)&sp120)[1];
    arg2[2] = ((s32 *)&sp120)[2];
    arg2[3] = 0x15;
    return arg1;
}
