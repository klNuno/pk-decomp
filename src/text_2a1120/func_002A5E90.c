#include "common.h"

typedef struct {
    u64 unk_00_0 : 47;
    u64 unk_00_47 : 11;
    u64 unk_00_58 : 6;
    u64 unk_08;
} __attribute__((aligned(16))) unk_func_002A5E90_0;

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
} unk_func_002A5E90_1;

typedef struct {
    void *unk_00;
    u8 pad_04[4];
    unk_func_002A5E90_1 unk_08;
} unk_func_002A5E90_2;

void func_00287570();
s32 func_00288D20();
unk_func_002A5E90_2 *func_0029DA50();
s32 func_0029DBE0();
s32 func_002AA7C0();
void *memcpy();
void func_002A6010();
extern s32 D_00360404;
extern s32 D_00360410;
extern unk_func_002A5E90_0 D_007B07D0;
extern s32 D_007B8284[];
extern u8 D_007B85F0[];
extern s32 D_007B8604[];
extern unk_func_002A5E90_0 *D_007B8F8C[];

void func_002A5E90(s32 arg0, s32 arg1, s32 arg2) {
    unk_func_002A5E90_2 *temp_v0;
    unk_func_002A5E90_1 *temp_s0;

    temp_v0 = func_0029DA50(0x30);
    temp_s0 = &temp_v0->unk_08;
    temp_v0->unk_08.unk_10 = arg0;
    temp_v0->unk_08.unk_14 = arg1;
    temp_v0->unk_08.unk_18 = arg2;
    temp_v0->unk_00 = func_002A6010;
    if (D_007B8284[0] < 0) {
        if (temp_s0->unk_18 != 0) {
            D_00360410 = func_0029DBE0(func_00288D20(arg0, arg2) << 4);
            temp_s0->unk_1C = D_00360410;
            D_007B07D0 = *D_007B8F8C[0];
            D_007B8F8C[0]->unk_00_47 = func_002AA7C0(arg0);
            D_007B8604[0] = 0;
            func_00287570(temp_s0->unk_10, temp_s0->unk_14, temp_s0->unk_18, D_007B8284[0], 0);
            memcpy(temp_s0, D_007B85F0, 0x10);
            *D_007B8F8C[0] = D_007B07D0;
            temp_s0->unk_20 = D_00360404;
            return;
        }
        temp_s0->unk_1C = 0x10;
        D_007B8604[0] = 0;
        temp_s0->unk_20 = D_00360404;
        return;
    }
    temp_s0->unk_1C = 0;
}
