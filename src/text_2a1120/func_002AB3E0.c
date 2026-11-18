#include "common.h"

typedef struct {
    u64 unk_00;
    u64 unk_08;
} unk_func_002AB3E0_0;

typedef struct {
    u8 unk_00;
    u8 unk_01_0 : 5;
    u8 unk_01_5 : 1;
    u8 unk_01_6 : 2;
} unk_func_002AB3E0_1;

void func_002AB4A0(s32, u64 *, u64 *);
void func_002BFD60();
void func_002C1650(s32, unk_func_002AB3E0_0 *);
extern s32 D_007B0778[];
extern u64 D_007B0908[];
extern unk_func_002AB3E0_1 D_007B09D2[];

void func_002AB3E0(s32 arg0) {
    unk_func_002AB3E0_0 sp20;
    u64 a;
    u64 b;

    sp20.unk_00 = 0;
    sp20.unk_08 = 0;
    func_002AB4A0(arg0, &a, &b);
    sp20.unk_00 = (u64)(a << 5) | ((u64)(D_007B0778[0] >> 6) << 14) | ((u64)b << 20) | ((u64)10 << 26) | ((u64)9 << 30) | ((u64)1 << 34) | ((u64)0 << 35) | ((u64)0 << 37) | ((u64)0 << 51) | ((u64)0 << 55) | ((u64)0 << 56) | ((u64)0 << 61);
    *(u8 *)&sp20.unk_08 = 6;
    func_002C1650(0xE, &sp20);
    func_002BFD60();
    D_007B0908[0] = 1;
    D_007B09D2[0].unk_01_5 = 1;
}
