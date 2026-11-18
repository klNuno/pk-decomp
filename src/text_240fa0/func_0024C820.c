/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_func_0024C820_0;

typedef struct {
    u8 pad_00[0x3C];
    unk_func_0024C820_0 unk_3C;
} unk_func_0024C820_1;

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} unk_func_0024C820_2;

typedef struct {
    u8 pad_00[4];
    void *unk_04;
} unk_func_0024C820_3;

typedef struct {
    unk_func_0024C820_3 *unk_00;
    u8 pad_04[0x18];
} unk_func_0024C820_4;

typedef struct {
    u8 pad_00[0x74];
    s32 unk_74;
} unk_func_0024C820_5;

typedef struct {
    u8 pad_00[4];
    unk_func_0024C820_5 *unk_04;
} unk_func_0024C820_6;

typedef struct {
    u8 pad_00[8];
    void *unk_08;
    u8 pad_0C[4];
    unk_func_0024C820_6 *unk_10;
} unk_func_0024C820_7;

typedef struct {
    u8 pad_00[0x70];
} unk_func_0024C820_8;

typedef struct {
    u8 pad_00[0x104];
    unk_func_0024C820_2 *unk_104;
    unk_func_0024C820_2 *unk_108;
    unk_func_0024C820_2 *unk_10C;
    u8 pad_110[4];
    u8 *unk_114;
    u8 pad_118[4];
    unk_func_0024C820_0 *unk_11C;
    unk_func_0024C820_0 *unk_120;
    f32 unk_124;
    f32 unk_128;
    f32 unk_12C;
    u8 pad_130[0xB4];
    f32 unk_1E4;
    f32 unk_1E8;
    u8 pad_1EC[0xC];
    f32 unk_1F8;
    u8 pad_1FC[0x24];
    unk_func_0024C820_0 *unk_220;
    u8 pad_224[0x20];
    f32 unk_244;
    u8 pad_248[0x40];
    void *unk_288;
    u8 pad_28C[0x50];
    void *unk_2DC;
    s32 unk_2E0;
    u8 pad_2E4[0x14];
    u64 unk_2F8;
    u8 pad_300[8];
    u64 unk_308;
    u8 pad_310[0xC];
    f32 unk_31C;
    f32 unk_320;
    u8 pad_324[4];
} unk_func_0024C820_9;

extern unk_func_0024C820_6 *D_003601D8;
extern unk_func_0024C820_8 D_005AB790[];
extern unk_func_0024C820_9 D_006173A0[];

unk_func_0024C820_7 *HIE_fn_hGetSuperObjectObject(unk_func_0024C820_2 *);
unk_func_0024C820_2 *fn_h_StandardGameGetSuperObject(void *);
s32 *fn_p_stEvalTree(s32, s32 *, unk_func_0024C820_4 *);
u8 fn_ucGetProcedureUltraOperator(s32);
void fn_vGetUltraOperatorPerso(u8, s32, unk_func_0024C820_2 **);
unk_func_0024C820_0 *func_00155EE0(void *);
u8 func_001A95B0(void);
unk_func_0024C820_1 *func_001B84B0(void *);
void func_0024D4F0(void);
void func_0024DE00(unk_func_0024C820_9 *);

s32 *func_0024C820(s32 arg0, s32 *arg1) {
    unk_func_0024C820_4 temp0;
    unk_func_0024C820_2 *temp1;
    unk_func_0024C820_9 *temp2;
    void *temp3;
    unk_func_0024C820_1 *temp4;
    s32 temp5;
    u8 *temp6;

    temp5 = arg1[-2];
    fn_vGetUltraOperatorPerso(fn_ucGetProcedureUltraOperator(temp5), arg0, &temp1);
    D_003601D8 = HIE_fn_hGetSuperObjectObject(temp1)->unk_10;
    temp2 = &D_006173A0[D_003601D8->unk_04->unk_74];
    temp2->unk_104 = temp1;
    temp2->unk_220 = func_00155EE0(temp2->unk_104->unk_24);

    arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
    temp2->unk_108 = fn_h_StandardGameGetSuperObject(temp0.unk_00->unk_04);
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
    temp2->unk_10C = fn_h_StandardGameGetSuperObject(temp0.unk_00->unk_04);
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
    temp2->unk_2DC = temp0.unk_00;
    arg1 = fn_p_stEvalTree(arg0, arg1, &temp0);
    temp2->unk_288 = temp0.unk_00;

    temp2->unk_11C = func_00155EE0(temp2->unk_108->unk_24);
    temp3 = HIE_fn_hGetSuperObjectObject(temp2->unk_108)->unk_08;
    if (temp3) {
        temp4 = func_001B84B0(temp3);
        if (temp4) {
            temp2->unk_120 = &temp4->unk_3C;
        } else {
            temp2->unk_120->unk_08 = temp2->unk_120->unk_04 = temp2->unk_120->unk_00 = 0.0f;
        }
    } else {
        temp2->unk_120->unk_08 = temp2->unk_120->unk_04 = temp2->unk_120->unk_00 = 0.0f;
    }

    temp2->unk_124 = -0.5f;
    temp2->unk_128 = 0.0f;
    temp2->unk_12C = 1.4f;
    temp2->unk_2F8 = 0;
    temp2->unk_308 = 0;
    temp2->unk_244 = 0.0f;
    temp2->unk_1E4 = temp2->unk_1E8 = 0.0f;
    temp2->unk_1F8 = 0.0f;
    temp6 = (u8 *)&D_005AB790[D_003601D8->unk_04->unk_74] + 0x110;
    temp2->unk_114 = temp6;

    if (func_001A95B0() == 1) {
        temp2->unk_31C = 4.0f;
        temp2->unk_320 = 1.3333334f * temp2->unk_31C;
        temp2->unk_2E0 = 0;
    } else {
        temp2->unk_31C = 6.0f;
        temp2->unk_320 = 1.3333334f * temp2->unk_31C;
        temp2->unk_2E0 = D_003601D8->unk_04->unk_74 + 1;
    }
    func_0024D4F0();
    func_0024DE00(temp2);
    return arg1;
}
