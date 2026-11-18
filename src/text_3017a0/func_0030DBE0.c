#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
    s32 unk_0C;
} unk_func_0030DBE0_0;

void func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);
s32 *func_0030D3F0(s32);
s32 func_0030D400(void);

void func_0030DBE0(unk_func_0030DBE0_0 *arg0) {
    s32 temp_s0;
    s32 *temp_v0;

    if (arg0->unk_08 == 2) {
        temp_s0 = func_0030D400();
        temp_v0 = func_0030D3F0(temp_s0);
        *temp_v0 = arg0->unk_0C;
        func_0030D0F0(0x33, temp_s0, 4, 0, 0, 0, arg0->unk_0C);
        arg0->unk_08 = 1;
    }
}
