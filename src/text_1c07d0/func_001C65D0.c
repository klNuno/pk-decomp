/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    u16 unk_50;
} unk_001C65D0_0;

typedef struct {
    u8 pad_00[0x50];
    unk_001C65D0_0 *unk_50;
    u8 pad_54[0x1C];
    s32 unk_70;
} unk_001C65D0_1;

typedef struct {
    u8 pad_00[0x76];
    u8 unk_76;
} unk_001C65D0_2;

s32 *HIE_fn_hGetSuperObjectObject(s32);
void func_0011CBB0(char *, char *, s32);
void Erm_SCE_fn_iMessageBox(char *, char *, s32);
unk_001C65D0_1 *func_00197860(s32);
void func_001978A0(s32, u32);
void func_001978D0(s32, u32);
void func_001A1670(s32, f32);
s8 func_001ABB40(unk_001C65D0_1 *);
unk_001C65D0_1 *func_001ABBF0(s32);
u8 func_001ABC10(s32);
s32 func_001ABC30(unk_001C65D0_2 *, unk_001C65D0_1 *);
s32 func_001ABCE0(unk_001C65D0_2 *, unk_001C65D0_1 *);
s32 func_001B0960(unk_001C65D0_0 *);
u16 func_001C03C0(s32);
u8 func_001C06E0(s32);
void func_001C0A50(s32);
void func_001C2810(s32, u16);
void func_001C2880(s32, u16);
u32 func_001C2910(s32);
void func_001C2EF0(s32, u8);
void func_001C2F40(s32, s32);
void func_001C2F90(s32, s32, u8);
void func_001C45C0(s32, u8);
void func_001C4640(s32, u16);
u16 func_001C46A0(s32);
void func_001C4720(s32, unk_001C65D0_1 *);
void func_001C4780(s32, s16);
unk_001C65D0_2 *func_001C4820(s32);
void func_001C6BD0(s32, unk_001C65D0_1 *);
void func_001C6C00(s32, unk_001C65D0_1 *);
unk_001C65D0_1 *func_001C6C30(s32);
unk_001C65D0_1 *func_001C8CE0(unk_001C65D0_0 *, u16, unk_001C65D0_1 *, s32, s32, f32);
extern char D_0034BA70[];
extern char D_0034BAB0[];
extern u32 D_005AB800[];

s32 func_001C65D0(s32 arg0, unk_001C65D0_1 *arg1, u8 arg2, u8 arg3, u8 arg4, s32 arg5, f32 arg6) {
    char temp[0x100];
    s32 temp2;
    unk_001C65D0_1 *temp3;
    s32 temp4;
    u32 temp5;
    u32 temp6;
    unk_001C65D0_1 *temp7;

    temp2 = *HIE_fn_hGetSuperObjectObject(arg0);
    temp3 = NULL;
    if (arg1 == func_001C6C30(temp2) && !arg2) {
        return 1;
    }
    if (!arg4) {
        temp4 = func_001ABC30(func_001C4820(temp2), arg1);
        if (temp4 && func_001ABBF0(temp4)->unk_50 == NULL) {
            func_0011CBB0(temp, D_0034BA70, func_001ABBF0(temp4)->unk_70);
            Erm_SCE_fn_iMessageBox(temp, D_0034BAB0, 0);
            temp4 = 0;
        }
        if (temp4 == 0) {
            temp7 = func_00197860(temp2);
            if (arg5 && temp7 != arg1 && func_001C06E0(arg0) && (func_001B0960(temp7->unk_50) & 0xFF) == 0) {
                if (func_001ABCE0(func_001C4820(temp2), arg1)) {
                    return 0;
                }
                if (func_001C4820(temp2)->unk_76 == 1) {
                    return 0;
                }
                temp3 = func_001C8CE0(temp7->unk_50, func_001C03C0(temp2), arg1, arg0, arg5, arg6);
                if (temp3 == NULL) {
                    temp3 = arg1;
                }
            } else {
                if (func_001ABCE0(func_001C4820(temp2), arg1)) {
                    return 0;
                }
                if (func_001C4820(temp2)->unk_76 == 1) {
                    return 0;
                }
                temp3 = arg1;
            }
        } else {
            temp3 = func_001ABBF0(temp4);
        }
    } else {
        temp3 = arg1;
        temp4 = 0;
    }

    func_001C0A50(arg0);
    if (temp4 && func_001ABC10(temp4) == 1) {
        temp5 = func_001C03C0(temp2);
        temp5 *= temp3->unk_50->unk_50;
        temp5 /= func_00197860(temp2)->unk_50->unk_50;
        if (temp5 >= temp3->unk_50->unk_50) {
            temp5 = temp3->unk_50->unk_50 - 1;
        }
        temp6 = D_005AB800[0] - func_001C2910(temp2);
        temp6 *= temp3->unk_50->unk_50;
        temp6 /= func_00197860(temp2)->unk_50->unk_50;
        temp6 = D_005AB800[0] - temp6;
        func_001978D0(temp2, temp6);
        func_001C4640(temp2, temp5);
        func_001C4780(temp2, (s16)(u16)temp5);
        func_001978A0(temp2, func_001C2910(temp2) + (temp5 * 1000) / (u32)func_001ABB40(temp3));
    } else {
        func_001C2F40(temp2, 0);
        func_001A1670(temp2, 0.0f);
        func_001978A0(temp2, D_005AB800[0]);
    }
    func_001C2810(temp2, 0);
    func_001C2880(temp2, 0xFFFF);
    func_001C6C00(temp2, func_00197860(temp2));
    func_001C4720(temp2, temp3);
    func_001C6BD0(temp2, arg1);
    func_001C45C0(temp2, 1);
    if (temp3->unk_50 != NULL) {
        func_001C2EF0(temp2, temp3->unk_50->unk_50 == func_001C46A0(temp2));
    }
    func_001C2F90(arg0, 0, arg3);
    return 1;
}
