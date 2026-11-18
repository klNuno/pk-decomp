/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u16 *unk_00;
    s32 unk_04;
} unk_func_001B13A0_0;

typedef struct unk_func_001B13A0_1 {
    s32 unk_00;
    s32 unk_04;
    struct unk_func_001B13A0_1 *unk_08;
} unk_func_001B13A0_1;

s32 *HIE_fn_hGetSuperObjectObject(s32);
s32 func_00133AA0(s32 *);
s32 func_00133CF0(s32);
s32 func_00161ED0(s32, u16);
s32 func_001971C0(s32);
s32 func_001979C0(s32);
u8 func_0019ABE0(s32);
unk_func_001B13A0_1 *func_0019E2C0(s32);
s32 func_001A7060(s32);
u8 func_001AB7E0(s32);
s32 func_001B02F0(s32, u16);
unk_func_001B13A0_0 *func_001B0610(s32, s32);
u16 func_001B0AE0(u16 *);
s32 func_001B0B00(s32, u16, s32);
u8 func_001B3350(s32, s32, s16);
s32 func_001B33C0(s32, s32);
s32 func_001B3430(s32, s32);
s32 func_001E3AC0(s32, s32, s32, s32, s32 *, s32 *);

s32 func_001B13A0(s32 arg0, s32 arg1, s32 arg2, u16 arg3) {
    s32 temp_s0;
    s16 temp_s2;
    void *temp_s1;
    unk_func_001B13A0_1 *temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    u16 temp_s6;
    u8 temp_s7;
    unk_func_001B13A0_0 *spB8;
    s32 *spBC;
    s32 spC0;
    s32 spC4;
    s32 spC8;
    s32 spCC;
    u16 *spD0;
    s16 spDC;
    s16 spDE;

    if (func_0019ABE0(HIE_fn_hGetSuperObjectObject(arg2)[1]) != 1) {
        return 0;
    }
    temp_s0 = 0;
    spBC = NULL;
    temp_s5 = 0;
    spC0 = 0;
    spC4 = 0;
    temp_s3 = NULL;
    spDC = 0;
    temp_s4 = 0;
    spC8 = 0;
    temp_s2 = 0;
    spB8 = func_001B0610(2, arg2);

    if (func_001B33C0(2, arg2) != 0) {
        if (spB8 != NULL) {
            temp_s1 = spB8->unk_00;
            spDE = temp_s2 = 0;
            while (temp_s2 < spB8->unk_04) {
                temp_s0 = func_001B0B00(2, func_001B0AE0((u16 *)temp_s1), arg2);
                if (temp_s0 != 0 && (arg3 == 0 || func_001B02F0(temp_s0, arg3) != 0) &&
                    func_001E3AC0(arg0, arg1, temp_s0, func_001979C0(arg2), &spC0, &spC4) != 0 &&
                    (arg3 == 0 || func_00161ED0(spC4, arg3) != 0)) {
                    return 1;
                }
                temp_s2++;
                spD0 = temp_s1 = (u16 *)temp_s1 + 1;
            }
        }
    } else {
        temp_s1 = spB8 != NULL ? spB8->unk_00 : NULL;
        temp_s6 = temp_s1 == NULL ? -1 : func_001B0AE0((u16 *)temp_s1);
        while (temp_s2 < func_001B3430(2, arg2)) {
            temp_s7 = func_001B3350(2, arg2, temp_s2);
            if (temp_s7 == 1 || (temp_s7 == 0 && temp_s6 == temp_s2)) {
                temp_s0 = func_001B0B00(2, temp_s2, arg2);
                if (temp_s0 != 0 && (arg3 == 0 || func_001B02F0(temp_s0, arg3) != 0) &&
                    func_001E3AC0(arg0, arg1, temp_s0, func_001979C0(arg2), &spC0, &spC4) != 0 &&
                    (arg3 == 0 || func_00161ED0(spC4, arg3) != 0)) {
                    return 1;
                }
            }
            temp_s2++;
            if (temp_s1 != NULL && temp_s6 < temp_s2) {
                temp_s1 = (u16 *)temp_s1 + 1;
                temp_s6 = temp_s1 == NULL ? (s32)-1 : (s32)func_001B0AE0((u16 *)temp_s1);
            }
        }
    }
    if ((spCC = func_001A7060(HIE_fn_hGetSuperObjectObject(arg2)[0])) == 0 ||
        (u8)func_001AB7E0(spCC) == 0) {
        return 0;
    }
    temp_s3 = func_0019E2C0(HIE_fn_hGetSuperObjectObject(arg2)[0]);
    while (temp_s3 != NULL) {
        if (temp_s3->unk_04 != 0) {
            temp_s4 = temp_s3->unk_04;
        } else {
            temp_s4 = temp_s3->unk_00;
        }
        spC8 = func_001971C0(temp_s4);
        if (spC8 & 0x18) {
            spBC = HIE_fn_hGetSuperObjectObject(temp_s4);
            temp_s5 = func_00133AA0(spBC);
            if (temp_s5 != 0) {
                temp_s0 = func_00133CF0(temp_s5);
                if (temp_s0 != 0 && (arg3 == 0 || func_001B02F0(temp_s0, arg3) != 0) &&
                    func_001E3AC0(arg0, arg1, temp_s0, func_001979C0(temp_s4), &spC0, &spC4) != 0 &&
                    (arg3 == 0 || func_00161ED0(spC4, arg3) != 0)) {
                    return 1;
                }
            }
        }
        temp_s3 = temp_s3->unk_08;
    }
    return 0;
}
