#include "common.h"

struct unk_func_0013C840_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;

    f32 &unk_inline0() { return unk_00; }
    f32 &unk_inline1() { return unk_04; }
    f32 &unk_inline2() { return unk_08; }
};

typedef struct unk_func_0013C840_1 {
    u8 pad_00[0x2E];
    s16 unk_2E;
    u8 pad_30[0x38];
} unk_func_0013C840_1;

typedef struct unk_func_0013C840_2 {
    u8 pad_00[0x60];
} __attribute__((aligned(16))) unk_func_0013C840_2;

extern "C" {
f32 func_00115200(f32);
void func_00144580(unk_func_0013C840_0 *, u8 *, s32, unk_func_0013C840_1 *, s32);
void func_00146090(u8 *, s32, s32, unk_func_0013C840_1 *, s32);
s32 func_00146770(s32 *, unk_func_0013C840_1 *, u8 *, s32, void *, void *, s32);
void func_0014ADD0(u8 *, f32);
void func_0014FDE0(void *, unk_func_0013C840_0 *);
void func_00150060(void *, unk_func_0013C840_0 *, unk_func_0013C840_0 *, unk_func_0013C840_0 *);
void func_00152040(void *, s32, unk_func_0013C840_0 *, unk_func_0013C840_0 *, unk_func_0013C840_0 *, unk_func_0013C840_0 *);
void func_00155D20(void *, unk_func_0013C840_0 *, unk_func_0013C840_0 *);
void func_00155DA0(void *, unk_func_0013C840_0 *, unk_func_0013C840_0 *);
unk_func_0013C840_0 *func_00155EE0(void *);
void func_00155FA0(void *, void *);
void func_001565B0(void *, void *);
f32 func_001E60E0(f32);
extern unk_func_0013C840_1 *D_0035F3C4;
}

static inline s32 unk_inline_1(unk_func_0013C840_1 *arg0)
{
    return arg0->unk_2E != 0x63;
}

static inline void unk_inline_0(unk_func_0013C840_0 &arg0, unk_func_0013C840_0 &arg1, f32 arg2)
{
    arg0.unk_inline0() = arg2 * arg1.unk_inline0();
    arg0.unk_inline1() = arg2 * arg1.unk_inline1();
    arg0.unk_inline2() = arg2 * arg1.unk_inline2();
}

extern "C" void func_0013C840(u8 *arg0, s32 arg1, f32 arg2)
{
    u8 *temp;
    unk_func_0013C840_0 *temp2;
    unk_func_0013C840_0 *temp3;
    unk_func_0013C840_0 *temp4;
    unk_func_0013C840_2 temp11;
    unk_func_0013C840_2 temp10;
    unk_func_0013C840_0 temp9 __attribute__((aligned(16)));
    unk_func_0013C840_0 temp8 __attribute__((aligned(16)));
    unk_func_0013C840_0 temp7 __attribute__((aligned(16)));
    unk_func_0013C840_0 temp6 __attribute__((aligned(16)));
    s32 temp5;
    unk_func_0013C840_2 *temp18 = &temp11;
    unk_func_0013C840_2 *temp19 = &temp10;
    f32 temp12;
    f32 temp13;
    f32 temp14;
    f32 temp15;

    temp = arg0 + 0xE0;
    func_00155FA0(temp18, temp);
    func_00155FA0(temp19, temp);
    temp2 = func_00155EE0(temp);
    temp3 = func_00155EE0(arg0 + 0x80);
    temp12 = temp2->unk_00 - temp3->unk_00;
    temp13 = temp2->unk_04 - temp3->unk_04;
    temp14 = temp2->unk_08 - temp3->unk_08;
    func_0014FDE0(temp, &temp6);
    temp15 = func_001E60E0(temp12 * temp12 + temp13 * temp13 + temp14 * temp14);
    f32 temp20 = func_00115200(1.04719758f);
    temp15 = temp20 * temp15;
    if (temp15 < 0.5f) {
        temp15 = 0.5f;
    }
    unk_inline_0(temp9, temp6, temp15);
    func_00155DA0(temp18, temp2, &temp9);
    temp4 = func_00155EE0(temp19);
    unk_inline_0(temp9, temp6, temp15);
    func_00155D20(temp19, temp2, &temp9);
    if (func_00146770(&temp5, D_0035F3C4, arg0, arg1, temp18, temp19, 1)) {
        s32 i;
        unk_func_0013C840_1 *temp16;

        func_00144580(&temp9, arg0, temp5, D_0035F3C4, temp5);
        func_00155DA0(temp, temp4, &temp9);
        temp16 = 0;
        for (i = 0; i < temp5 && temp16 == 0; i++) {
            unk_func_0013C840_1 *temp17 = &D_0035F3C4[i];

            if (unk_inline_1(temp17)) {
                temp16 = temp17;
            }
        }
        func_00150060(temp, &temp8, &temp7, &temp6);
        func_00152040(temp, 5, &temp8, &temp7, &temp6, func_00155EE0(temp));
        func_001565B0(temp, arg0 + 0x48);
        func_00146090(arg0, arg1, temp5, D_0035F3C4, temp5 - 1);
        func_0014ADD0(arg0, arg2);
        return;
    }
    func_0014ADD0(arg0, arg2);
}
