/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_001C6F40_1 {
    u8 pad_00[0x50];
    u16 unk_50;
} unk_func_001C6F40_1;

typedef struct unk_func_001C6F40_0 {
    u8 pad_00[0x50];
    unk_func_001C6F40_1 *unk_50;
} unk_func_001C6F40_0;

s32 *HIE_fn_hGetSuperObjectObject();
s32 func_001334B0();
unk_func_001C6F40_0 *func_00197860();
void func_001978A0();
void func_001978D0();
u8 func_001A70C0();
s32 func_001ABB40();
void func_001C2EA0();
void func_001C2EF0();
void func_001C2F90();
void func_001C45C0();
void func_001C4640(s32, u16);
void func_001C4720();
void func_001C4780(s32, s16);
void func_001D4610(s32, u8);
extern s32 D_00360004;
extern s32 D_005AB800[];

void func_001C6F40(s32 arg0, s16 arg1) {
    s32 temp_s0;
    u8 var_s1;
    u16 temp_s2;
    u8 temp_s3;

    temp_s0 = *HIE_fn_hGetSuperObjectObject(arg0);
    temp_s2 = func_00197860(temp_s0)->unk_50->unk_50;
    temp_s3 = func_001A70C0(temp_s0);
    var_s1 = temp_s3;
    if (arg1 == -0x8000) {
        arg1 = func_001334B0(D_00360004, 0, temp_s2 - 1);
    } else if (arg1 < 0) {
        arg1 = 0;
    } else if (arg1 >= temp_s2) {
        arg1 = (s16)temp_s2 - 1;
    }
    func_001C4640(temp_s0, arg1);
    func_001C4780(temp_s0, arg1 - 1);
    func_001C45C0(temp_s0, 1);
    func_001C4720(temp_s0, func_00197860(temp_s0));
    func_001C2EF0(temp_s0, 0);
    func_001C2EA0(temp_s0, 0);
    if (!temp_s3) {
        var_s1 = func_001ABB40(func_00197860(temp_s0));
        func_001D4610(temp_s0, var_s1);
    }
    func_001978D0(temp_s0, D_005AB800[0] - (arg1 * 1000) / var_s1);
    func_001978A0(temp_s0, D_005AB800[0] - 1000 / var_s1);
    func_001C2F90(arg0, 0, 0);
    func_001D4610(temp_s0, temp_s3);
}
