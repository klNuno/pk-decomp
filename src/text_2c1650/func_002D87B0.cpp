#include "common.h"

typedef struct unk_func_002D87B0_0 {
    u8 pad_00[4];
    struct unk_func_002D87B0_0 *unk_04;
    s32 unk_08;
} unk_func_002D87B0_0;

typedef struct unk_func_002D87B0_1 {
    unk_func_002D87B0_0 *unk_00[1];
} unk_func_002D87B0_1;

extern "C" {
void func_002CF5C0(...);
unk_func_002D87B0_0 *func_002CF630(...);
void func_002CFE20(...);
void func_002D2BB0(...);
void func_002D4AB0(...);
void func_002D86B0(...);
void func_002D86C0(...);
void func_002D9C80(...);
extern u8 D_0035E508[];

u8 *func_002D87B0(u8 *arg0, s16 arg1);
}

inline void func_002D87B0_next(unk_func_002D87B0_1 *it) {
    it->unk_00[0] = it->unk_00[0]->unk_04;
}

u8 *func_002D87B0(u8 *arg0, s16 arg1) {
    unk_func_002D87B0_1 sp40;
    unk_func_002D87B0_1 sp44;
    unk_func_002D87B0_1 sp48;
    unk_func_002D87B0_0 *sp4C;
    unk_func_002D87B0_0 *sp50;
    u8 sp54[4];
    u8 sp58[4];
    u8 sp5C[4];
    u8 *q;

    if (arg0 != NULL) {
        *(u8 **)(arg0 + 8) = D_0035E508;
        func_002D86C0(sp58, arg0 + 0xC);
        func_002D4AB0(&sp44, sp58);
        sp48 = sp44;
        while (func_002D86B0(sp5C, arg0 + 0xC), func_002D4AB0(&sp40, sp5C), sp48.unk_00[0] != sp40.unk_00[0]) {
            func_002D9C80(sp48.unk_00[0]->unk_08, 1);
            func_002D87B0_next(&sp48);
        }
        q = arg0 + 0x10;
        sp4C = func_002CF630(q);
        sp50 = func_002CF630(q)->unk_04;
        func_002CFE20(sp54, arg0 + 0xC, &sp50, &sp4C);
        if (arg0 + 0xC != NULL) {
            if (arg0 + 0xC != NULL) {
                if (arg0 + 0xC != NULL) {
                    func_002CF5C0(arg0 + 0xC, 0);
                }
            }
        }
        if (arg1 > 0) {
            func_002D2BB0(arg0);
        }
    }
    return arg0;
}
