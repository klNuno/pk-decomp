#include "common.h"

typedef struct unk_func_00306F90_1 {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_00306F90_1;

typedef struct unk_func_00306F90_0 {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 pad_0C[0xC];
    unk_func_00306F90_1 *unk_18;
} unk_func_00306F90_0;

void func_003057D0(void);
void func_00305800(void);
void func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);
s32 *func_0030D3F0(s32);
s32 func_0030D400(void);

void func_00306F90(unk_func_00306F90_0 *arg0) {
    s32 temp_s0;
    s32 *temp_v0;

    func_00305800();
    if (arg0->unk_18->unk_08 == 2) {
        temp_s0 = func_0030D400();
        temp_v0 = func_0030D3F0(temp_s0);
        *temp_v0 = arg0->unk_08;
        func_0030D0F0(0x47, temp_s0, 4, 0, 0, 0, arg0->unk_08);
        arg0->unk_18->unk_08 = 1;
    }
    func_003057D0();
}
