/* profile: opt_300 */
#include "common.h"

typedef struct {
    f32 unk_00;
    u8 pad_04[4];
    s16 unk_08;
    u8 pad_0A[2];
} unk_func_001DE910_0;

typedef struct {
    unk_func_001DE910_0 *unk_00;
    s16 unk_04;
} unk_func_001DE910_1;

typedef struct {
    f32 unk_00[3];
    f32 unk_0C[3];
} unk_func_001DE910_2;

typedef struct {
    u8 pad_00[4];
    s16 unk_04;
    u8 pad_06[0x12];
    unk_func_001DE910_2 *unk_18;
} unk_func_001DE910_3;

typedef struct {
    u8 pad_00[8];
    f32 (*unk_08)[3];
} unk_func_001DE910_4;

typedef struct {
    u8 pad_00[0x50];
    unk_func_001DE910_3 *unk_50;
    u8 pad_54[0x18];
    unk_func_001DE910_4 *unk_6C;
    u8 pad_70[0x70];
    u8 unk_E0[0x180];
    f32 unk_260;
    unk_func_001DE910_1 *unk_264;
} unk_func_001DE910_5;

void func_001559E0(f32 *, void *, f32 *);
s32 func_001DDBD0(f32 *, f32 *, f32 *, f32 *);
void func_001DDC80(f32 *, f32 *, f32 *, f32 *, f32 *, f32);
void func_001DDD90(f32 *, f32 *, f32 *, f32);

u8 func_001DE910(unk_func_001DE910_5 *arg0, u32 *arg1, s32 arg2) {
    u8 temp[16];
    f32 unk_B0[3];
    f32 unk_C0[3];
    f32 unk_D0[3];
    f32 unk_E0[3];
    f32 unk_F0[3];
    unk_func_001DE910_2 *temp_s0;
    s16 i, j;
    s32 temp_s1;
    s32 temp_s2;
    s16 k;

    temp[0] = 0;
    func_001559E0(unk_B0, arg0->unk_E0, arg0->unk_6C->unk_08[arg0->unk_264->unk_00[0].unk_08]);
    func_001DDD90(unk_C0, unk_D0, unk_B0, arg0->unk_264->unk_00[0].unk_00 / arg0->unk_260);
    for (i = 1; i < arg0->unk_264->unk_04; i++) {
        func_001559E0(unk_B0, arg0->unk_E0, arg0->unk_6C->unk_08[arg0->unk_264->unk_00[i].unk_08]);
        func_001DDC80(unk_C0, unk_D0, unk_B0, unk_C0, unk_D0,
                      arg0->unk_264->unk_00[i].unk_00 / arg0->unk_260);
    }
    temp_s0 = arg0->unk_50->unk_18;
    for (j = 0; j < arg0->unk_50->unk_04; j++, temp_s0++, arg1++) {
        f32 *temp_s7 = temp_s0->unk_0C;
        s32 temp_v0;
        *arg1 = 0;
        temp_v0 = func_001DDBD0(unk_D0, unk_C0, temp_s7, temp_s0->unk_00);
        k = 0;
        if (temp_v0 != 0) {
            for (temp_s1 = 0; (temp_s2 = (s16)k) < arg0->unk_264->unk_04; temp_s1 += 12, k++) {
                func_001559E0((f32 *)(void *)unk_B0, arg0->unk_E0, arg0->unk_6C->unk_08[(*(unk_func_001DE910_0 *)((u8 *)arg0->unk_264->unk_00 + temp_s1)).unk_08]);
                func_001DDD90(unk_E0, unk_F0, unk_B0, (*(unk_func_001DE910_0 *)((u8 *)arg0->unk_264->unk_00 + temp_s1)).unk_00 / arg0->unk_260);
                if (func_001DDBD0(unk_F0, unk_E0, temp_s7, temp_s0->unk_00) != 0) {
                    *arg1 |= 1U << temp_s2;
                    temp[0] = 1;
                    if (arg2 != 0) {
                        return 1;
                    }
                }
            }
        }
    }
    return temp[0];
}
