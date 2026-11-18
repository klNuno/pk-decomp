/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[4];
} unk_00212A10_0;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_00212A10_1;

unk_00212A10_1 *HIE_fn_hGetSuperObjectObject(s32);
f32 func_00151360(f32);
void func_00155EC0(s32, unk_00212A10_0 *);
s32 func_001979C0(s32);
s32 func_00198500(s32);
s32 func_00198520(s32);
s32 func_00198540(s32);
s32 func_0019ABC0(s32);
s32 func_001BFBD0(s32);
f32 func_0020BF70(void);
f32 func_0020BF80(void);
s32 func_0020DC60(s32);

s32 func_00212A10(s32 arg0, s32 arg1, s32 arg2, s32 arg3)
{
    unk_00212A10_0 temp0;
    unk_00212A10_0 temp1;
    f32 temp2;
    f32 temp3;
    s32 temp7;
    s32 temp8;
    s32 temp9;
    s32 temp10;
    s32 temp11;
    s32 temp12;
    s32 temp13;

    temp7 = 0;
    temp11 = 0;
    temp2 = 3.402822e38f;
    func_00155EC0(func_001979C0(arg0), &temp0);
    temp12 = 0;
    temp13 = temp8 = func_00198540(arg1);
    (void)temp13;
    while (temp8 != 0) {
        temp7 = func_00198500(temp8);
        if (temp7 != arg0 && !func_0020DC60(temp7)) {
            switch (arg3) {
            case 0x8C:
                temp9 = func_001BFBD0(HIE_fn_hGetSuperObjectObject(temp7)->unk_04);
                break;
            default:
                temp9 = func_0019ABC0(HIE_fn_hGetSuperObjectObject(temp7)->unk_04);
                break;
            }
            if (temp9 & arg2) {
                func_00155EC0(func_001979C0(temp7), &temp1);
                temp3 = func_00151360(temp1.unk_00 - temp0.unk_00)
                    + func_00151360(temp1.unk_04 - temp0.unk_04)
                    + func_00151360(temp1.unk_08 - temp0.unk_08);
                if (temp3 < temp2) {
                    if (temp3 <= func_0020BF70()) {
                        if (!((func_0020BF70() > 0.0f ? func_0020BF70() : -func_0020BF70()) < 0.001f)) {
                            goto unk_2E4;
                        }
                    }
                    if (!(temp3 < func_0020BF80())) {
                        if (!((func_0020BF80() > 0.0f ? func_0020BF80() : -func_0020BF80()) < 0.001f)) {
                            goto unk_2E4;
                        }
                    }
                    temp2 = temp3;
                    temp11 = temp7;
                }
            }
        }
    unk_2E4:;
        ++temp12;
        temp10 = temp8 = func_00198520(temp8);
        (void)temp10;
    }
    return temp11;
}
