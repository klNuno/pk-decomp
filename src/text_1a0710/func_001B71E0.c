/* profile: o0_301_p */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
} unk_func_001B71E0_0;

typedef struct {
    s32 unk_00;
    u8 pad_04[0x10];
    unk_func_001B71E0_0 *unk_14;
} unk_func_001B71E0_1;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_001B71E0_2;

unk_func_001B71E0_2 *func_00199130();
s32 func_001B0A00();
void Erm_fn_v_UpdateLastError(s32, u8, s32, s32, s32, s32, s32, s32, char *, s32);
void Erm_fn_ClearLastError(s32, char *, s32);
extern char D_0034B678[];
extern u8 D_0035F528;

void func_001B71E0(unk_func_001B71E0_1 *arg0) {
    unk_func_001B71E0_0 *p;
    s32 b;
    s32 r0;
    s32 r1;
    s32 r2;
    s32 r3;
    unk_func_001B71E0_2 *q;

    if (arg0->unk_14 != NULL) {
        r0 = 0;
        r1 = 0;
        r2 = 0;
        r3 = 0;
        p = arg0->unk_14;
        q = func_00199130(arg0->unk_00);
        b = q->unk_14;
        if (p->unk_10) {
            r0 = func_001B0A00(p->unk_10, b);
        }
        if (p->unk_14) {
            r1 = func_001B0A00(p->unk_14, b);
        }
        if (p->unk_18) {
            r2 = func_001B0A00(p->unk_18, b);
        }
        if (p->unk_1C) {
            r3 = func_001B0A00(p->unk_1C, b);
        }
        if (r1 || r0 || r2 || r3) {
            Erm_fn_v_UpdateLastError(0x30, D_0035F528, 0, 0x40, -1, 0xFF, 0xFF, 0, D_0034B678, 0x312);
            Erm_fn_ClearLastError(0, D_0034B678, 0x313);
        }
    }
}
