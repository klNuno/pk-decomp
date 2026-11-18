/* profile: opt */
#include "common.h"

typedef struct { f32 unk_00, unk_04, unk_08; } unk_func_0012CC10_0;
typedef struct { u32 unk_00, unk_04, unk_08; } unk_func_0012CC10_6;
typedef struct {
    u32 unk_00;
    u8 pad_04[0x20];
    void *unk_24;
} unk_func_0012CC10_1;
typedef struct {
    u8 pad_00[8];
    s16 unk_08;
    u8 pad_0A[2];
} unk_func_0012CC10_2;
typedef struct {
    u8 pad_00[8];
    unk_func_0012CC10_0 *unk_08;
    s16 *unk_0C;
    unk_func_0012CC10_2 ***unk_10;
} unk_func_0012CC10_3;
typedef struct {
    unk_func_0012CC10_0 unk_00;
    u8 pad_0C[4];
    s16 unk_10, unk_12;
} unk_func_0012CC10_4;
typedef struct {
    unk_func_0012CC10_1 *unk_00;
    u8 pad_04[4];
    unk_func_0012CC10_3 *unk_08;
    u8 pad_0C[8];
    unk_func_0012CC10_4 unk_14;
    u8 pad_28[0xF0];
} unk_func_0012CC10_5;

void func_0012C4B0(void);
void func_0012C500(void);
s32 func_0012CEC0(void *, void *, void *, unk_func_0012CC10_5 *, s16 *);
void func_00155810(unk_func_0012CC10_0 *, void *, void *);
void func_001559E0(unk_func_0012CC10_0 *, void *, unk_func_0012CC10_0 *);
s32 func_00161FF0(void *);
void func_001DBCD0(unk_func_0012CC10_3 *, s16, void **);
void func_001DCF90(unk_func_0012CC10_3 *, s16, s16, void *);
f32 func_001E60E0(f32);

static inline void func_0012CC10_0(unk_func_0012CC10_0 *p) {
    f32 y = p->unk_04;
    f32 x = p->unk_00;
    f32 z = p->unk_08;
    f32 yy = y * y;
    f32 xx = x * x;
    f32 len = func_001E60E0(xx + yy + z * z);
    if (0.0f != len) {
        f32 inv = 1.0f / len;
        p->unk_00 = inv * p->unk_00;
        p->unk_04 = inv * p->unk_04;
        p->unk_08 = inv * p->unk_08;
    }
}

s32 func_0012CC10(void *arg0, void *arg1, void *arg2, unk_func_0012CC10_0 *arg3, unk_func_0012CC10_0 *arg4, unk_func_0012CC10_1 **arg5, s32 *arg6) {
    unk_func_0012CC10_5 sp80;
    unk_func_0012CC10_0 sp198;
    unk_func_0012CC10_0 sp1A8;
    void *sp1B8;
    s16 sp1BE = 0;
    s16 ret;
    unk_func_0012CC10_3 *temp;
    unk_func_0012CC10_4 *temp2;

    func_0012C500();
    ret = (s16)func_0012CEC0(arg0, arg1, arg2, &sp80, &sp1BE);
    func_0012C4B0();
    if (ret > 0) {
        temp = sp80.unk_08;
        temp2 = &sp80.unk_14;
        if (sp80.unk_00->unk_00 & 0x67A) {
            *arg5 = sp80.unk_00;
        } else {
            *arg5 = NULL;
        }
        ((unk_func_0012CC10_6 *)arg3)->unk_00 = ((unk_func_0012CC10_6 *)&temp2->unk_00)->unk_00;
        ((unk_func_0012CC10_6 *)arg3)->unk_04 = ((unk_func_0012CC10_6 *)&temp2->unk_00)->unk_04;
        ((unk_func_0012CC10_6 *)arg3)->unk_08 = ((unk_func_0012CC10_6 *)&temp2->unk_00)->unk_08;
        if (arg5 != NULL && temp->unk_0C[temp2->unk_10] == 7) {
            func_001559E0(&sp1A8, (*arg5)->unk_24, &temp->unk_08[temp->unk_10[temp2->unk_10][0][temp2->unk_12].unk_08]);
            arg4->unk_00 = arg3->unk_00 - sp1A8.unk_00;
            arg4->unk_04 = arg3->unk_04 - sp1A8.unk_04;
            arg4->unk_08 = arg3->unk_08 - sp1A8.unk_08;
            func_0012CC10_0(arg4);
        } else {
            func_001DCF90(temp, temp2->unk_10, temp2->unk_12, &sp198);
            func_00155810(arg4, (*arg5)->unk_24, &sp198);
            func_0012CC10_0(arg4);
        }
        if (arg6 != NULL) {
            sp1B8 = NULL;
            func_001DBCD0(temp, temp2->unk_10, &sp1B8);
            if (sp1B8 != NULL) {
                *arg6 = func_00161FF0(sp1B8);
            }
        }
        return 1;
    }
    return 0;
}
