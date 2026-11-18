#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 *unk_10;
} unk_func_00166EE0_0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_00166EE0_1;

void func_00193980(unk_func_00166EE0_0 *, s16 *, s32, s32, s32);
void func_00194120(unk_func_00166EE0_0 **, s32, s32);
void func_00196040(unk_func_00166EE0_0 *, s16, s32, unk_func_00166EE0_1 *);
void func_001960A0(unk_func_00166EE0_0 *, s16, s32, s32, s32, s32);
void func_00196160(unk_func_00166EE0_0 *, s16, s32, s16, s16, s16);
extern unk_func_00166EE0_0 *D_0035FAE8;
extern s32 D_0035FAEC;

void func_00166EE0(void) {
    unk_func_00166EE0_1 sp90;
    s16 sp9E;
    s16 j;
    s32 k;
    s16 i;
    s32 base;
    s32 a;
    s32 c;
    s32 b;

    sp9E = 0;
    func_00194120(&D_0035FAE8, 0x1E, 1);
    func_00193980(D_0035FAE8, &sp9E, 0x28, 1, 1);
    D_0035FAEC = D_0035FAE8->unk_10[sp9E];
    sp90.unk_04 = 0;
    sp90.unk_00 = 0;
    func_00196040(D_0035FAE8, sp9E, 0, &sp90);
    k = 0;
    for (j = 0, base = 0; j < 4; j++) {
        for (i = 0; i < 5; i++) {
            func_001960A0(D_0035FAE8, sp9E, k, 0, 0, 0);
            a = i + base;
            func_00196160(D_0035FAE8, sp9E, k, a, a + 1, c = (b = i + (j + 1) * 6) + 1);
            func_001960A0(D_0035FAE8, sp9E, k + 1, 0, 0, 0);
            func_00196160(D_0035FAE8, sp9E, k + 1, a, b, c);
            k = (s16)(k + 2);
        }
        base += 6;
    }
}
