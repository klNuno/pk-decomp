#include "common.h"

typedef struct {
    u8 pad_00[4];
    void *unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    u8 pad_14[0xC];
    f32 unk_20;
} unk_func_00318350_0;

extern u8 D_0035F240[];
void func_00318C60();

unk_func_00318350_0 *func_00318350(unk_func_00318350_0 *arg0) {
    func_00318C60(arg0);
    arg0->unk_04 = D_0035F240;
    arg0->unk_08 = 0.0f;
    arg0->unk_0C = 0.0f;
    arg0->unk_10 = 3.0f;
    arg0->unk_20 = 0.3f;
    return arg0;
}
