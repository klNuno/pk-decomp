#include "common.h"

typedef struct unk_func_00260D60_0 {
    f32 unk_00, unk_04, unk_08;
} unk_func_00260D60_0;

s32 rand(void);
void func_00266E40(s32, unk_func_00260D60_0 *, unk_func_00260D60_0 *, s32, f32, f32, f32);
extern s32 D_0035F5AC;
extern f32 D_00360238, D_00360258;
extern u32 D_003602B4, D_003602B8;
extern u32 D_005AB800[];

void func_00260D60(unk_func_00260D60_0 *arg0, unk_func_00260D60_0 *arg1, s32 arg2, f32 arg3) {
    unk_func_00260D60_0 sp50;
    unk_func_00260D60_0 sp60;
    u32 temp4;
    f32 temp;
    f32 temp2;
    f32 temp3;

    D_003602B4 = D_003602B8;
    temp4 = D_005AB800[0];
    D_003602B8 = temp4;
    temp = 0.001f * (f32)temp4;
    D_00360238 = temp;
    if (D_0035F5AC || 0.0f == D_00360258) {
        D_00360258 = temp;
    }
    if (D_00360258 <= temp) {
        D_00360258 = 0.05f + temp;
        sp50.unk_00 = arg0->unk_00 + 8.0f * arg1->unk_00 + (-4.0f + 8.0f * (f32)rand() / 2147483648.0f);
        sp50.unk_04 = arg0->unk_04 + 8.0f * arg1->unk_04 + (-4.0f + 8.0f * (f32)rand() / 2147483648.0f);
        sp50.unk_08 = arg0->unk_08 + 8.0f * arg1->unk_08 + (-5.0f + (f32)rand() / 2147483648.0f);
        temp2 = 0.2f * arg3;
        temp3 = temp2 + (0.25f * arg3 - temp2) * (f32)rand() / 2147483648.0f;
        sp60.unk_00 = -0.2f + 0.4f * (f32)rand() / 2147483648.0f;
        sp60.unk_04 = -0.2f + 0.4f * (f32)rand() / 2147483648.0f;
        sp60.unk_08 = 2.5f + 2.0f * (f32)rand() / 2147483648.0f;
        func_00266E40(0x8700B, &sp50, &sp60, arg2, 0.5f, temp3, temp3);
    }
}
