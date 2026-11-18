/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x68];
    s32 unk_68;
} unk_func_001F9EA0_0;

typedef struct {
    u8 pad_00[0xC];
    unk_func_001F9EA0_0 *unk_0C;
    u8 pad_10[0x64];
    u8 unk_74;
    u8 pad_75[0x107];
    u8 unk_17C;
} unk_func_001F9EA0_1;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
    unk_func_001F9EA0_1 *unk_10;
} unk_func_001F9EA0_2;

typedef struct {
    u8 pad_00[0xC];
    u32 unk_0C;
} unk_func_001F9EA0_3;

typedef struct {
    u8 pad_00[0x114];
    f32 unk_114[3];
    u8 pad_120[0x2C];
    f32 unk_14C[3];
} unk_func_001F9EA0_4;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    unk_func_001F9EA0_0 *unk_0C;
    u8 pad_10[0xCC];
} unk_func_001F9EA0_5;

unk_func_001F9EA0_2 *HIE_fn_hGetSuperObjectObject();
s32 fn_ucGetProcedureUltraOperator();
void fn_vGetUltraOperatorPerso();
unk_func_001F9EA0_4 *func_00138760();
void func_00139050();
void func_001B4750();
void func_001B4D70();
void func_001B5610();
void func_001B5690();
void func_001B5710(s32, f32);
void func_001B6070();
unk_func_001F9EA0_3 *func_001B84B0();
void func_001F7BE0();
void func_001FF6A0();
void func_001FF9C0();
extern s32 D_0036015C;
extern u32 D_005AB848[];

s32 *func_001F9EA0(s32 arg0, s32 *arg1) {
    unk_func_001F9EA0_1 *temp0;
    unk_func_001F9EA0_3 *temp1;
    s32 temp2;
    s32 temp3;
    s32 temp4;
    s32 temp5;
    unk_func_001F9EA0_5 sp70;
    s32 sp14C;

    temp5 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp5), arg0, &sp14C);
    temp0 = HIE_fn_hGetSuperObjectObject(sp14C)->unk_10;
    func_001B6070(temp0, 0);
    func_001B4D70(temp0);
    func_001FF6A0(sp14C, &sp70);
    if (D_0036015C != 0 && D_0036015C != temp0->unk_0C->unk_68) {
        func_001B4750(temp0);
    }
    temp4 = HIE_fn_hGetSuperObjectObject(sp70.unk_0C->unk_68)->unk_08;
    if (temp4 == 0 || (temp1 = func_001B84B0(temp4)) == NULL) {
        return arg1;
    }
    if (temp1->unk_0C & 0x80) {
        temp2 = 1;
    } else {
        temp2 = 0;
    }
    if (temp2 == 0) {
        func_00139050(sp70.unk_0C->unk_68);
    }
    if (!temp0->unk_17C) {
        if (temp1->unk_0C & 0x01000000) {
            temp3 = 1;
        } else {
            temp3 = 0;
        }
        if (temp3 != 0) {
            temp0->unk_17C = 1;
        }
    }
    if (0.0f != func_00138760(temp1)->unk_14C[0] ||
        0.0f != func_00138760(temp1)->unk_14C[1] ||
        0.0f != func_00138760(temp1)->unk_14C[2]) {
        func_001B5610(temp0, func_00138760(temp1)->unk_114);
        func_001B5690(sp70.unk_08, func_00138760(temp1)->unk_14C);
        func_001B5710(sp70.unk_08, (f32)D_005AB848[0] / 1000.0f);
    }
    func_001F7BE0(&sp70);
    func_001FF9C0(&sp70);
    D_0036015C = temp0->unk_0C->unk_68;
    temp0->unk_74 = 0;
    return arg1;
}
