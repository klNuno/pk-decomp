#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_00260720_0;

extern s32 D_0035F5AC;
extern f32 D_00360238;
extern f32 D_00360260;
extern u32 D_003602B4;
extern u32 D_003602B8;
extern u32 D_005AB800[];

s32 rand(void);
void func_00266E40(s32, unk_00260720_0 *, unk_00260720_0 *, s32, f32, f32, f32);

void func_00260720(unk_00260720_0 *arg0, unk_00260720_0 *arg1, s32 arg2, f32 arg3) {
    f32 temp;
    f32 temp2;
    u32 temp5;
    unk_00260720_0 temp3;
    unk_00260720_0 temp4;
    D_003602B4 = D_003602B8;
    temp5 = D_005AB800[0];
    D_003602B8 = temp5;
    temp = 0.001f * (f32)temp5;
    D_00360238 = temp;
    if (D_0035F5AC != 0 || 0.0f == D_00360260) {
        D_00360260 = temp;
    }
    if (D_00360260 <= temp) {
        D_00360260 = 0.05f + temp;
        temp3.unk_00 = arg0->unk_00 + 5.0f * arg1->unk_00 + 2.0f * (-2.0f + (4.0f * (f32)rand()) / 2147483647.0f);
        temp3.unk_04 = arg0->unk_04 + 5.0f * arg1->unk_04 + 2.0f * (-2.0f + (4.0f * (f32)rand()) / 2147483647.0f);
        temp3.unk_08 = arg0->unk_08 + 5.0f * arg1->unk_08 - 4.0f;
        temp2 = 0.2f * arg3;
        temp2 = temp2 + (((0.25f * arg3 - temp2) * (f32)rand()) / 2147483647.0f);
        temp4.unk_00 = -0.2f + (0.4f * (f32)rand()) / 2147483647.0f;
        temp4.unk_04 = -0.2f + (0.4f * (f32)rand()) / 2147483647.0f;
        temp4.unk_08 = 2.5f + (2.0f * (f32)rand()) / 2147483647.0f;
        func_00266E40(0x87007, &temp3, &temp4, arg2, 0.5f, temp2, temp2);
    }
}
