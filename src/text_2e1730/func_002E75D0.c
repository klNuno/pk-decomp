#include "common.h"

typedef struct unk_func_002E75D0_0 {
    u8 unk_00;
} unk_func_002E75D0_0;

typedef struct unk_func_002E75D0_1 {
    struct unk_func_002E75D0_1 *unk_00;
    struct unk_func_002E75D0_1 *unk_04;
    s32 unk_08;
} unk_func_002E75D0_1;

typedef union unk_func_002E75D0_2 {
    unk_func_002E75D0_0 unk_00;
    unk_func_002E75D0_1 *unk_00_p;
} unk_func_002E75D0_2;

typedef struct unk_func_002E75D0_3 {
    s32 *unk_00;
    unk_func_002E75D0_1 *unk_04;
} unk_func_002E75D0_3;

extern unk_func_002E75D0_0 D_0036060C;

unk_func_002E75D0_1 *func_002D2BC0(s32, unk_func_002E75D0_0 *);
void func_002E7700(unk_func_002E75D0_1 **, unk_func_002E75D0_2 *);
s32 func_002E76F0(unk_func_002E75D0_3 *);
void func_002E76E0(s32);
void func_002E7730(s32 *, s32 *);
void func_002D2BB0(unk_func_002E75D0_1 *);

s32 func_002E75D0(unk_func_002E75D0_1 **arg0, s32 *arg1, unk_func_002E75D0_1 **arg2, s32 *arg3) {
    unk_func_002E75D0_3 sp68;
    unk_func_002E75D0_0 sp74;
    unk_func_002E75D0_2 sp78;
    unk_func_002E75D0_0 sp7C;
    unk_func_002E75D0_1 *temp_v0;
    s32 *temp;
    unk_func_002E75D0_1 *pos;
    unk_func_002E75D0_1 *node;

    sp74 = D_0036060C;
    sp7C = sp74;
    temp_v0 = func_002D2BC0(0xC, &sp74);
    sp78.unk_00 = sp7C;
    sp78.unk_00_p = temp_v0;
    sp68.unk_00 = arg1 + 1;
    func_002E7700(&sp68.unk_04, &sp78);
    temp = &sp68.unk_04->unk_08;
    if (temp != NULL) {
        func_002E7730(temp, arg3);
    }
    node = sp68.unk_04;
    sp68.unk_04 = NULL;
    pos = *arg2;
    pos->unk_00->unk_04 = node;
    node->unk_00 = pos->unk_00;
    pos->unk_00 = node;
    node->unk_04 = pos;
    (*arg1)++;
    *arg0 = node;
    if (sp68.unk_04 != NULL) {
        func_002E76E0(func_002E76F0(&sp68));
        func_002D2BB0(sp68.unk_04);
    }
    return 0;
}
