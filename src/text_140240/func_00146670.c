#include "common.h"

typedef struct unk_func_00146670_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00146670_0;

typedef struct unk_func_00146670_1 {
    u8 pad_00[4];
    unk_func_00146670_0 unk_04;
    unk_func_00146670_0 unk_10;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
} unk_func_00146670_1;

typedef struct unk_func_00146670_2 {
    u8 pad_00[0xC];
    u32 unk_0C;
} unk_func_00146670_2;

typedef struct unk_func_00146670_3 {
    u8 pad_00[4];
    u32 unk_04;
    u8 pad_08[0x78];
    s32 unk_80;
    unk_func_00146670_0 unk_84;
    unk_func_00146670_0 unk_90;
    s32 unk_9C;
    s32 unk_A0;
    s32 unk_A4;
} unk_func_00146670_3;

unk_func_00146670_3 *func_00138760();
s32 func_00149900();
unk_func_00146670_2 *func_001B8580();

void func_00146670(s32 arg0, unk_func_00146670_1 *arg1) {
    unk_func_00146670_2 *obj;
    unk_func_00146670_3 *p;
    unk_func_00146670_0 v;
    s32 *src;

    if (arg1->unk_24 != 0) {
        obj = func_001B8580(func_00149900(arg1->unk_24));
        if (obj != NULL && ((obj->unk_0C & 0x4000) ? 1 : 0)) {
            func_00138760(obj)->unk_04 |= 0x80;
            p = func_00138760(obj);
            p->unk_80 = 0;
            src = (s32 *)&v;
            v.unk_00 = -arg1->unk_04.unk_00;
            v.unk_04 = -arg1->unk_04.unk_04;
            v.unk_08 = -arg1->unk_04.unk_08;
            ((s32 *)&p->unk_84)[0] = src[0];
            ((s32 *)&p->unk_84)[1] = src[1];
            ((s32 *)&p->unk_84)[2] = src[2];
            ((s32 *)&p->unk_90)[0] = ((s32 *)&arg1->unk_10)[0];
            ((s32 *)&p->unk_90)[1] = ((s32 *)&arg1->unk_10)[1];
            ((s32 *)&p->unk_90)[2] = ((s32 *)&arg1->unk_10)[2];
            p->unk_A4 = arg0;
            p->unk_A0 = arg1->unk_1C;
            p->unk_9C = arg1->unk_20;
        }
    }
}
