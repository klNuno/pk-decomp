#include "common.h"

typedef struct unk_func_002D29C0_0 {
    struct unk_func_002D29C0_0 *unk_00;
    struct unk_func_002D29C0_0 *unk_04;
    s32 unk_08;
} unk_func_002D29C0_0;

struct unk_func_002D29C0_1 {
};

struct unk_func_002D29C0_2 : unk_func_002D29C0_1 {
    s32 unk_00;
    unk_func_002D29C0_2(s32 b, unk_func_002D29C0_1 a) : unk_func_002D29C0_1(a), unk_00(b) {}
};

struct unk_func_002D29C0_3 {
    s32 *unk_00;
    unk_func_002D29C0_0 *unk_04;
};

extern "C" {
s32 func_002D2BC0(s32, unk_func_002D29C0_1 *);
void func_002D2AF0(unk_func_002D29C0_0 **, unk_func_002D29C0_2 *);
s32 func_002D2AE0(s32 **);
void func_002D2AD0(s32);
void func_002D2BB0(unk_func_002D29C0_0 *);
extern unk_func_002D29C0_1 D_00360544;

s32 func_002D29C0(unk_func_002D29C0_0 **arg0, s32 *arg1, unk_func_002D29C0_0 **arg2, s32 *arg3) {
    unk_func_002D29C0_3 sp68;
    unk_func_002D29C0_0 *pos;
    unk_func_002D29C0_0 *node;
    unk_func_002D29C0_1 sp74 = D_00360544;
    unk_func_002D29C0_2 sp78(func_002D2BC0(0xC, &sp74), sp74);

    sp68.unk_00 = (s32 *)((u8 *)arg1 + 4);
    func_002D2AF0(&sp68.unk_04, &sp78);
    if (&sp68.unk_04->unk_08 != 0) {
        sp68.unk_04->unk_08 = *arg3;
    }
    node = sp68.unk_04;
    sp68.unk_04 = 0;
    pos = *arg2;
    pos->unk_00->unk_04 = node;
    node->unk_00 = pos->unk_00;
    pos->unk_00 = node;
    node->unk_04 = pos;
    *arg1 += 1;
    *arg0 = node;
    if (sp68.unk_04 != 0) {
        func_002D2AD0(func_002D2AE0(&sp68.unk_00));
        func_002D2BB0(sp68.unk_04);
    }
    return 0;
}
}
