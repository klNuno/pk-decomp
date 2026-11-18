#include "common.h"

typedef struct {
    u8 pad_00[4];
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_0016D010_0;

f32 func_00167A50();
void func_00167A70(f32);
extern f32 D_0035F49C;
extern u8 D_0035F5B4;
extern unk_func_0016D010_0 *D_0035FAFC;
extern s32 D_0035FB6C;
extern u8 D_0035FBB4;

void func_0016D010(void) {
    f32 saved;
    f32 v;

    saved = D_0035F49C;
    D_0035F49C = 0.0f;
    v = func_00167A50();
    func_00167A70(255.0f);
    D_0035FBB4 = 0;
    D_0035FAFC->unk_04 = (f32)(D_0035FB6C & 0xFF) / 255.0f;
    D_0035FAFC->unk_08 = (f32)((D_0035FB6C >> 8) & 0xFF) / 255.0f;
    D_0035FAFC->unk_0C = (f32)((D_0035FB6C >> 16) & 0xFF) / 255.0f;
    D_0035F5B4 = 1;
    func_00167A70(v);
    D_0035F49C = saved;
}
