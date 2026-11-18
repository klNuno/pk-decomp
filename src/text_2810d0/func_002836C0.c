/* profile: o0_301_p */
#include "common.h"

void func_0011CBB0(char *, char *, s32, s32);
void func_0027BC00(void);
void func_0027C690(s32, s32, s32);
s32 func_002808A0(void);
s32 func_00280BC0(void);
s32 func_00280E10(void);
s32 func_00281300(char *);
s32 func_00281720(s32, s32, s32, s32, s32, s32, s32);
s32 func_00281990(void);
s32 func_002819F0(void);
void func_00281A90(void);
s32 func_00281AB0(char *);
s32 func_00281B80(s32, s32);
s32 func_00281C80(void);
extern char D_00350548[];

s32 func_002836C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7)
{
    s32 temp0;
    s32 temp1;
    s32 temp2;
    s32 temp3;
    char temp4[0x200];

    temp3 = 0;
    temp1 = 0;
    temp2 = 0;
    do {
        temp1 = 0;
        temp2 = 0;
        temp0 = 0;
        if (func_00281990() == 0) {
            if (func_002808A0() == 4 && func_00280E10() == 2)
                return 0;
        } else {
            func_00281A90();
        }

        if (func_002819F0() == 0 && func_00280BC0() == 0 && func_00280E10() == 2)
            return 0;
        if (func_00281C80() == 0 && func_002819F0() != 0 && func_00281990() != 0 &&
            func_00281B80(0, 0) == 2 && func_00280E10() == 2)
            return 0;

        if (func_002819F0() != 0 && func_00281990() != 0 && func_00281C80() != 0) {
            func_0011CBB0(temp4, D_00350548, arg2, arg2);
            if (func_00281AB0(temp4) != 0 && func_00281300(temp4) == 2) {
                if (func_00280E10() == 2)
                    return 0;
                temp0 = 2;
            }
            if (temp0 != 2 && func_00281990() != 0) {
                temp0 = func_00281720(arg0, arg1, arg2, arg3, arg4, arg5, 0);
                func_00281A90();
                func_0027BC00();
                if (temp0 == 1) {
                    func_0027C690(arg0, arg1, arg2);
                    return 1;
                }
                if (temp0 == 2 && func_00280E10() == 2)
                    return 0;
            }
        }
    } while (temp2 == 0 && temp1 == 0);
    return 0;
}