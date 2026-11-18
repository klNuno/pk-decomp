/* profile: opt_300 */
#include "common.h"

typedef struct {
    f32 unk_00, unk_04, unk_08;
} unk_func_0012B150_0;

typedef struct {
    s32 unk_00[3];
} unk_func_0012B150_1;

typedef struct unk_func_0012B150_2 {
    s32 unk_00;
    s32 unk_04;
    struct unk_func_0012B150_2 *unk_08;
    u8 pad_0C[8];
    struct unk_func_0012B150_2 *unk_14;
    u8 pad_18[0xC];
    void *unk_24;
    u8 pad_28[8];
    u8 unk_30;
    u8 pad_31[3];
    void *unk_34;
} unk_func_0012B150_2;

extern s32 D_0035F850;
extern f32 D_0035F854;
s32 func_00133AB0(s32);
void func_00155C70(void *);
unk_func_0012B150_0 *func_00155EE0(void *);
s32 func_0015CA30(s32);
void func_001687E0(s32, s32, f32 *, s32 *);
s32 func_00192910(void *, unk_func_0012B150_0 *, unk_func_0012B150_0 *, s32);
s32 func_00195F80(void *, unk_func_0012B150_1 *, void *, s32, f32);
f32 func_001DCF00(void *);
unk_func_0012B150_1 *func_001DCF10(void *);
unk_func_0012B150_0 *func_001DCF70(void *);
unk_func_0012B150_0 *func_001DCF80(void *);

static inline s32 *func_0012B150_0(unk_func_0012B150_1 *arg0) {
    s32 *temp = (s32 *)arg0;
    return temp;
}

void func_0012B150(void *arg0, unk_func_0012B150_2 *arg1, unk_func_0012B150_2 **arg2,
                   s32 *arg3, s16 *arg4, s16 arg5) {
    unk_func_0012B150_1 temp2;
    u8 temp3[0x60];
    unk_func_0012B150_0 temp0;
    unk_func_0012B150_0 temp1;
    void *temp4 = 0;
    void *temp5 = 0;
    f32 temp6 = 0.0f;
    s32 temp7 = arg1->unk_00;
    s32 temp8 = (u8)(arg1->unk_30 & 0x10);

    if (temp8) {
        temp4 = arg1->unk_34;
    } else {
        temp5 = arg1->unk_34;
    }
    if (temp8 && temp4) {
        unk_func_0012B150_0 *temp9 = func_001DCF80(temp4);
        unk_func_0012B150_0 *temp10 = func_001DCF70(temp4);
        unk_func_0012B150_0 *temp11 = func_00155EE0(arg1->unk_24);

        temp0.unk_00 = temp9->unk_00 + temp11->unk_00;
        temp0.unk_04 = temp9->unk_04 + temp11->unk_04;
        temp0.unk_08 = temp9->unk_08 + temp11->unk_08;
        temp1.unk_00 = temp10->unk_00 + temp11->unk_00;
        temp1.unk_04 = temp10->unk_04 + temp11->unk_04;
        temp1.unk_08 = temp10->unk_08 + temp11->unk_08;
        func_00155C70(temp3);
    }
    if (!temp8 && temp5) {
        func_0012B150_0(&temp2)[0] = func_001DCF10(temp5)->unk_00[0];
        func_0012B150_0(&temp2)[1] = func_001DCF10(temp5)->unk_00[1];
        func_0012B150_0(&temp2)[2] = func_001DCF10(temp5)->unk_00[2];
        temp6 = func_001DCF00(temp5);
    }
    if ((!temp5 && !temp4) ||
        (!temp8 && func_00195F80(arg0, &temp2, arg1->unk_24, 0, temp6)) ||
        (temp8 && func_00192910(arg0, &temp0, &temp1, 0))) {
        if ((temp7 & 0x250) && *arg4 < arg5) {
            arg2[*arg4] = arg1;
            if (temp7 == 0x200) {
                arg3[*arg4] = arg1->unk_04;
            } else if (temp7 == 0x10) {
                func_001687E0(func_00133AB0(arg1->unk_04), 0, &D_0035F854, &D_0035F850);
                arg3[*arg4] = D_0035F850;
            } else if (temp7 == 0x40) {
                func_001687E0(func_00133AB0(func_0015CA30(arg1->unk_04)), 0, &D_0035F854, &D_0035F850);
                arg3[*arg4] = D_0035F850;
            }
            (*arg4)++;
        }
        for (arg1 = arg1->unk_08; arg1; arg1 = arg1->unk_14) {
            func_0012B150(arg0, arg1, arg2, arg3, arg4, arg5);
        }
    }
}
