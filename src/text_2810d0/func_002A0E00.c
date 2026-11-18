#include "common.h"

typedef struct unk_func_002A0E00_0 {
    f32 unk_00;
    u8 pad_04[0xC];
} unk_func_002A0E00_0;

void func_0029D9A0(s32, s32, void *);
extern u8 D_007B2370[];
extern u8 D_007B8488[];
extern unk_func_002A0E00_0 D_007B84D0[];

void func_002A0E00(s32 arg0, s32 arg1) {
    D_007B84D0[arg0].unk_00 = (f32)arg1 / 32767.0f;
    if (D_007B8488[0] == 0) {
        func_0029D9A0(5, arg0, D_007B2370 + arg0 * 0x10 + 0x6160);
    }
}
