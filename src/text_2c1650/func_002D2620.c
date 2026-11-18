#include "common.h"

typedef struct unk_func_002D2620_0 {
    char *unk_00;
    char *unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
} unk_func_002D2620_0;

typedef struct unk_func_002D2620_1 {
    s32 unk_00;
    s32 unk_04;
} unk_func_002D2620_1;

extern char D_0035AF20[];
extern char D_0035AF30[];
extern char D_0035AF38[];
extern char D_0035AF40[];
extern char D_0035AF48[];
extern char D_0035AF58[];
extern char D_0035AF60[];

void func_003048C0();
void func_00308600();
char *strcpy(char *, const char *);
void func_0011CED8();
char *func_001DA090();
s32 func_001DA0C0();
void func_00307A80();
void func_0030AC30();
void func_00305830();
void func_00307430();
void func_00305F20();
void func_0030F030();
s32 func_002F2360();
void func_002F22A0();
s32 func_002D6290();
void func_002D6430();
u32 func_0030C370();
void func_0011CBB0();
void func_003083F0();
void mfn_bInitActorResData__18CLinkTypeActorContFv();

s32 func_002D2620(void) {
    unk_func_002D2620_0 s;
    char a[256];
    char b[256];
    char c[256];
    unk_func_002D2620_1 d;
    u32 mid;
    u32 hi;

    func_003048C0();
    func_00308600();
    strcpy(a, D_0035AF20);
    func_0011CED8(a, D_0035AF30);
    func_0011CED8(a, D_0035AF38);
    strcpy(a, func_001DA090(func_001DA0C0(a)));
    func_00307A80(a, 0xA, 0x2A, 0x3C, 1);
    strcpy(a, D_0035AF20);
    func_0011CED8(a, D_0035AF40);
    func_0011CED8(a, D_0035AF38);
    strcpy(a, func_001DA090(func_001DA0C0(a)));
    func_0030AC30(a, 0x3B, 0x13);
    strcpy(a, D_0035AF20);
    func_0011CED8(a, D_0035AF48);
    strcpy(a, func_001DA090(func_001DA0C0(a)));
    s.unk_00 = a;
    strcpy(b, D_0035AF20);
    func_0011CED8(b, D_0035AF58);
    func_0011CED8(b, D_0035AF38);
    strcpy(b, func_001DA090(func_001DA0C0(b)));
    s.unk_04 = b;
    s.unk_08 = 0x2C;
    s.unk_0C = 2;
    s.unk_10 = 0xB;
    s.unk_1C = 0x14;
    s.unk_14 = 0x100;
    s.unk_18 = 0x100;
    s.unk_20 = 0;
    s.unk_20 |= 2;
    func_00305830(&s);
    func_00307430(0x3C, 0x1000, 2, 1, 6);
    func_00305F20(0x3E, 0x3F);
    func_0030F030(6, 1);
    func_002F22A0(func_002F2360());
    d.unk_04 = 0x400000;
    d.unk_00 = 0x80000;
    func_002D6430(func_002D6290(), &d);
    hi = (func_0030C370() & 0xFF000000) >> 24;
    mid = (func_0030C370() & 0xFF0000) >> 16;
    func_0011CBB0(c, D_0035AF60, hi, mid, func_0030C370() & 0xFFFF);
    func_003083F0(c);
    mfn_bInitActorResData__18CLinkTypeActorContFv(func_002D6290());
    return 3;
}
