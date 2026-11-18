/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_00250130_0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00250130_0;

typedef struct unk_func_00250130_1 {
    u8 pad_00[0xD4];
    s8 *unk_D4;
    u8 pad_D8[0x8];
    unk_func_00250130_0 *unk_E0;
    u8 pad_E4[0x24];
    s32 unk_108;
    u8 pad_10C[0x10];
    unk_func_00250130_0 *unk_11C;
    u8 pad_120[0x28];
    u8 unk_148[0x184];
    s32 unk_2CC;
    u8 pad_2D0[0x14];
    u8 unk_2E4;
} unk_func_00250130_1;

f32 func_00151360(f32);
void func_001B45E0();
f32 func_001E60E0(f32);
void func_0024DD10();
void func_0024DF00();
void func_0024DF70();
void func_00250300();
void func_002548B0();
void func_002574D0();
extern s32 D_003601D8;
extern u8 D_003370E8[];

void func_00250130(unk_func_00250130_1 *arg0) {
    unk_func_00250130_0 d;

    if (*arg0->unk_D4) {
        d.unk_00 = arg0->unk_11C->unk_00 - arg0->unk_E0->unk_00;
        d.unk_04 = arg0->unk_11C->unk_04 - arg0->unk_E0->unk_04;
        d.unk_08 = arg0->unk_11C->unk_08 - arg0->unk_E0->unk_08;
        if (func_001E60E0(func_00151360(d.unk_00) + func_00151360(d.unk_04) + func_00151360(d.unk_08)) < 1.0f) {
            func_001B45E0(D_003601D8);
            func_0024DF00(D_003601D8, arg0->unk_108);
            switch (arg0->unk_2E4) {
            case 2:
                func_00250300(arg0);
                break;
            case 1:
                func_0024DF70(arg0);
                break;
            case 3:
                func_002548B0(arg0);
                break;
            }
            func_002574D0(arg0->unk_148, arg0->unk_108);
            func_0024DD10(D_003601D8, 0, 1, arg0->unk_148, D_003370E8);
            arg0->unk_2CC = 0;
            *arg0->unk_D4 = 0;
        }
    }
}
