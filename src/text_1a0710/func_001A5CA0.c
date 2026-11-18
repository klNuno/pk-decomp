/* profile: o0_301_p */
#include "common.h"

void PLD_fn_vLoadFix();
s32 func_0010A9B0();
void func_0010AB90();
s32 func_0010AC10();
void func_0010ADF8();
s32 func_0010AF60();
void func_0011B418();
void func_0012C5C0();
void func_0012F340(s16);
void func_00155C70();
void func_00155CD0();
void func_0015BC90();
s32 func_001619F0();
u8 func_00161A20();
u8 func_00161A50();
void func_00161A80(s32);
void func_00161AC0(s32);
void func_00161B40();
void func_00164B70();
void func_001653A0(s32);
void func_001653B0();
void func_001653D0();
void func_00166AB0();
void func_00166D20(s32 *);
void func_00172F10();
void func_00172F80();
void func_0018ABF0();
void func_0019D1C0();
void func_0019D220();
void func_0019ED00();
void func_001A5B40();
void func_001A5C30();
void func_001A6270();
void func_001A92B0();
void func_001AA510();
void func_001AB810();
void func_001ABF00(f32, f32, f32);
void func_001B32A0();
void func_001BD910();
void func_001C00F0();
void func_001C4FB0();
void func_001CEE10();
void func_001CF7F0();
void func_001CF850();
void func_001DA010();
void func_00277280();
void func_00277320();
void func_002773D0();
void func_0027ED70();
void func_002D2620();
void func_003211B0();
extern char D_0034B330[];
extern char D_0034B350[];
extern char D_0034B370[];
extern char D_0034B390[];
extern char D_0034B3B0[];
extern s32 D_0035F530;
extern s8 D_0035FF64;
extern s32 D_003602D8;
extern s32 D_00360344;
extern s32 D_005AB790[];
typedef struct {
    u8 pad_00[0xF4];
    s32 unk_F4;
} unk_func_001A5CA0_0;
extern s8 D_005AB7EB[];
extern u8 D_005AB7EC[];
extern s8 D_005AB880[];
extern s8 D_005AB881[];
extern s8 D_005AB882[];
extern s16 D_005AB894[];
extern s32 D_005ABD88[];
extern s32 D_005ABD8C[];
extern s32 D_005ABD90[];
extern s32 D_005ABDA4[];
extern s32 D_005ABDA8[];
extern s32 D_005ABDAC[];
extern s32 D_005ABDB0[];
extern s32 D_005ABDB4[];
extern s32 D_005ABDB8[];
extern char D_005ABDD0[];
extern char D_005ABE30[];
extern s8 D_005ACACA[];
extern s8 D_005ACACB[];
extern s8 D_005ACACC[];
extern s8 D_005ACAD1[];
extern char D_005ACB80[];

void func_001A5CA0(void) {
    u8 sp90[32];
    u8 spB0[32];
    s32 temp_s5;
    s32 temp_s6;
    s32 var_s7;
    s32 var_s0;
    u8 var_s3;
    u32 var_s1;
    u32 var_s2;
    u32 var_s4;

    func_001DA010();
    func_001CF7F0();
    D_005AB7EB[0] = 0;
    D_005AB7EC[0] = 0xFF;
    D_005ABD88[0] = 0;
    D_005ABD8C[0] = 0;
    D_005ABD90[0] = 0;
    D_005ABDB0[0] = 0;
    D_005ABDB4[0] = 0;
    D_005ABDB8[0] = 0;
    D_005ABDA4[0] = 0;
    D_005ABDA8[0] = 0;
    D_005ABDAC[0] = 0;
    D_005ACACA[0] = 0;
    D_005ACACB[0] = 0;
    D_005ACACC[0] = 0;
    D_005AB880[0] = 1;
    D_005AB881[0] = 1;
    D_005AB882[0] = 0;
    for (var_s3 = 0; var_s3 < 4; var_s3++) {
        ((unk_func_001A5CA0_0 *)&D_005AB790[var_s3])->unk_F4 = 0;
    }
    D_0035FF64 = 0;
    func_0019D1C0();
    func_001A5B40();
    func_001653D0();
    func_0027ED70();
    func_0019D220();
    func_001AA510();
    func_001C00F0();
    func_001CEE10();
    func_002D2620(sp90);
    func_001A92B0();
    func_001BD910();
    func_001AB810();
    temp_s5 = func_00161A50();
    temp_s6 = func_00161A20();
    func_00161B40();
    func_001653A0(func_001619F0());
    func_00155CD0();
    func_00161AC0(temp_s5);
    func_00161A80(temp_s6);
    func_001653A0(temp_s5);
    var_s7 = 0;
    (void)var_s7;
    if (D_0035F530 != 0) {
        D_0035F530 = 0;
        if (func_0010A9B0(0) != 1) {
            func_0011B418(D_0034B330);
        }
        if (func_0010AC10(0, 0, D_005ACB80) != 1) {
            func_0011B418(D_0034B350);
        }
        func_003211B0();
        func_00277280(D_0034B370, 1, 0);
        func_00277320(0x7F);
        func_002773D0(D_0034B370, 0, 0);
        func_00277280(D_0034B390, 1, 0);
        func_00277320(0x7F);
        func_002773D0(D_0034B390, 0, 0);
        var_s4 = 0;
        var_s1 = 0;
        var_s2 = 0;
        func_00172F80(0);
        do {
            if (var_s2 < 0x32U) {
                func_00172F80(1);
            } else if (var_s2 < 0x50U) {
                func_00172F80(2);
            } else {
                var_s2 = 0;
            }
            if (func_0010AF60(0, 0, spB0) > 0) {
                var_s0 = ((spB0[2] << 8) | spB0[3]) ^ 0xFFFF;
            } else {
                var_s0 = 0;
            }
            if (var_s4 < 0x2710U) {
                var_s4 += 1;
            } else {
                var_s4 = 0;
                var_s1 += 1;
            }
            if (var_s1 < 0x3E8U) {
                var_s1 += 1;
                var_s2 += 1;
            } else {
                func_00277280(D_0034B3B0, 1, 0);
                func_00277320(0x7F);
                func_002773D0(D_0034B3B0, 0, 0);
                var_s0 = D_00360344;
                if (!(var_s0 & 0x800)) {
                    func_00172F80(3);
                }
                var_s1 = 0;
            }
        } while (!(var_s0 & 0x800));
        func_00172F10();
        func_0010ADF8(0, 0);
        func_0010AB90();
    }
    PLD_fn_vLoadFix();
    func_0015BC90(0xF, 0, 0, 0);
    func_001CF850();
    func_001C4FB0();
    func_001B32A0();
    func_00155C70(D_005ABDD0);
    func_00155C70(D_005ABE30);
    D_005ACAD1[0] = 0;
    func_001A6270();
    func_0019ED00();
    func_0012F340(D_005AB894[0]);
    func_0012C5C0();
    func_001A5C30();
    func_0018ABF0(1);
    func_001653B0();
    func_0018ABF0(0);
    func_001ABF00(1.0f, 2.0f, 0.0f);
    func_00166D20(&D_003602D8);
    func_00166AB0(D_003602D8, 0x4DDC47F6);
    func_00164B70(4);
}
