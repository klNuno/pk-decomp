#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00193FE0_0;

typedef struct {
    unk_func_00193FE0_0 *unk_00;
    u8 pad_04[0x14];
    s32 unk_18;
    u8 pad_1C[0xA];
    s16 unk_26;
    s32 unk_28;
    unk_func_00193FE0_0 unk_2C;
} unk_func_00193FE0_1;

void func_00194850(unk_func_00193FE0_1 *);
void func_00194400(unk_func_00193FE0_1 *);
void func_00193BA0(unk_func_00193FE0_1 *, s16);
void func_001950E0(unk_func_00193FE0_1 *, s16);
void func_001961C0(unk_func_00193FE0_1 *, unk_func_00193FE0_0 *, s32 *);

void func_00193FE0(unk_func_00193FE0_1 *arg0) {
    s16 i;

    func_00194850(arg0);
    func_00194400(arg0);
    if (arg0->unk_26 != 0) {
        i = 0;
        if (arg0->unk_18 == 0) {
            func_00193BA0(arg0, arg0->unk_26);
        }
        for (i = 0; i < arg0->unk_26; i++) {
            func_001950E0(arg0, i);
        }
    }
    arg0->unk_2C = *arg0->unk_00;
    arg0->unk_28 = 0;
    func_001961C0(arg0, &arg0->unk_2C, &arg0->unk_28);
}
