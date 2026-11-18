#include "common.h"

typedef struct unk_func_00313D90_0 {
    u8 pad_00[0x1C];
    s32 unk_1C;
    u8 pad_20[0x24];
    u8 unk_44[0x1C];
    void *unk_60;
    s32 unk_64;
    s32 unk_68;
    s32 unk_6C;
    f32 unk_70;
} unk_func_00313D90_0;

extern u8 D_0035F1C0[];
void func_00312AA0(void *);

unk_func_00313D90_0 *func_00313D90(unk_func_00313D90_0 *arg0) {
    arg0->unk_60 = D_0035F1C0;
    func_00312AA0(arg0->unk_44);
    arg0->unk_1C = 0;
    arg0->unk_64 = 0;
    arg0->unk_68 = 0;
    arg0->unk_6C = 0;
    arg0->unk_70 = 10.0f;
    return arg0;
}
