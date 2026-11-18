/* profile: o0 */
#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_001B45E0_1;

typedef struct {
    u8 pad_00[0x10];
    unk_func_001B45E0_1 unk_10[6];
    f32 unk_58;
    f32 unk_5C;
    s32 unk_60;
    f32 unk_64;
    f32 unk_68;
    f32 unk_6C;
    f32 unk_70;
    u8 unk_74;
    u8 unk_75;
    u8 unk_76;
    u8 pad_77[0x17C - 0x77];
    u8 unk_17C;
} unk_func_001B45E0_0;

void func_001B4750(unk_func_001B45E0_0 *);
void func_001B5BD0(unk_func_001B45E0_0 *);
void func_001B4CD0(unk_func_001B45E0_0 *);
extern u8 D_0035FF64;
extern s32 D_0036015C;

void func_001B45E0(unk_func_001B45E0_0 *arg0) {
    if (!D_0035FF64) {
        arg0->unk_10[0].unk_08 = arg0->unk_10[0].unk_04 = arg0->unk_10[0].unk_00 = 0.0f;
        arg0->unk_10[1].unk_08 = arg0->unk_10[1].unk_04 = arg0->unk_10[1].unk_00 = 0.0f;
        arg0->unk_10[2].unk_08 = arg0->unk_10[2].unk_04 = arg0->unk_10[2].unk_00 = 0.0f;
        arg0->unk_10[3].unk_08 = arg0->unk_10[3].unk_04 = arg0->unk_10[3].unk_00 = 0.0f;
        arg0->unk_10[4].unk_08 = arg0->unk_10[4].unk_04 = arg0->unk_10[4].unk_00 = 0.0f;
        arg0->unk_10[5].unk_08 = arg0->unk_10[5].unk_04 = arg0->unk_10[5].unk_00 = 0.0f;
        arg0->unk_58 = 0.0f;
        arg0->unk_5C = 0.0f;
        arg0->unk_60 = 0;
        arg0->unk_64 = 0.0f;
        arg0->unk_68 = 0.0f;
        arg0->unk_6C = 0.0f;
        arg0->unk_70 = 0.0f;
        arg0->unk_74 = 0;
        arg0->unk_75 = 0;
        arg0->unk_76 = 0;
        arg0->unk_17C = 1;
        func_001B4750(arg0);
        D_0036015C = 0;
        func_001B5BD0(arg0);
        func_001B4CD0(arg0);
    }
}
