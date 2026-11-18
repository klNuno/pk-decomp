#include "common.h"

typedef struct unk_func_002D0BD0_0 {
    u32 unk_00;
    u8 pad_04[0x4];
    s32 unk_08;
    u8 *unk_0C;
} unk_func_002D0BD0_0;

typedef struct unk_func_002D0BD0_1 {
    void *unk_00;
} unk_func_002D0BD0_1;

typedef struct unk_func_002D0BD0_3 {
    s8 unk_00;
} unk_func_002D0BD0_3;

typedef struct unk_func_002D0BD0_2 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_002D0BD0_2;

void func_00118218(s32, void *);
void func_00116450(void);
void func_002D0D90(unk_func_002D0BD0_1 *, unk_func_002D0BD0_0 **);
void func_002D1290(unk_func_002D0BD0_0 **, unk_func_002D0BD0_0 **, s32, s32, unk_func_002D0BD0_1 *);
s32 func_002D0F80(s32, s32, s32, u8 *, u8 *, unk_func_002D0BD0_3);
void func_002D2BB0(void *);
void func_002CD930(void *, s32);
extern unk_func_002D0BD0_2 *D_0032F73C[];
extern u8 D_0035AE70[];

s32 func_002D0BD0(s32 arg0, s32 arg1, s32 arg2, unk_func_002D0BD0_0 **arg3, u32 arg4, u32 arg5) {
    unk_func_002D0BD0_0 *sp7C;
    u32 sp80;
    unk_func_002D0BD0_1 sp84;
    unk_func_002D0BD0_3 sp88;
    unk_func_002D0BD0_3 sp8C;
    u32 temp_s0;
    s32 temp_s0_2;

    if ((*arg3)->unk_00 < arg4) {
        func_00118218(D_0032F73C[0]->unk_0C, D_0035AE70);
        func_00116450();
    }
    sp80 = (*arg3)->unk_00 - arg4;
    temp_s0 = *(sp80 < arg5 ? &sp80 : &arg5);
    if (arg0 == (s32)arg3) {
        func_002D0D90(&sp84, arg3);
        func_002D1290(&sp7C, arg3, 0, -1, &sp84);
        temp_s0_2 = func_002D0F80(arg0, arg1, arg2, sp7C->unk_0C + arg4, sp7C->unk_0C + arg4 + temp_s0, sp88);
        if (sp7C->unk_08 == 0) {
            sp7C->unk_08 = sp7C->unk_08 != 0 ? sp7C->unk_08 : 1;
        }
        sp7C = --sp7C->unk_08 == 0 ? sp7C : NULL;
        if (sp7C != NULL) {
            if (sp7C != NULL) {
                func_002D2BB0(sp7C->unk_0C);
                func_002CD930(&sp7C->pad_04, -1);
            }
            func_002D2BB0(sp7C);
        }
        return temp_s0_2;
    }
    return func_002D0F80(arg0, arg1, arg2, (*arg3)->unk_0C + arg4, (*arg3)->unk_0C + arg4 + temp_s0, sp8C);
}
