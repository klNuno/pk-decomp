#include "common.h"

typedef struct {
    u64 unk_00;
    u64 unk_08;
} unk_func_002AB750_0;

s8 func_00285B50(s32);
void func_00285C80(s32);
void func_002B4490(s32, s32);
extern s8 D_00360460;
extern s32 D_00360464;
extern s64 D_00360468;
extern s32 D_00360470;
extern s32 D_007B0764[];
extern unk_func_002AB750_0 D_007B07E0[];
extern unk_func_002AB750_0 D_007B0920[];
extern u8 D_007B0970[];

void func_002AB750(void) {
    D_00360470 = D_007B0970[3] & 0x3F;
    D_00360468 = (u32)(*(u16 *)D_007B0970 & 0x1FF);
    D_00360464 = *(u64 *)D_007B0970 >> 32;
    if (D_007B0764[0] != 0) {
        func_002B4490(0, D_007B0764[0]);
    }
    D_00360460 = func_00285B50(0xB71);
    func_00285C80(0xB71);
    D_007B07E0[0] = D_007B0920[0];
}
