/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_001C7B00_0;

typedef struct {
    unk_001C7B00_0 unk_00;
    unk_001C7B00_0 unk_0C;
    unk_001C7B00_0 unk_18;
} unk_001C7B00_1;

typedef struct {
    u8 pad_00[0x50];
    s32 unk_50;
} unk_001C7B00_2;

s32 *HIE_fn_hGetSuperObjectObject(s32);
unk_001C7B00_2 *func_00197860(s32);
u16 func_001C03C0(s32);
s32 func_001CC920(s32, u16, unk_001C7B00_1 *);
extern unk_001C7B00_1 D_005DFA20;

unk_001C7B00_1 *func_001C7B00(s32 arg0, s16 arg1)
{
    unk_001C7B00_1 unk_70;
    unk_001C7B00_1 unk_A0;
    s32 temp0, temp1, temp2;
    u8 temp3 = 0;
    unk_001C7B00_1 *temp4;
    unk_001C7B00_2 *temp5;

    temp1 = *HIE_fn_hGetSuperObjectObject(arg0);
    temp5 = func_00197860(temp1);
    temp2 = temp5->unk_50;
    if (temp2) {
        D_005DFA20.unk_00.unk_00 = 1.0f;
        D_005DFA20.unk_00.unk_04 = 0.0f;
        D_005DFA20.unk_00.unk_08 = 0.0f;
        D_005DFA20.unk_0C.unk_00 = 0.0f;
        D_005DFA20.unk_0C.unk_04 = 1.0f;
        D_005DFA20.unk_0C.unk_08 = 0.0f;
        D_005DFA20.unk_18.unk_00 = 0.0f;
        D_005DFA20.unk_18.unk_04 = 0.0f;
        D_005DFA20.unk_18.unk_08 = 1.0f;

        for (temp0 = arg1 + 1; temp0 <= func_001C03C0(temp1); temp0++) {
            if (func_001CC920(temp2, (u16)temp0, &unk_70)) {
                if ((void *)&D_005DFA20 == (void *)&D_005DFA20 || (void *)&D_005DFA20 == (void *)&unk_70) {
                    unk_A0.unk_00.unk_00 = D_005DFA20.unk_18.unk_00 * unk_70.unk_00.unk_08 + (D_005DFA20.unk_00.unk_00 * unk_70.unk_00.unk_00 + D_005DFA20.unk_0C.unk_00 * unk_70.unk_00.unk_04);
                    unk_A0.unk_00.unk_04 = D_005DFA20.unk_18.unk_04 * unk_70.unk_00.unk_08 + (D_005DFA20.unk_00.unk_04 * unk_70.unk_00.unk_00 + D_005DFA20.unk_0C.unk_04 * unk_70.unk_00.unk_04);
                    unk_A0.unk_00.unk_08 = D_005DFA20.unk_18.unk_08 * unk_70.unk_00.unk_08 + (D_005DFA20.unk_00.unk_08 * unk_70.unk_00.unk_00 + D_005DFA20.unk_0C.unk_08 * unk_70.unk_00.unk_04);
                    unk_A0.unk_0C.unk_00 = D_005DFA20.unk_18.unk_00 * unk_70.unk_0C.unk_08 + (D_005DFA20.unk_00.unk_00 * unk_70.unk_0C.unk_00 + D_005DFA20.unk_0C.unk_00 * unk_70.unk_0C.unk_04);
                    unk_A0.unk_0C.unk_04 = D_005DFA20.unk_18.unk_04 * unk_70.unk_0C.unk_08 + (D_005DFA20.unk_00.unk_04 * unk_70.unk_0C.unk_00 + D_005DFA20.unk_0C.unk_04 * unk_70.unk_0C.unk_04);
                    unk_A0.unk_0C.unk_08 = D_005DFA20.unk_18.unk_08 * unk_70.unk_0C.unk_08 + (D_005DFA20.unk_00.unk_08 * unk_70.unk_0C.unk_00 + D_005DFA20.unk_0C.unk_08 * unk_70.unk_0C.unk_04);
                    unk_A0.unk_18.unk_00 = D_005DFA20.unk_18.unk_00 * unk_70.unk_18.unk_08 + (D_005DFA20.unk_00.unk_00 * unk_70.unk_18.unk_00 + D_005DFA20.unk_0C.unk_00 * unk_70.unk_18.unk_04);
                    unk_A0.unk_18.unk_04 = D_005DFA20.unk_18.unk_04 * unk_70.unk_18.unk_08 + (D_005DFA20.unk_00.unk_04 * unk_70.unk_18.unk_00 + D_005DFA20.unk_0C.unk_04 * unk_70.unk_18.unk_04);
                    unk_A0.unk_18.unk_08 = D_005DFA20.unk_18.unk_08 * unk_70.unk_18.unk_08 + (D_005DFA20.unk_00.unk_08 * unk_70.unk_18.unk_00 + D_005DFA20.unk_0C.unk_08 * unk_70.unk_18.unk_04);
                    ((u32 *)&D_005DFA20.unk_00)[0] = ((u32 *)&unk_A0.unk_00)[0];
                    ((u32 *)&D_005DFA20.unk_00)[1] = ((u32 *)&unk_A0.unk_00)[1];
                    ((u32 *)&D_005DFA20.unk_00)[2] = ((u32 *)&unk_A0.unk_00)[2];
                    ((u32 *)&D_005DFA20.unk_0C)[0] = ((u32 *)&unk_A0.unk_0C)[0];
                    ((u32 *)&D_005DFA20.unk_0C)[1] = ((u32 *)&unk_A0.unk_0C)[1];
                    ((u32 *)&D_005DFA20.unk_0C)[2] = ((u32 *)&unk_A0.unk_0C)[2];
                    ((u32 *)&D_005DFA20.unk_18)[0] = ((u32 *)&unk_A0.unk_18)[0];
                    ((u32 *)&D_005DFA20.unk_18)[1] = ((u32 *)&unk_A0.unk_18)[1];
                    ((u32 *)&D_005DFA20.unk_18)[2] = ((u32 *)&unk_A0.unk_18)[2];
                } else {
                    D_005DFA20.unk_00.unk_00 = D_005DFA20.unk_18.unk_00 * unk_70.unk_00.unk_08 + (D_005DFA20.unk_00.unk_00 * unk_70.unk_00.unk_00 + D_005DFA20.unk_0C.unk_00 * unk_70.unk_00.unk_04);
                    D_005DFA20.unk_00.unk_04 = D_005DFA20.unk_18.unk_04 * unk_70.unk_00.unk_08 + (D_005DFA20.unk_00.unk_04 * unk_70.unk_00.unk_00 + D_005DFA20.unk_0C.unk_04 * unk_70.unk_00.unk_04);
                    D_005DFA20.unk_00.unk_08 = D_005DFA20.unk_18.unk_08 * unk_70.unk_00.unk_08 + (D_005DFA20.unk_00.unk_08 * unk_70.unk_00.unk_00 + D_005DFA20.unk_0C.unk_08 * unk_70.unk_00.unk_04);
                    D_005DFA20.unk_0C.unk_00 = D_005DFA20.unk_18.unk_00 * unk_70.unk_0C.unk_08 + (D_005DFA20.unk_00.unk_00 * unk_70.unk_0C.unk_00 + D_005DFA20.unk_0C.unk_00 * unk_70.unk_0C.unk_04);
                    D_005DFA20.unk_0C.unk_04 = D_005DFA20.unk_18.unk_04 * unk_70.unk_0C.unk_08 + (D_005DFA20.unk_00.unk_04 * unk_70.unk_0C.unk_00 + D_005DFA20.unk_0C.unk_04 * unk_70.unk_0C.unk_04);
                    D_005DFA20.unk_0C.unk_08 = D_005DFA20.unk_18.unk_08 * unk_70.unk_0C.unk_08 + (D_005DFA20.unk_00.unk_08 * unk_70.unk_0C.unk_00 + D_005DFA20.unk_0C.unk_08 * unk_70.unk_0C.unk_04);
                    D_005DFA20.unk_18.unk_00 = D_005DFA20.unk_18.unk_00 * unk_70.unk_18.unk_08 + (D_005DFA20.unk_00.unk_00 * unk_70.unk_18.unk_00 + D_005DFA20.unk_0C.unk_00 * unk_70.unk_18.unk_04);
                    D_005DFA20.unk_18.unk_04 = D_005DFA20.unk_18.unk_04 * unk_70.unk_18.unk_08 + (D_005DFA20.unk_00.unk_04 * unk_70.unk_18.unk_00 + D_005DFA20.unk_0C.unk_04 * unk_70.unk_18.unk_04);
                    D_005DFA20.unk_18.unk_08 = D_005DFA20.unk_18.unk_08 * unk_70.unk_18.unk_08 + (D_005DFA20.unk_00.unk_08 * unk_70.unk_18.unk_00 + D_005DFA20.unk_0C.unk_08 * unk_70.unk_18.unk_04);
                }
                temp3 = 1;
            }
        }
    }
    if (temp3) {
        temp4 = &D_005DFA20;
    } else {
        temp4 = 0;
    }
    return temp4;
}
