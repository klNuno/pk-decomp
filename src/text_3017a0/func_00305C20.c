#include "common.h"

typedef struct unk_func_00305C20_0 {
    u8 pad_00[0x8];
    s32 unk_08;
    u8 unk_0C;
} unk_func_00305C20_0;

void func_003057D0(void);
void func_00305800(void);
void func_0030D0F0(s32, s32, s32, s32, s32, s32, s32);
s32 *func_0030D3F0(s32);
s32 func_0030D400(void);

void func_00305C20(unk_func_00305C20_0 *arg0, u8 arg1) {
    s32 temp_s0;
    s32 *temp_v0;

    func_00305800();
    temp_s0 = func_0030D400();
    temp_v0 = func_0030D3F0(temp_s0);
    arg0->unk_0C = arg1;
    temp_v0[0] = arg0->unk_08;
    temp_v0[1] = 1;
    if (!arg1) {
        temp_v0[1] = 0;
    }
    func_0030D0F0(0x26, temp_s0, 8, 0, 0, 0, 0);
    func_003057D0();
}
