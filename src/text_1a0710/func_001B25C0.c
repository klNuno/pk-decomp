/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_001B25C0_0 {
    s32 unk_00;
    s32 unk_04;
    struct unk_func_001B25C0_0 *unk_08;
} unk_func_001B25C0_0;

extern s32 *HIE_fn_hGetSuperObjectObject(s32);
extern s32 func_00133AA0(s32 *);
extern s32 func_00133D00(s32);
extern s32 func_001971C0(s32);
extern s32 func_001979C0(s32);
extern unk_func_001B25C0_0 *func_0019E2C0(s32);
extern s32 func_001B0560(s32, s32, s32);
extern u16 **func_001B0610(s32, s32);
extern u16 func_001B0AE0(u16 *);
extern s32 func_001B0B00(s32, u16, s32);
extern u8 func_001B3350(s32, s32, s16);
extern s32 func_001B3430(s32, s32);

s32 func_001B25C0(s32 arg0, s32 arg1)
{
    unk_func_001B25C0_0 *temp0;
    s16 temp1;
    s32 temp2;
    s32 temp3;
    u16 *temp4;
    s32 temp5;
    u16 temp6;
    u8 temp7;
    u16 **temp8;
    s32 *temp9;
    s32 temp10;
    s16 temp11;

    temp2 = 0;
    temp9 = NULL;
    temp5 = 0;
    temp0 = NULL;
    temp11 = 0;
    temp3 = 0;
    temp10 = 0;
    temp1 = 0;
    temp8 = func_001B0610(0, arg0);
    temp4 = temp8 != NULL ? *temp8 : NULL;
    temp6 = temp4 == NULL ? -1 : func_001B0AE0(temp4);
    while (temp1 < func_001B3430(0, arg0)) {
        temp7 = func_001B3350(0, arg0, temp1);
        if (temp7 == 1 || (temp7 == 0 && temp6 == temp1)) {
            temp2 = func_001B0B00(0, temp1, arg0);
            if (temp2 != 0 && func_001B0560(temp2, func_001979C0(arg0), arg1)) {
                return 1;
            }
        }
        temp1++;
        if (temp4 != NULL && temp6 < temp1) {
            temp4++;
            temp6 = temp4 == NULL ? -1 : func_001B0AE0(temp4);
        }
    }
    temp0 = func_0019E2C0(*HIE_fn_hGetSuperObjectObject(arg0));
    while (temp0 != NULL) {
        if (temp3 != 0 && temp0->unk_04 != 0) {
            temp3 = temp0->unk_04;
        } else {
            temp3 = temp0->unk_00;
        }
        temp10 = func_001971C0(temp3);
        if (temp10 & 0x18) {
            temp9 = HIE_fn_hGetSuperObjectObject(temp3);
            temp5 = func_00133AA0(temp9);
            if (temp5 != 0) {
                temp2 = func_00133D00(temp5);
                if (temp2 != 0 && func_001B0560(temp2, func_001979C0(temp3), arg1)) {
                    return 1;
                }
            }
        }
        temp0 = temp0->unk_08;
    }
    return 0;
}
