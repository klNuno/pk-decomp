/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00250BB0_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00250BB0_0;

typedef struct unk_func_00250BB0_1 {
    u8 pad_00[0xC];
    unk_func_00250BB0_0 unk_0C;
} unk_func_00250BB0_1;

typedef struct unk_func_00250BB0_2 {
    u8 pad_00[0x4];
    unk_func_00250BB0_1 *unk_04;
    u8 pad_08[0x4];
    unk_func_00250BB0_1 *unk_0C;
} unk_func_00250BB0_2;

typedef struct unk_func_00250BB0_3 {
    u8 pad_00[0x11C];
    unk_func_00250BB0_0 *unk_11C;
    u8 pad_120[0x28];
    unk_func_00250BB0_0 unk_148;
    u8 pad_154[0xE4];
    f32 unk_238;
    u8 pad_23C[0x10];
    f32 unk_24C;
} unk_func_00250BB0_3;

void func_002580D0(unk_func_00250BB0_0 *, f32, unk_func_00250BB0_0 *);
extern unk_func_00250BB0_0 D_003370E8;
extern unk_func_00250BB0_2 *D_003601D8;

void func_00250BB0(unk_func_00250BB0_0 *arg0, unk_func_00250BB0_3 *arg1, s32 arg2) {
    unk_func_00250BB0_0 sp40;
    unk_func_00250BB0_0 sp50;
    unk_func_00250BB0_0 sp60;

    sp40.unk_00 = arg1->unk_11C->unk_00 + (arg2 == 0 ? &D_003601D8->unk_04->unk_0C : &D_003601D8->unk_0C->unk_0C)->unk_00;
    sp40.unk_04 = arg1->unk_11C->unk_04 + (arg2 == 0 ? &D_003601D8->unk_04->unk_0C : &D_003601D8->unk_0C->unk_0C)->unk_04;
    sp40.unk_08 = arg1->unk_11C->unk_08 + (arg2 == 0 ? &D_003601D8->unk_04->unk_0C : &D_003601D8->unk_0C->unk_0C)->unk_08;
    sp50.unk_00 = arg1->unk_24C * arg1->unk_148.unk_00;
    sp50.unk_04 = arg1->unk_24C * arg1->unk_148.unk_04;
    sp50.unk_08 = arg1->unk_24C * arg1->unk_148.unk_08;
    ((s32 *)(&sp60))[0] = ((s32 *)(&arg1->unk_148))[0];
    ((s32 *)(&sp60))[1] = ((s32 *)(&arg1->unk_148))[1];
    ((s32 *)(&sp60))[2] = ((s32 *)(&arg1->unk_148))[2];
    func_002580D0(&sp60, -1.5707964f, &D_003370E8);
    func_002580D0(&sp50, arg1->unk_238, &sp60);
    arg0->unk_00 = sp40.unk_00 + sp50.unk_00;
    arg0->unk_04 = sp40.unk_04 + sp50.unk_04;
    arg0->unk_08 = sp40.unk_08 + sp50.unk_08;
}
