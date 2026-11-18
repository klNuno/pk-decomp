/* profile: o0_p */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    f32 unk_04;
    u8 pad_08[4];
    f32 unk_0C;
    u8 pad_10[4];
    f32 unk_14;
    u8 pad_18[4];
    f32 unk_1C, unk_20, unk_24;
} unk_func_001AD470_0;

extern u32 D_0035FFB8;
extern f32 D_005ACFF0[], D_005AD0C0[];

s32 func_001164E0(const s8 *);
s32 func_0011D3F8(const s8 *);
u8 func_001ABE30(s32);
s32 func_001ACFA0(unk_func_001AD470_0 *, const s8 *, u8 *, u8 *);

const s8 *func_001AD470(unk_func_001AD470_0 *arg0, s32 arg1, const s8 *arg2,
                       u8 *arg3, u8 *arg4, s32 arg5, s16 *arg6, s32 *arg7,
                       s32 **arg8, s16 *arg9, u16 *arg10) {
    u8 temp0;
    f32 temp4, temp3, temp2, temp1;
    s32 temp5;
    u32 temp6 = 0;
    u16 temp7;
    u8 temp8;

    temp3 = 0.0f;
    temp2 = 0.0f;
    temp1 = 0.0f;
    *arg4 = 0;
    temp4 = 0.0f;
    if (arg5 == 0) {
        temp5 = 0;
        temp0 = 1;
        temp7 = (u16)func_0011D3F8(arg2);
        temp8 = arg2[*arg6];
        if (*arg7 != 0) {
            if (temp8 == '/') {
                temp8 = (u8)(arg2[*arg6] + 1);
                if (temp8 == 'E' || temp8 == 'e') {
                    *arg6 += 1;
                    *arg7 = func_001164E0(arg2 + (*arg6 += 1));
                    do {
                    } while (arg2[(*arg6)++] != ':');
                } else {
                    *arg7 = 0;
                }
            } else {
                *arg7 = 0;
            }
            *arg3 = 0;
            arg2 += temp7;
            return arg2;
        }
        while (temp8 == '/') {
            temp8 = arg2[++*arg6];
            if (temp8 == 'E' || temp8 == 'e') {
                *arg7 = func_001164E0(arg2 + ++*arg6);
                do {
                } while (arg2[(*arg6)++] != ':');
                *arg3 = 0;
                arg2 += temp7;
                return arg2;
            }
            if (temp8 == 'D' || temp8 == 'd' || temp8 == 'P' || temp8 == 'p') {
                **arg8 = func_001164E0(arg2 + ++*arg6);
                if (temp8 == 'P' || temp8 == 'p') {
                    **arg8 = -**arg8;
                }
                do {
                } while (arg2[(*arg6)++] != ':');
                *arg3 = 0;
                arg2 += temp7;
                return arg2;
            }
            do {
            } while (arg2[(*arg6)++] != ':');
            temp8 = arg2[*arg6];
        }
        *arg9 = -1;
        for (; temp5 <= *arg6; temp5++) {
            temp8 = arg2[temp5];
            if (temp8 == '/') {
                temp5 += func_001ACFA0(arg0, &arg2[temp5] + 1, arg4, &temp0);
            } else {
                temp1 = arg0->unk_1C;
                if (temp1 == 0.0f) {
                    if (D_0035FFB8 != 0) {
                        temp1 = D_005ACFF0[temp6 % D_0035FFB8];
                    } else {
                        temp1 = 1.0f;
                    }
                }
                arg0->unk_20 = temp1;
                if (arg0->unk_14) {
                    temp2 = arg0->unk_14;
                } else {
                    u8 temp = func_001ABE30(temp8);
                    temp2 = D_005AD0C0[temp];
                }
                ++*arg9;
                if (!temp0) {
                    arg0->unk_0C += temp4 * temp3;
                } else {
                    temp0 = 0;
                }
                ++temp6;
                temp4 = temp1;
                temp3 = temp2;
            }
        }
        arg0->unk_24 = temp1 * temp2;
        arg0->unk_04 += arg0->unk_0C;
    } else {
        temp0 = 0;
        temp7 = (u16)func_0011D3F8(arg2);
        temp6 = *arg10;
        while (*arg2++ == '/') {
            arg2 += func_001ACFA0(arg0, arg2, arg4, &temp0);
        }
        temp8 = arg2[-1];
        temp1 = arg0->unk_1C;
        if (temp1 == 0.0f) {
            if (D_0035FFB8 != 0) {
                temp1 = *(D_005ACFF0 + (temp6 % D_0035FFB8));
            } else {
                temp1 = 1.0f;
            }
        }
        arg0->unk_20 = temp1;
        if (!temp0) {
            arg0->unk_04 += arg0->unk_0C;
        } else {
            temp0 = 0;
        }
        if (arg0->unk_14) {
            arg0->unk_0C = temp1 * arg0->unk_14;
        } else {
            u8 temp = func_001ABE30(temp8);
            arg0->unk_0C = temp1 * D_005AD0C0[temp];
        }
        arg0->unk_24 = arg0->unk_0C;
        ++temp6;
    }
    *arg3 = temp8;
    if (arg5 == 0) {
        arg2 += temp7;
    }
    *arg10 = temp6;
    return arg2;
}
