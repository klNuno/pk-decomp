#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002A7E40_0;

f32 int2dB__Fi(s32);
void func_0029D9A0(s32, s32, void *);
extern unk_func_002A7E40_0 D_007B8490[];
extern u8 D_007B8488[];
extern unk_func_002A7E40_0 D_007B2370[];

void func_002A7E40(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    D_007B8490[arg0].unk_00 = int2dB__Fi(arg1);
    D_007B8490[arg0].unk_04 = int2dB__Fi(arg2);
    D_007B8490[arg0].unk_08 = int2dB__Fi(arg3);
    D_007B8490[arg0].unk_0C = int2dB__Fi(arg4);
    if (D_007B8488[0] == 0) {
        func_0029D9A0(6, arg0, (u8 *)&D_007B2370[arg0] + 0x6120);
    }
}
