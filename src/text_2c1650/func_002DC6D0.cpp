/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_002DC6D0_0;

class unk_func_002DC6D0_1 {
public:
    virtual unk_func_002DC6D0_0 *unk_vf08(s32);
};

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[4];
    u8 *unk_18;
    s32 unk_1C;
    u8 *unk_20;
    u8 *unk_24;
    u8 pad_28[0x14];
    u8 *unk_3C;
    u8 pad_40[0xC];
    unk_func_002DC6D0_1 *unk_4C;
    unk_func_002DC6D0_1 *unk_50;
} unk_func_002DC6D0_2;

extern "C" {
void c4sdk_malloc(s32 *, s32);
void func_002CDB60(s32 *, char *, s32 *);
void func_002DCF60(unk_func_002DC6D0_2 *, s32 *);
void func_002DD020(unk_func_002DC6D0_2 *, s32 *);
f32 func_002CD650(unk_func_002DC6D0_0 *);
s32 func_002FEDC0(s32);
s32 func_003019F0(s32);
extern char D_0035B740[];
extern char D_0035B770[];
extern char D_0035B790[];
extern char D_0035B7B0[];

void func_002DC6D0(unk_func_002DC6D0_2 *arg0, f32 *arg1)
{
    s32 sp50, sp54, sp58, sp5C;
    s32 sp60, sp64, sp68, sp6C;
    s32 pos = arg0->unk_10;
    s32 off;
    bool err;

    if (pos & 3) {
        arg0->unk_10 = pos + (4 - (pos & 3));
    }
    switch (*(s32 *)(arg0->unk_24 + arg0->unk_10)) {
    case 2:
        *arg1 = *(f32 *)(arg0->unk_24 + (arg0->unk_10 + 4));
        arg0->unk_10 += 8;
        break;
    case 0xE:
    case 0xD:
        *arg1 = *(f32 *)(arg0->unk_18 + (arg0->unk_0C - *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4))));
        arg0->unk_10 += 8;
        break;
    case 8:
    case 7:
        *arg1 = *(f32 *)(arg0->unk_20 + *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4)));
        arg0->unk_10 += 8;
        break;
    case 0x10:
        *arg1 = *(f32 *)(arg0->unk_3C + *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4)));
        arg0->unk_10 += 8;
        break;
    case 0x12:
    case 0xF:
        off = *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4));
        switch (*(arg0->unk_3C + off)) {
        case 1:
            err = false;
            *arg1 = **(f32 **)(arg0->unk_3C + (off + 4));
            break;
        case 2: {
            unk_func_002DC6D0_0 *p = *(unk_func_002DC6D0_0 **)(arg0->unk_3C + (off + 4));
            err = false;
            if (p != NULL) {
                if (func_003019F0(p->unk_04) == 0) {
                    if (func_002FEDC0(p->unk_04) == 1) {
                        *arg1 = func_002CD650(p);
                    } else {
                        err = true;
                    }
                } else {
                    err = true;
                }
            } else {
                err = true;
            }
            break;
        }
        default:
            err = true;
            break;
        }
        if (err) {
            func_002CDB60(&sp50, D_0035B740, &sp60);
            func_002DCF60(arg0, &sp50);
            *arg1 = 0.0f;
            c4sdk_malloc(&sp50, 0);
        }
        arg0->unk_10 += 8;
        break;
    case 0xA:
    case 9: {
        unk_func_002DC6D0_1 *p = arg0->unk_4C;
        off = *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4));
        err = false;
        arg0->unk_10 += 8;
        if (p != NULL) {
            unk_func_002DC6D0_0 *q = p->unk_vf08(arg0->unk_1C + off);
            if (q != NULL) {
                if (func_003019F0(q->unk_04) == 0) {
                    if (func_002FEDC0(q->unk_04) == 1) {
                        *arg1 = func_002CD650(q);
                    } else {
                        err = true;
                    }
                } else {
                    err = true;
                }
            } else {
                err = true;
            }
        } else {
            err = true;
        }
        if (err) {
            func_002CDB60(&sp54, D_0035B770, &sp64);
            func_002DCF60(arg0, &sp54);
            *arg1 = 0.0f;
            c4sdk_malloc(&sp54, 0);
        }
        break;
    }
    case 0xC:
    case 0xB: {
        unk_func_002DC6D0_1 *p = arg0->unk_50;
        off = *(s32 *)(arg0->unk_24 + (arg0->unk_10 + 4));
        err = false;
        arg0->unk_10 += 8;
        if (p != NULL) {
            unk_func_002DC6D0_0 *q = p->unk_vf08(arg0->unk_1C + off);
            if (q != NULL) {
                if (func_003019F0(q->unk_04) == 0) {
                    if (func_002FEDC0(q->unk_04) == 1) {
                        *arg1 = func_002CD650(q);
                    } else {
                        err = true;
                    }
                } else {
                    err = true;
                }
            } else {
                err = true;
            }
        } else {
            err = true;
        }
        if (err) {
            func_002CDB60(&sp58, D_0035B790, &sp68);
            func_002DCF60(arg0, &sp58);
            *arg1 = 0.0f;
            c4sdk_malloc(&sp58, 0);
        }
        break;
    }
    default:
        func_002CDB60(&sp5C, D_0035B7B0, &sp6C);
        func_002DD020(arg0, &sp5C);
        arg0->unk_10 += 8;
        *arg1 = 0.0f;
        c4sdk_malloc(&sp5C, 0);
        break;
    }
}
}
