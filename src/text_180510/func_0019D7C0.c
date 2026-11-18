/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_0019D7C0_0 {
    u64 unk_00;
    u64 unk_08;
} unk_func_0019D7C0_0;

typedef struct unk_func_0019D7C0_1 {
    u64 unk_00;
    u64 unk_08;
} __attribute__((aligned(16))) unk_func_0019D7C0_1;

typedef struct unk_func_0019D7C0_2 {
    u8 pad_00[0x78];
    s32 unk_78[16];
} unk_func_0019D7C0_2;

extern s32 D_005AB7F8[];
extern s16 D_005AB7FC[];
extern s32 D_0035FF08;
extern u32 D_0035FF10;
extern unk_func_0019D7C0_1 D_005AB530;
extern unk_func_0019D7C0_0 D_005AB858 __attribute__((aligned(8)));
extern u32 D_005AB878[];
extern u32 D_005AB804[];
extern u32 D_005AB800[];
extern s32 D_005AB848[];
extern unk_func_0019D7C0_2 D_005AB790;

void func_0012A1B0(s16, unk_func_0019D7C0_0 *);
void func_0019D670(unk_func_0019D7C0_0 *);
s32 func_0019D250(void);

void func_0019D7C0(void) {
    unk_func_0019D7C0_0 sp30;
    u32 i;
    u32 delta;

    D_005AB7F8[0]++;
    func_0012A1B0(D_005AB7FC[0], &sp30);
    if (D_0035FF08 != 0) {
        func_0019D670(&sp30);
    } else {
        D_005AB530 = *(unk_func_0019D7C0_1 *)&sp30;
    }
    if (sp30.unk_08 == D_005AB858.unk_08) {
        delta = sp30.unk_00 - D_005AB858.unk_00;
    } else if (sp30.unk_00 >= D_005AB858.unk_00) {
        delta = sp30.unk_00 - D_005AB858.unk_00;
    } else {
        delta = sp30.unk_00 + -D_005AB858.unk_00;
    }
    delta += D_0035FF10;
    D_005AB804[0] = delta / D_005AB878[0];
    D_0035FF10 = delta % D_005AB878[0];
    D_005AB858 = sp30;
    D_005AB800[0] += D_005AB804[0];
    D_005AB848[0] = func_0019D250();
    for (i = 2; i < 16; i++) {
        if (D_005AB790.unk_78[i] == i - 1) {
            D_005AB790.unk_78[i] = 0;
        } else {
            D_005AB790.unk_78[i]++;
        }
    }
}
