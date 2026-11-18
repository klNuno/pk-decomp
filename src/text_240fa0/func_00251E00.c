/* profile: o0_301_p */
#include "common.h"

typedef struct unk_func_00251E00_2 {
    u8 pad_00[0x72];
    u8 unk_72;
} unk_func_00251E00_2;

typedef struct unk_func_00251E00_0 {
    u8 pad_00[0x4];
    unk_func_00251E00_2 *unk_04;
    unk_func_00251E00_2 *unk_08;
    unk_func_00251E00_2 *unk_0C;
} unk_func_00251E00_0;

typedef struct unk_func_00251E00_1 {
    u8 pad_00[0x148];
    u8 unk_148[0xEC];
    f32 unk_234;
    u8 pad_238[0x14];
    f32 unk_24C;
    f32 unk_250;
    u8 pad_254[0x58];
    s32 unk_2AC;
} unk_func_00251E00_1;

extern unk_func_00251E00_0 *D_003601D8;
extern u8 D_003370E8[];
void func_0024D860(unk_func_00251E00_0 *, s32, s32, s32, f32);
void func_0024DD10();
void func_001FD710();

void func_00251E00(unk_func_00251E00_1 *arg0) {
    func_0024D860(D_003601D8, 0x239, 0, 1, arg0->unk_234);
    func_0024DD10(D_003601D8, 0, 1, arg0->unk_148, D_003370E8);
    func_0024D860(D_003601D8, 0x233, 0, 1, arg0->unk_24C);
    func_0024D860(D_003601D8, 0x234, 0, 1, arg0->unk_24C);
    if (((arg0->unk_24C - arg0->unk_250 > 0.0f) ? arg0->unk_24C - arg0->unk_250 : -(arg0->unk_24C - arg0->unk_250)) > 0.2f || arg0->unk_2AC != 0) {
        func_001FD710(D_003601D8, &D_003601D8->unk_04->unk_72, &D_003601D8->unk_08->unk_72, &D_003601D8->unk_0C->unk_72, 1, 1, 0x80);
        func_0024D860(D_003601D8, 0x23B, 1, 1, 180.0f);
        func_0024D860(D_003601D8, 0x241, 1, 1, 180.0f);
    }
    arg0->unk_250 = arg0->unk_24C;
}
