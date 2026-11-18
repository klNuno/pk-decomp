/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_002A4940_0 {
    f32 unk_00[4];
} unk_func_002A4940_0;

typedef struct unk_func_002A4940_1 {
    void *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
} unk_func_002A4940_1;

typedef struct unk_func_002A4940_2 {
    void *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
    f32 unk_10;
} unk_func_002A4940_2;

typedef struct unk_func_002A4940_3 {
    s32 unk_00;
    s32 unk_04;
    unk_func_002A4940_0 unk_08;
} unk_func_002A4940_3;

typedef struct unk_func_002A4940_4 {
    void *unk_00;
    u8 pad_04[4];
    unk_func_002A4940_3 unk_08;
} unk_func_002A4940_4;

void *func_0029DA50(s32);
void memcpy();
void func_002A4B00();
void func_002A4C00();
void func_002A4CA0();

static inline void func_002A4940_v(s32 arg0, s32 arg1, unk_func_002A4940_0 *v) {
    unk_func_002A4940_2 *b;
    unk_func_002A4940_4 *c;
    unk_func_002A4940_3 *d;

    switch (arg1) {
    case 0x1200:
    case 0x1201:
    case 0x1202:
    case 0x1203:
    case 0x1204:
        c = func_0029DA50(0x18);
        d = &c->unk_08;
        d->unk_00 = arg0;
        d->unk_04 = arg1;
        memcpy(&d->unk_08, v, 0x10);
        c->unk_00 = (void *)func_002A4C00;
        return;
    default:
        b = func_0029DA50(0xC);
        b->unk_08 = arg0;
        b->unk_0C = arg1;
        b->unk_10 = v->unk_00[0];
        b->unk_00 = (void *)func_002A4CA0;
        break;
    }
}

static inline void func_002A4940_i(s32 arg0, s32 arg1, s32 v) {
    unk_func_002A4940_1 *a;

    a = func_0029DA50(0xC);
    a->unk_08 = arg0;
    a->unk_0C = arg1;
    a->unk_10 = v;
    a->unk_00 = (void *)func_002A4B00;
}

void func_002A4940(s32 arg0, s32 arg1, s32 *arg2) {
    unk_func_002A4940_0 v;

    switch (arg1) {
    case 0x1200:
    case 0x1201:
    case 0x1202:
    case 0x1203:
    case 0x1204:
        v.unk_00[0] = arg2[0];
        v.unk_00[1] = arg2[1];
        v.unk_00[2] = arg2[2];
        v.unk_00[3] = arg2[3];
        func_002A4940_v(arg0, arg1, &v);
        return;
    }
    func_002A4940_i(arg0, arg1, arg2[0]);
}
