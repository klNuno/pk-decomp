#include "common.h"

typedef struct unk_func_00318D00_0 {
    u8 pad_00[4];
    void *unk_04;
    u8 pad_08[8];
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
    u8 unk_20;
} unk_func_00318D00_0;

extern u8 D_0035F2A0[];

void func_00318C60(void *);

unk_func_00318D00_0 *func_00318D00(unk_func_00318D00_0 *arg0) {
    func_00318C60(arg0);
    arg0->unk_04 = D_0035F2A0;
    arg0->unk_10 = 100.0f;
    arg0->unk_14 = 10.0f;
    arg0->unk_18 = 1.0f;
    arg0->unk_1C = 1.05f;
    arg0->unk_20 = 1;
    return arg0;
}
