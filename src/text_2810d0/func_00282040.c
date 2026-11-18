/* profile: o0_p */
#include "common.h"

void func_0011CBB0();
void func_0027BC00(void);
s32 func_0027C010();
void func_0027C5C0();
void func_00280350(s32, f32);
s32 func_00280570(s32, f32);
s32 func_002808A0(void);
s32 func_00280E10(void);
s32 func_002810D0(s32);
s32 func_00281890(s32, s32, s32, s32, s32, s32, s64);
s32 func_00281990(void);
s32 func_002819F0(void);
void func_00281A90(void);
s32 func_00281AB0(char *);
s32 func_00281C80(void);
extern char D_00350548[];
extern char D_00350550[];
extern s32 D_003603E0;
extern s32 D_007B00B8[];
extern s32 D_007B00C0[];

s32 func_00282040(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    char unk_70[0x100];
    char unk_170[0x70];
    s32 i, unk_0, unk_1, ret, unk_2, unk_3;

    unk_2 = 0;
    unk_3 = 0;
    unk_0 = 0;
    unk_1 = 0;
    func_0011CBB0(unk_70, D_00350548, arg2, arg2);
    func_0011CBB0(unk_170, D_00350550, arg2);
    D_003603E0 = 0;
    do {
        do {
            unk_0 = 0;
            unk_1 = 0;
            if (func_00281990() == 0) {
                if (func_002808A0() == 4 && func_00280E10() == 2) {
                    return 0;
                }
                unk_0 = 1;
            }
            for (i = 0; i < 50; i++) {
                func_00280350(D_007B00C0[0], 400.0f);
                if (func_00281990() == 0 && func_002808A0() == 4 && func_00280E10() == 2) {
                    return 0;
                }
            }
            if (func_002819F0() == 0) {
                return 2;
            }
            if ((func_00281990() == 0 || func_00281C80() == 0) &&
                func_002819F0() != 0 && func_00281990() != 0) {
                if (func_0027C010(arg0, arg1, unk_70) == 0 && func_00281AB0(unk_170) != 0) {
                    if (func_00280570(D_007B00B8[0], 450.0f) == 4) {
                        return 0;
                    }
                    unk_0 = 1;
                } else if (func_00281AB0(unk_70) == 0) {
                    if (func_00281AB0(unk_170) != 0) {
                        if (func_00280570(D_007B00B8[0], 450.0f) == 4) {
                            return 0;
                        }
                        unk_0 = 1;
                    } else if (func_002810D0(0x140) == 0) {
                        if (func_00280E10() == 2) {
                            return 0;
                        }
                        unk_0 = 1;
                    } else {
                        unk_0 = 1;
                    }
                }
            }
        } while (unk_0 == 1);
        if (func_0027C010(arg0, arg1, unk_70) == 0) {
            if (func_00281AB0(unk_70) == 0) {
                return 2;
            }
            if (func_00280570(D_007B00B8[0], 450.0f) == 4) {
                return 0;
            }
        } else if (func_002819F0() != 0 && func_00281990() != 0 && unk_1 == 0) {
            ret = func_00281890(arg0, arg1, arg2, arg3, arg4, arg5, 1);
            func_00281A90();
            func_0027BC00();
            if (ret == 1) {
                func_0027C5C0(arg0, arg1, arg2);
                return 1;
            } else {
                return 0;
            }
        }
    } while (unk_1 == 0 && unk_0 == 0);
    return 5;
}
