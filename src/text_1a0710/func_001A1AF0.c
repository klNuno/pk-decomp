/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[4];
    s32 unk_0C;
} unk_func_001A1AF0_0;

unk_func_001A1AF0_0 *HIE_fn_hGetSuperObjectObject(s32);
void func_0012C4B0(void);
void func_0012D980(s32);
s32 func_0012DC80(s32);
s32 func_0012DCA0(s32);
s32 func_001971C0(s32);
s32 func_001971E0(s32);
s32 func_00197CC0(s32);
s32 func_0019ABC0(s32);
u8 func_0019ABE0(s32);
void func_001A1070(s32);
void func_001A1760(s32);
void func_001A1AA0(s32, u8);
s32 func_001A1F30(s32);
s32 func_001A1F50(s32);
s32 func_001A7D60(s32);
s32 func_001A7D80(void);
s32 func_001AEF20(s32);
extern s32 D_005AB7F8[];
extern u8 D_005ACAD0[];

void func_001A1AF0(s32 arg0, s32 arg1, s32 arg2)
{
    s32 temp0;
    s32 temp1;
    s32 temp2;
    s32 temp3;
    s32 temp4;
    s32 temp5;
    s32 temp6;
    s32 temp7;
    unk_func_001A1AF0_0 *temp8;
    volatile s32 temp9;
    volatile s32 temp10;
    volatile s32 temp11;
    volatile s32 temp12;

    if (func_001971C0(arg0) == 2) {
        temp7 = HIE_fn_hGetSuperObjectObject(arg0)->unk_04;
        temp8 = HIE_fn_hGetSuperObjectObject(arg0);
        if (temp7 == 0 || (!(u8)func_00197CC0(temp7)
            && (func_0019ABE0(temp8->unk_04) != 1 || D_005AB7F8[0] == func_001A1F50(temp8->unk_04)))) {
            return;
        }
        func_0012D980(arg0);
        if (!(u8)func_00197CC0(temp7)) {
            if (!D_005ACAD0[0] || (func_0019ABC0(temp7) & 0x100000)) {
                if (arg0 == arg1) {
                    func_001A1AA0(temp7, 0);
                } else {
                    temp9 = func_0019ABC0(temp7);
                    if (temp9 & 0x4C0000) {
                        func_001A1760(arg0);
                    }
                }
                func_001A1070(arg0);
            }
            func_0012C4B0();
            func_0012D980(arg0);
            if (arg0 == func_001A7D60(func_001A7D80())) {
                temp2 = 0;
                temp0 = func_001971E0(arg0);
                temp10 = temp1 = func_0012DCA0(temp0);
                while (temp0 != 0) {
                    if (func_001971C0(temp0) == 2 && func_001AEF20(temp0) == 0) {
                        func_001A1AF0(temp0, arg1, arg2);
                    }
                    ++temp2;
                    temp0 = temp1;
                    temp4 = temp1 = func_0012DCA0(temp0);
                    (void)temp4;
                }
            }
        } else {
            temp2 = func_001A1F30(arg0);
            temp0 = ((unk_func_001A1AF0_0 *)arg0)->unk_0C;
            temp11 = temp3 = func_0012DC80(temp0);
            while (temp0 != 0) {
                if (func_001971C0(temp0) == 2 && func_001AEF20(arg0) == 0) {
                    func_001A1AF0(temp0, arg1, arg2);
                }
                --temp2;
                temp0 = temp3;
                temp5 = temp3 = func_0012DC80(temp0);
                (void)temp5;
            }
        }
    } else {
        func_0012D980(arg0);
        temp2 = 0;
        temp0 = func_001971E0(arg0);
        temp12 = temp1 = func_0012DCA0(temp0);
        while (temp0 != 0) {
            if (func_001971C0(temp0) == 2 && func_001AEF20(temp0) == 0) {
                func_001A1AF0(temp0, arg1, arg2);
            }
            ++temp2;
            temp0 = temp1;
            temp6 = temp1 = func_0012DCA0(temp0);
            (void)temp6;
        }
    }
    func_0012C4B0();
}
