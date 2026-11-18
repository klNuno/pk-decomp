/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001C6C50_1 {
    u8 pad_00[0x50];
    u16 unk_50;
} unk_func_001C6C50_1;

typedef struct unk_func_001C6C50_0 {
    u8 pad_00[0x50];
    unk_func_001C6C50_1 *unk_50;
    u8 pad_54[0x22];
    u8 unk_76;
} unk_func_001C6C50_0;

s32 *HIE_fn_hGetSuperObjectObject();
s32 func_001334B0();
s32 func_00197860();
void func_001978A0();
void func_001978D0();
void *func_001ABBF0();
s32 func_001ABC30();
s32 func_001ABCE0();
void func_001C2880();
void func_001C2F40();
void func_001C2F90();
void func_001C45C0();
void func_001C4640(s32, u16);
void func_001C4720();
void func_001C4780(s32, s16);
unk_func_001C6C50_0 *func_001C4820();
void func_001C6BD0();
void func_001C6C00();
void *func_001C6C30();
void func_001C6F10();
extern s32 D_00360004;
extern s32 D_005AB800[];

s32 func_001C6C50(s32 arg0, void *arg1) {
    s32 temp_s0;
    unk_func_001C6C50_0 *var_s1;
    u16 temp_s2;
    unk_func_001C6C50_1 *temp_s3;
    s32 temp_s4;

    temp_s0 = *HIE_fn_hGetSuperObjectObject(arg0);
    var_s1 = NULL;
    if (arg1 == func_001C6C30(temp_s0)) {
        return 1;
    }
    temp_s4 = func_001ABC30(func_001C4820(temp_s0), arg1);
    if (var_s1 == NULL) {
        if (func_001ABCE0(func_001C4820(temp_s0), arg1) != 0) {
            return 0;
        }
        if (func_001C4820(temp_s0)->unk_76 == 1) {
            return 0;
        }
        var_s1 = arg1;
    } else {
        var_s1 = func_001ABBF0(temp_s4);
    }
    func_001C2880(temp_s0, 0xFFFF);
    func_001978D0(temp_s0, 0);
    func_001C6C00(temp_s0, func_00197860(temp_s0));
    func_001C6F10(var_s1->unk_50, 0);
    func_001C4720(temp_s0, var_s1);
    func_001C6BD0(temp_s0, arg1);
    func_001C45C0(temp_s0, 1);
    temp_s3 = func_001C4820(temp_s0)->unk_50;
    temp_s2 = (u8)func_001334B0(D_00360004, 0, temp_s3->unk_50 - 1);
    func_001C4640(temp_s0, temp_s2);
    func_001C4780(temp_s0, temp_s2 - 1);
    func_001C2F40(temp_s0, 0);
    func_001978A0(temp_s0, D_005AB800[0]);
    func_001C2F90(arg0, 0, 0);
    return 1;
}
