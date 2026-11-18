/* profile: o0_301_p */
#include "common.h"

extern char D_00350548[];
extern char D_00350550[];
extern s32 D_007B00C0[];

void func_0011CBB0();
void func_0027BC00(void);
s32 func_0027C010(s32, s32, char *);
void func_0027C5C0(s32, s32, s32);
void func_00280350(s32, f32);
s32 func_002809C0(void);
s32 func_00280AC0(void);
s32 func_002811E0(s32);
s32 func_00281890(s32, s32, s32, s32, s32, s32, s32);
s32 func_00281990(void);
s32 func_002819F0(void);
void func_00281A90(void);
s32 func_00281AB0(char *);
s32 func_00281C80(void);

s32 func_00281D00(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7)
{
    char temp0[0x100];
    char temp1[0x70];
    char temp2[0x200];
    s32 temp3;
    s32 temp4;
    s32 temp5;
    s32 temp6;
    s32 temp7;
    s32 temp8;
    s32 temp9;
    s32 temp10;
    s32 temp11;

    temp8 = 0;
    temp6 = 0;
    temp5 = 0;
    temp9 = 0;
    temp10 = -1;
    temp11 = 0;
    temp3 = -1;
    for (;;) {
    unk_60:;
        func_0011CBB0(temp0, D_00350548, arg2, arg2);
        if (func_00281990() != 0) {
            func_00281A90();
            do {
                temp5 = 0;
                for (temp4 = 0; temp4 < 50; ++temp4) {
                    if (func_00281990() != 0) {
                        func_00280350(D_007B00C0[0], 400.0f);
                    } else {
                        if ((temp3 = func_00280AC0()) != 1) {
                            goto unk_60;
                        }
                        return 0;
                    }
                }
                if (func_00281990() == 0 && func_002809C0() == 4) {
                    return 0;
                }
                if (func_002819F0() == 0) {
                    return 0;
                }
                if (func_00281AB0(temp0) != 0) {
                    func_0011CBB0(temp2, D_00350548, arg2, arg2);
                    if (func_0027C010(arg0, arg1, temp2) == 0) {
                        return 0;
                    }
                    temp7 = func_00281890(arg0, arg1, arg2, arg3, arg4, arg5, 1);
                    func_00281A90();
                    func_0027BC00();
                    if (temp7 == 1 && func_00281990() != 0) {
                        func_0027C5C0(arg0, arg1, arg2);
                        return 1;
                    }
                    if (temp7 == 0) {
                        return 0;
                    }
                    return temp7;
                }
                func_0011CBB0(temp1, D_00350550, arg2);
                temp8 = 0x140;
                if (func_00281C80() == 0 && func_00281AB0(temp1) == 0) {
                    temp7 = func_002811E0(temp8);
                } else {
                    temp7 = 0;
                }
            } while (temp7 == 3);
            return temp7;
        }
        if ((temp3 = func_00280AC0()) == 1) {
            return 0;
        }
    }
}
