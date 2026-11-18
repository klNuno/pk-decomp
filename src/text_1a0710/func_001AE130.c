/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    f32 unk_04;
    f32 unk_08;
    u8 pad_0C[4];
    f32 unk_10;
    u8 pad_14[0xC];
    f32 unk_20;
    f32 unk_24;
    void *unk_28;
} unk_func_001AE130_0;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001AE130_1;

extern s16 D_0035FFB4;

s32 func_0011D3F8(const s8 *);
void func_001ABF90(unk_func_001AE130_0 *, s32, f32);
void **HIE_fn_hGetSuperObjectObject(s32);
void **func_001A7060(void *);
const s8 *func_001AD470(unk_func_001AE130_0 *, s32, const s8 *, u8 *, u8 *, s32,
                         s16 *, s32 *, s32 *, s16 *, s16 *);
s32 func_001AB730(void *);
u8 func_001ABE30(s32);
void func_001ADD10(void *, u16);
void func_001ADE10(s32, s16, s16, f32, f32, f32, f32, f32);

s32 func_001AE130(unk_func_001AE130_0 *arg0, s32 arg1, const s8 *arg2, s32 arg3,
                  s32 arg4, u8 *arg5, s16 *arg6, s32 arg7)
{
    s16 temp0;
    s16 temp1;
    u8 temp2;
    const s8 *temp3;
    void *temp4;
    u16 temp5;
    s32 temp6;
    s16 temp7;
    unk_func_001AE130_1 *temp8;
    void *spCC;
    s32 spD0;
    s32 spD4;
    s16 spD8;
    s16 spDA;
    s16 spDC;
    u8 spDE;
    u8 spDF;

    temp4 = NULL;
    temp8 = NULL;
    spCC = NULL;
    temp7 = 0;
    spD8 = 0;
    spDA = 0;
    temp5 = 0;
    spD0 = 0;
    temp6 = 0;
    if (arg4 >= 0) {
        spD4 = arg4;
    } else {
        spD4 = func_0011D3F8(arg2);
    }
    temp3 = arg2 + spD4;
    if (*arg5 == 1) {
        temp5 = (u16)func_0011D3F8(arg2);
    }

    spD8 = *arg6;
    if (spD8 == -1) {
        temp6 = 1;
        spD8 = 0;
    }
    arg2 += arg3;
    spDC = (s16)arg3;
    func_001ABF90(arg0, arg1, 0.0f);
    temp4 = *HIE_fn_hGetSuperObjectObject(arg1);
    spCC = *func_001A7060(temp4);

    while (arg2 < temp3 && *arg2) {
        while (arg2 < temp3) {
            arg2 = func_001AD470(arg0, arg1, arg2, &spDF, &spDE, temp6, &spD8, &spD0,
                                 &arg7, &spDA, &spDC);
            temp1 = (s16)func_001AB730(arg0->unk_28);
            if (spDF < 0x20) {
                temp0 = -1;
            } else {
                temp2 = func_001ABE30(spDF);
                temp0 = temp2 + D_0035FFB4;
            }
            if (temp0 < 0 || temp0 >= temp1) {
                temp0 = 0;
                *arg6 = spD8;
                return spD0;
            }
            if (*arg5 == 1) {
                func_001ADD10(temp4, temp5);
                *arg5 = 0;
            }
            func_001ADE10(arg1, spDA, temp0, arg0->unk_04, arg0->unk_08,
                          arg0->unk_24, arg0->unk_10, arg0->unk_20);
            spDA++;
            *arg6 = ++spD8;
        }
        temp7++;
    }
    if (temp8 != NULL) {
        temp8->unk_08 = 0;
    }
    return spD0;
}
