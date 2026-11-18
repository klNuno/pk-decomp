#include "common.h"

typedef struct unk_func_002A0D20_0 {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_002A0D20_0;

typedef struct unk_func_002A0D20_1 {
    u8 pad_00[0x6160];
    unk_func_002A0D20_0 unk_6160[1];
} unk_func_002A0D20_1;

f32 int2dB__Fi(s32);
void func_0029D9A0();
extern unk_func_002A0D20_1 D_007B2370;
extern u8 D_007B8488[];

void func_002A0D20(s32 arg0, s32 arg1) {
    D_007B2370.unk_6160[arg0].unk_00 = int2dB__Fi(arg1);
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, &D_007B2370.unk_6160[arg0]);
    }
}
