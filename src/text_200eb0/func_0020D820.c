/* profile: o0_301_p */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_0020D820_0;

typedef struct {
    u8 pad_00[0x30];
    u32 unk_30;
} unk_0020D820_1;

typedef struct unk_0020D820_2 {
    unk_0020D820_1 *unk_00;
    u32 unk_04;
    struct unk_0020D820_2 *unk_08;
} unk_0020D820_2;

typedef struct {
    u8 pad_00[0x60];
} unk_0020D820_3;

s32 *HIE_fn_hGetSuperObjectObject(unk_0020D820_1 *);
s32 func_00133AA0(s32 *);
s32 func_00133CD0(s32);
s32 func_00133CE0(s32);
s32 func_00133CF0(s32);
s32 func_00133D00(s32);
void func_00154B00(unk_0020D820_3 *, unk_0020D820_3 *);
void func_001559E0(unk_0020D820_0 *, unk_0020D820_3 *, unk_0020D820_0 *);
s32 func_00155FF0(unk_0020D820_3 *);
void func_001562B0(unk_0020D820_3 *, unk_0020D820_0 *);
s32 func_001971C0(unk_0020D820_1 *);
unk_0020D820_3 *func_001979C0(unk_0020D820_1 *);
unk_0020D820_2 *func_0019E2C0(s32);
s32 func_001B0130(unk_0020D820_1 *, u8, u8);
s32 func_001B02F0(s32, u16);
s32 func_001B0B00(u8, u16, unk_0020D820_1 *);
s32 func_001B3430(u8, unk_0020D820_1 *);
u8 func_0020D6A0(s32, unk_0020D820_0 *);

void func_0020D820(unk_0020D820_1 *arg0, u16 arg1, u8 arg2, u8 arg3, unk_0020D820_0 *arg4) {
    unk_0020D820_3 temp;
    unk_0020D820_0 temp0;
    s32 temp1;
    unk_0020D820_1 *temp2;
    s32 temp3;
    unk_0020D820_2 *temp4;
    s32 temp5;
    unk_0020D820_3 *temp6;
    u8 temp7 = 0;
    s32 temp8 = func_001B3430(arg2, arg0);

    for (temp5 = 0; temp5 < temp8; temp5++) {
        temp1 = func_001B0B00(arg2, (u16)temp5, arg0);
        if (temp1 != 0 && func_001B02F0(temp1, arg1) != 0 &&
            func_001B0130(arg0, arg2, (u8)temp5) != 0 &&
            ((temp7 = func_0020D6A0(temp1, arg4)) != 0)) {
            if (arg3) {
                func_001559E0(arg4, func_001979C0(arg0), arg4);
            } else {
                temp6 = func_001979C0(arg0);
                if (func_00155FF0(temp6) != 0) {
                    func_001562B0(temp6, &temp0);
                    arg4->unk_00 = temp0.unk_00 * arg4->unk_00;
                    arg4->unk_04 = temp0.unk_04 * arg4->unk_04;
                    arg4->unk_08 = temp0.unk_08 * arg4->unk_08;
                }
            }
            break;
        }
    }

    if (!temp7) {
        for (temp4 = func_0019E2C0(*HIE_fn_hGetSuperObjectObject(arg0));
             temp4 != NULL; temp4 = temp4->unk_08) {
            temp2 = temp4->unk_00;
            if (temp2 != NULL && (func_001971C0(temp2) & 0x18) && !(temp2->unk_30 & 2)) {
                temp3 = func_00133AA0(HIE_fn_hGetSuperObjectObject(temp2));
                switch ((u8)arg2) {
                case 2: temp1 = func_00133CF0(temp3); break;
                case 0: temp1 = func_00133D00(temp3); break;
                case 3: temp1 = func_00133CE0(temp3); break;
                case 1: temp1 = func_00133CD0(temp3); break;
                default: temp1 = 0; break;
                }
                if (temp1 != 0 && func_001B02F0(temp1, arg1) != 0 &&
                    ((temp7 = func_0020D6A0(temp1, arg4)) != 0)) {
                    func_001559E0(arg4, func_001979C0(temp2), arg4);
                    if (!arg3) {
                        func_00154B00(&temp, func_001979C0(arg0));
                        func_001559E0(arg4, &temp, arg4);
                    }
                    break;
                }
            }
        }
    }
}
