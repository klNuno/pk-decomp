/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001FC3C0_0 {
    u8 pad_00[0x72];
    u8 unk_72;
} unk_func_001FC3C0_0;

typedef struct unk_func_001FC3C0_1 {
    u8 pad_00[0x4];
    unk_func_001FC3C0_0 *unk_04;
    unk_func_001FC3C0_0 *unk_08;
    unk_func_001FC3C0_0 *unk_0C;
    u8 pad_10[0x24];
    s32 unk_34[3];
    u8 pad_40[0x13C];
    u8 unk_17C;
} unk_func_001FC3C0_1;

typedef struct unk_func_001FC3C0_2 {
    u8 pad_00[0x10];
    unk_func_001FC3C0_1 *unk_10;
} unk_func_001FC3C0_2;

typedef struct unk_func_001FC3C0_3 {
    u8 pad_00[0x70];
    u16 unk_70;
    u16 unk_72;
} unk_func_001FC3C0_3;

typedef struct unk_func_001FC3C0_4 {
    u8 pad_00[0x68];
    s32 unk_68;
} unk_func_001FC3C0_4;

typedef struct unk_func_001FC3C0_5 {
    u8 pad_00[0xC];
    unk_func_001FC3C0_3 *unk_0C;
    unk_func_001FC3C0_4 *unk_10;
    u8 pad_14[0xC8];
} unk_func_001FC3C0_5;

s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
unk_func_001FC3C0_2 *HIE_fn_hGetSuperObjectObject();
s32 *func_00155EE0();
void func_001FD710();
void func_001B4D70();
void func_001FF6A0();
void func_001F49F0();
void func_001F4BF0();
void func_001F55C0();
void func_001F6260();
void func_00202620();
void func_00202730();
extern u8 D_00360158;
extern u8 D_00360154;
extern u8 D_0035F590;

s32 *func_001FC3C0(s32 arg0, s32 *arg1) {
    unk_func_001FC3C0_1 *obj;
    s32 f1;
    s32 f2;
    s32 temp;
    unk_func_001FC3C0_5 sp50;
    s32 *sp12C;

    temp = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp), arg0, &sp12C);
    obj = HIE_fn_hGetSuperObjectObject(sp12C)->unk_10;
    if (!obj->unk_17C) {
        ((s32 *)&obj->unk_34)[0] = func_00155EE0(sp12C[9])[0];
        ((s32 *)&obj->unk_34)[1] = func_00155EE0(sp12C[9])[1];
        ((s32 *)&obj->unk_34)[2] = func_00155EE0(sp12C[9])[2];
        func_001FD710(obj, &obj->unk_04->unk_72, &obj->unk_08->unk_72, &obj->unk_0C->unk_72, 1, 1, 0x2000);
        return arg1;
    }
    func_001B4D70(obj);
    func_001FF6A0(sp12C, &sp50);
    if (sp50.unk_0C->unk_72 & 0x4000) {
        f1 = 1;
    } else {
        f1 = 0;
    }
    D_00360158 = f1;
    if (sp50.unk_0C->unk_72 & 0x20) {
        f2 = 1;
    } else {
        f2 = 0;
    }
    D_00360154 = f2;
    D_0035F590 = 1;
    func_001F49F0(&sp50);
    func_001F4BF0(&sp50);
    func_001F55C0(&sp50);
    func_001F6260(&sp50);
    if (sp50.unk_10->unk_68 == 0) {
        return arg1;
    }
    func_00202620(&sp50);
    func_00202730(&sp50);
    sp50.unk_0C->unk_70 |= 5;
    obj->unk_17C = 0;
    return arg1;
}
