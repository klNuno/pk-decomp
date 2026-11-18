#include "common.h"

typedef struct unk_func_0012C0B0_0 {
    u8 pad_00[8];
    struct unk_func_0012C0B0_0 *unk_08;
    u8 pad_0C[8];
    struct unk_func_0012C0B0_0 *unk_14;
    u8 pad_18[0xC];
    s32 unk_24;
    u8 pad_28[4];
    s32 unk_2C;
    u32 unk_30;
    s32 unk_34;
    u8 pad_38[0x14];
    s32 unk_4C;
} unk_func_0012C0B0_0;

void func_0012C4B0(void);
void func_0012D550(unk_func_0012C0B0_0 *);
void func_0012D980(unk_func_0012C0B0_0 *);
void func_0012E390(s32, unk_func_0012C0B0_0 *, s32);
f32 *func_00155EE0(s32);
s32 func_00155FE0(s32);
void func_0016FF30(s32, s32, f32);
s32 func_00192910(s32, f32 *, f32 *, s32);
f32 *func_001DCF70(s32);
f32 *func_001DCF80(s32);
extern u8 D_0035F83C;

void func_0012C0B0(s32 arg0, unk_func_0012C0B0_0 *arg1, s32 arg2, s32 arg3)
{
    unk_func_0012C0B0_0 *p;
    f32 *a, *b;
    s32 n;
    f32 sp90[3], spA0[3];

    arg2 &= arg1->unk_2C;
    func_0012D980(arg1);
    if (arg1->unk_30 & 0x80000) {
        func_0016FF30(1, arg1->unk_4C, 0.5f);
    }
    if (arg3 || D_0035F83C) {
        if (((((arg2 & 0x800000) && (arg2 & 0x2000000)) ||
             ((arg2 & 0x1000000) && !(arg2 & 0x2000000))) &&
            !(u8)(arg1->unk_30 & 2)) || D_0035F83C) {
            func_0012E390(arg0, arg1, arg2);
        }
    }
    func_0012D550(arg1);

    for (p = arg1->unk_08; p != NULL; p = p->unk_14) {
        s32 temp = p->unk_34;
        if (temp) {
            a = func_001DCF80(temp);
            b = func_001DCF70(temp);
            n = p->unk_24;
            if (!func_00155FE0(n)) {
                sp90[0] = a[0] + func_00155EE0(n)[0];
                sp90[1] = a[1] + func_00155EE0(n)[1];
                sp90[2] = a[2] + func_00155EE0(n)[2];
                spA0[0] = b[0] + func_00155EE0(n)[0];
                spA0[1] = b[1] + func_00155EE0(n)[1];
                spA0[2] = b[2] + func_00155EE0(n)[2];
                a = sp90;
                b = spA0;
            }
            temp = func_00192910(arg0, a, b, arg3);
        } else {
            temp = 0x40;
        }
        if (temp || (u8)((p->unk_30 & 0x800) >> 10) || D_0035F83C) {
            func_0012C0B0(arg0, p, arg2, temp);
        }
    }
    if (arg1->unk_30 & 0x80000) {
        func_0016FF30(0, arg1->unk_4C, 0.5f);
    }
    func_0012C4B0();
}
