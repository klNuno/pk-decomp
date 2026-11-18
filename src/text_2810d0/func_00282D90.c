/* profile: o0_301_p */
#include "common.h"

void func_0011CBB0(char *, char *, ...);
void func_00162A40(void);
void func_0017E8D0(void);
void func_0027BC00(void);
s32 func_0027C010(s32, s32, char *);
void func_0027C5C0(s32, s32, s32);
void func_00280270(s32, f32);
void func_00280350(s32, f32);
s32 func_002804C0(s32, f32);
s32 func_00280570(s32, f32);
s32 func_00280640(s32, f32);
s32 func_002808A0(void);
s32 func_002809C0(void);
s32 func_00280E10(void);
s32 func_00281890(s32, s32, s32, s32, s32, s32, s64);
s32 func_00281990(void);
s32 func_002819F0(void);
void func_00281A90(void);
s32 func_00281AB0(char *);

extern char D_00350548[], D_00350550[];
extern s32 D_007B0098[], D_007B009C[], D_007B00A0[], D_007B00B8[];
extern s32 D_007B00C0[], D_007B00C4[];

s32 func_00282D90(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s64 temp0;
    s32 temp1;
    s32 temp2;
    s32 temp3;
    s32 temp4;
    s32 temp5;
    s32 temp6;
    s32 temp7;
    char sp90[0x200];
    char sp290[0x200];

    temp7 = 0;
    temp4 = 0;
    temp5 = 0;
    temp0 = 0;
    temp1 = 0;
    do {
        temp4 = 0;
        temp5 = 0;
        temp2 = 0;
    unk_00:
        if (func_00281990() == 0) {
            if (func_002809C0() == 4) {
                return 0;
            }
        } else {
            func_00281A90();
        }

        for (temp1 = 0; temp1 < 50; temp1++) {
            func_00280350(D_007B00C0[0], 400.0f);
            if (func_00281990() == 0) {
                if (func_002808A0() == 4) {
                    return 0;
                }
                func_00281A90();
            }
        }
        if (func_002819F0() == 0) {
            if ((temp6 = func_00280640(D_007B00C4[0], 450.0f)) == 4) {
                return 0;
            }
            goto unk_00;
        }

        if (func_002819F0() != 0 && func_00281990() != 0) {
            func_0011CBB0(sp90, D_00350548, arg2, arg2);
            func_0011CBB0(sp290, D_00350550, arg2);
            if (func_00281AB0(sp90) == 0 || func_0027C010(arg0, arg1, sp90) == 0) {
                if (func_0027C010(arg0, arg1, sp90) == 0) {
                    if (func_00281AB0(sp290) == 0) {
                        if (func_00280570(D_007B009C[0], 450.0f) == 4) {
                            return 0;
                        }
                    } else if (func_00280570(D_007B00B8[0], 450.0f) == 4) {
                        return 0;
                    }
                } else if (func_00280570(D_007B009C[0], 450.0f) == 4) {
                    return 0;
                }
            } else if (temp2 != 3 && func_00281990() != 0) {
                temp2 = func_00281890(arg0, arg1, arg2, arg3, arg4, arg5, 0);
                func_00281A90();
                func_0027BC00();
                if (temp2 == 1 && func_00281990() != 0) {
                    func_0027C5C0(arg0, arg1, arg2);
                    for (temp0 = 0; temp0 < 55; temp0++) {
                        func_0017E8D0();
                        func_00280270(D_007B00A0[0], 450.0f);
                        func_00162A40();
                        func_0017E8D0();
                        func_00280270(D_007B00A0[0], 450.0f);
                        func_00162A40();
                    }
                    return 1;
                }
                if (temp2 == 0) {
                    temp3 = -1;
                    if ((temp3 = func_002804C0(D_007B0098[0], 450.0f)) == 1) {
                        goto unk_00;
                    }
                    if (temp3 == 4) {
                        return 0;
                    }
                } else if (temp2 == 2 && func_00280E10() == 2) {
                    return 0;
                }
            }
        }
    } while (temp5 == 0 && temp4 == 0);
    return 0;
}
