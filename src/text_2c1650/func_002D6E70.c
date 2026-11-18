#include "common.h"

typedef struct unk_func_002D6E70_0 {
    u8 unk_00;
} unk_func_002D6E70_0;

typedef struct unk_func_002D6E70_1 {
    struct unk_func_002D6E70_1 *unk_00;
    struct unk_func_002D6E70_1 *unk_04;
    s32 unk_08;
} unk_func_002D6E70_1;

typedef union unk_func_002D6E70_2 {
    unk_func_002D6E70_0 unk_00;
    unk_func_002D6E70_1 *unk_00_p;
} unk_func_002D6E70_2;

typedef struct unk_func_002D6E70_3 {
    s32 *unk_00;
    unk_func_002D6E70_1 *unk_04;
} unk_func_002D6E70_3;

extern unk_func_002D6E70_0 D_0036055C;

unk_func_002D6E70_1 *func_002D2BC0(s32, unk_func_002D6E70_0 *);
void func_002D6FA0(unk_func_002D6E70_1 **, unk_func_002D6E70_2 *);
s32 func_002D6F90(unk_func_002D6E70_3 *);
void func_002D6F80(s32);
void func_002D2BB0(unk_func_002D6E70_1 *);

s32 func_002D6E70(unk_func_002D6E70_1 **arg0, s32 *arg1, unk_func_002D6E70_1 **arg2, s32 *arg3) {
    unk_func_002D6E70_3 sp68;
    unk_func_002D6E70_0 sp74;
    unk_func_002D6E70_2 sp78;
    unk_func_002D6E70_0 sp7C;
    unk_func_002D6E70_1 *temp_v0;
    s32 *temp;
    unk_func_002D6E70_1 *pos;
    unk_func_002D6E70_1 *node;

    sp74 = D_0036055C;
    sp7C = sp74;
    temp_v0 = func_002D2BC0(0xC, &sp74);
    sp78.unk_00 = sp7C;
    sp78.unk_00_p = temp_v0;
    sp68.unk_00 = arg1 + 1;
    func_002D6FA0(&sp68.unk_04, &sp78);
    temp = &sp68.unk_04->unk_08;
    if (temp != NULL) {
        *temp = *arg3;
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
        func_002D6F80(func_002D6F90(&sp68));
        func_002D2BB0(sp68.unk_04);
    }
    return 0;
}
