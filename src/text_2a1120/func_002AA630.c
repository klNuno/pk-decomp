#include "common.h"

typedef struct {
    void *unk_00;
    u8 pad_04[0x14];
    u8 unk_18;
    u8 pad_19[3];
    s32 unk_1C;
    s32 unk_20;
} unk_func_002AA630_0;

typedef struct {
    u64 unk_00_0 : 47;
    u64 unk_00 : 11;
    u64 unk_00_1 : 6;
    u64 unk_08;
} __attribute__((aligned(16))) unk_func_002AA630_1;

unk_func_002AA630_0 *func_0029DA50();
void func_0029D1D0();
void memcpy();
s32 func_002AA7C0();
void func_0029D730();
void func_002AAB30();
extern u8 D_007B8488[];
extern s32 D_00360428;
extern s32 D_007B8054[];
extern s32 D_007B2444[];
extern s32 D_007B24E8[];
extern u8 D_007B8608[];
extern u8 D_007B85F0[];
extern s32 D_007B805C[];
extern s32 D_007B8EC4[];
extern s32 D_007B8058[];
extern unk_func_002AA630_1 *D_007B8F8C[];
extern unk_func_002AA630_1 D_007B07D0;
extern s32 D_007B8604[];
extern u8 D_007B8EC0[];

void func_002AA630(s32 arg0) {
    unk_func_002AA630_0 *p;
    s32 s;

    p = func_0029DA50(0x20);
    s = (s32)p + 8;
    D_00360428 = s;
    p->unk_18 = D_007B8488[0];
    p->unk_1C = arg0;
    p->unk_00 = func_002AAB30;
    D_007B8054[0] = 0;
    p->unk_20 = 0;
    if (D_007B2444[0] & 2) {
        func_0029D1D0(D_007B8608, 0);
    } else {
        memcpy(s, D_007B85F0, 0x10);
    }
    D_007B805C[0] = s + 0x18;
    D_007B8EC4[0] = (arg0 == 7) ? 0x28 : 0x3C;
    if ((D_007B24E8[0] & 8) && (arg0 == 5 || arg0 == 6 || arg0 == 9)) {
        D_007B8EC4[0] = 0x16;
    }
    D_007B8058[0] = s;
    D_007B07D0 = *D_007B8F8C[0];
    D_007B8F8C[0]->unk_00 = func_002AA7C0(arg0);
    func_0029D730();
    D_007B8604[0] = 0;
    D_007B8EC0[0] = 1;
}
