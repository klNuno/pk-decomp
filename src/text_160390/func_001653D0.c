#include "common.h"

typedef struct unk_func_001653D0_0 {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[0x14];
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    void *unk_38;
    void *unk_3C;
    u8 pad_40[0x10];
    void *unk_50;
    u8 pad_54[0x168];
    s32 unk_1BC;
    u8 pad_1C0[0x4];
    s32 unk_1C4;
    s32 unk_1C8;
    s32 unk_1CC;
    u8 pad_1D0[0x4];
    s32 unk_1D4;
    s32 unk_1D8;
    s32 unk_1DC;
    s32 unk_1E0;
} unk_func_001653D0_0;

void *malloc(u32);
void *memset(void *, s32, u32);
void *HMU_fn_p_vMalloc(s32, s32);
void func_00166D20(s32 *);
void func_001681E0();
void func_001670B0();
void func_00169000();
void func_0016D1B0();
void func_00166E50();
void func_00166EE0();
void func_00164400(s32, s32, s32, s32, s32);
void func_0016FF20(s32, s32);
extern s32 D_0035F45C;
extern void *D_0035FB24;
extern void *D_0035FB28;
extern unk_func_001653D0_0 *D_0035FB04;
extern s32 D_0035FAFC;
extern f32 D_0036A148[];
extern f32 D_0035F388;
extern s32 D_0035FAB4;

void func_001653D0(void) {
    if (D_0035F45C != 0) {
        D_0035F45C = 0;
        D_0035FB24 = malloc(0x640);
        memset(D_0035FB24, 0, 0x640);
        D_0035FB28 = malloc(0x640);
        memset(D_0035FB28, 0, 0x640);
        D_0035FB04 = HMU_fn_p_vMalloc(0x1F0, 1);
        D_0035FB04->unk_2C = (s32)HMU_fn_p_vMalloc(0x13890, 1);
        D_0035FB04->unk_2C = (D_0035FB04->unk_2C + 0xF) & ~0xF;
        D_0035FB04->unk_30 = 0;
        D_0035FB04->unk_34 = 0;
        D_0035FB04->unk_38 = HMU_fn_p_vMalloc(0x13880, 1);
        D_0035FB04->unk_3C = HMU_fn_p_vMalloc(0x13880, 1);
        D_0035FB04->unk_50 = HMU_fn_p_vMalloc(0x9C40, 1);
        D_0035FB04->unk_14 = -1;
        D_0035FB04->unk_1C4 = 0;
        D_0035FB04->unk_1C8 = 0;
        D_0035FB04->unk_1CC = 0;
        D_0035FB04->unk_1D4 = 0;
        D_0035FB04->unk_1D8 = 0;
        D_0035FB04->unk_1DC = 0;
        D_0035FB04->unk_1E0 = 0;
        func_00166D20(&D_0035FAFC);
        func_001681E0();
        func_001670B0();
        func_00169000();
        func_0016D1B0();
        func_00166E50();
        func_00166EE0();
    }
    D_0035FB04->unk_1BC = 0;
    D_0036A148[0] = 0.0f;
    func_00164400(0, 1, 0x280, 0x1C0, 0x20);
    D_0036A148[0] = 50.0f;
    D_0035F388 = 1.0f / D_0036A148[0];
    func_0016FF20(0x64, 0);
    D_0035FAB4 = 1;
}
