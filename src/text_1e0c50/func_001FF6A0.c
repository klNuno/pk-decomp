/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001FF6A0_0 {
    u8 pad_00[0x68];
    s32 unk_68;
} unk_func_001FF6A0_0;

typedef struct unk_func_001FF6A0_1 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    unk_func_001FF6A0_0 *unk_0C;
} unk_func_001FF6A0_1;

typedef struct unk_func_001FF6A0_2 {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
    unk_func_001FF6A0_1 *unk_10;
} unk_func_001FF6A0_2;

typedef struct unk_func_001FF6A0_3 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001FF6A0_3;

typedef union unk_func_001FF6A0_5 {
    unk_func_001FF6A0_3 unk_00;
    s32 unk_00_words[3];
} unk_func_001FF6A0_5;

typedef struct unk_func_001FF6A0_4 {
    s32 unk_00;
    s32 unk_04;
    unk_func_001FF6A0_1 *unk_08;
    unk_func_001FF6A0_0 *unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    unk_func_001FF6A0_3 unk_20;
    u8 pad_2C[0x54];
    s8 unk_80;
    u8 pad_81[3];
    unk_func_001FF6A0_5 unk_84;
    s8 unk_90;
    u8 pad_91[3];
    unk_func_001FF6A0_5 unk_94;
    u8 pad_A0[0x30];
} unk_func_001FF6A0_4;

unk_func_001FF6A0_2 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_00138760(s32);
u8 *func_001387B0(u8 *);
f32 func_00151360(f32);
void func_00155EC0();
s32 func_001979C0(s32);
u8 *func_001B84B0(s32);
f32 func_001E60E0(f32);
s64 func_001FDAE0(unk_func_001FF6A0_4 *, unk_func_001FF6A0_3 *);
s32 func_001FDE00(s32);
void *memset(void *, s32, u32);
extern f32 D_005AD8C4[];

void func_001FF6A0(s32 arg0, unk_func_001FF6A0_4 *arg1)
{
    s32 temp;
    u8 *temp2;
    unk_func_001FF6A0_3 local;

    memset(arg1, 0, 0xD0);
    temp = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
    arg1->unk_04 = (s32)func_001B84B0(temp);
    arg1->unk_00 = func_00138760(arg1->unk_04);
    arg1->unk_08 = HIE_fn_hGetSuperObjectObject(arg0)->unk_10;
    arg1->unk_0C = HIE_fn_hGetSuperObjectObject(arg0)->unk_10->unk_0C;
    arg1->unk_10 = HIE_fn_hGetSuperObjectObject(arg0)->unk_10->unk_04;
    arg1->unk_14 = HIE_fn_hGetSuperObjectObject(arg0)->unk_10->unk_00;
    arg1->unk_18 = HIE_fn_hGetSuperObjectObject(arg0)->unk_10->unk_08;
    arg1->unk_1C = arg0;
    func_00155EC0(func_001979C0(arg0), &arg1->unk_20);
    if (arg1->unk_0C->unk_68 != 0) {
        arg1->unk_80 = (s8)func_001FDAE0(arg1, &arg1->unk_84.unk_00);
        if (func_001FDE00(arg1->unk_0C->unk_68) == 0) {
            arg1->unk_90 = arg1->unk_80;
            (*(s32 (*)[3])&arg1->unk_94)[0] = (*(const s32 (*)[3])&arg1->unk_84)[0];
            (*(s32 (*)[3])&arg1->unk_94)[1] = (*(const s32 (*)[3])&arg1->unk_84)[1];
            (*(s32 (*)[3])&arg1->unk_94)[2] = (*(const s32 (*)[3])&arg1->unk_84)[2];
        } else {
            temp = HIE_fn_hGetSuperObjectObject(arg1->unk_0C->unk_68)->unk_08;
            temp2 = func_001B84B0(temp);
            func_00155EC0(func_001387B0(temp2) + 0x110, &local);
            func_00155EC0(temp2 + 0x80, &arg1->unk_94.unk_00.unk_00);
            arg1->unk_94.unk_00.unk_00 = local.unk_00 - arg1->unk_94.unk_00.unk_00;
            arg1->unk_94.unk_00.unk_04 = local.unk_04 - arg1->unk_94.unk_00.unk_04;
            arg1->unk_94.unk_00.unk_08 = local.unk_08 - arg1->unk_94.unk_00.unk_08;
            if (func_001E60E0(func_00151360(arg1->unk_94.unk_00.unk_08) +
                    (func_00151360(arg1->unk_94.unk_00.unk_00) + func_00151360(arg1->unk_94.unk_00.unk_04))) > D_005AD8C4[0]) {
                arg1->unk_90 = 1;
            } else {
                arg1->unk_90 = 0;
            }
        }
    }
}
