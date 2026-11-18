#include "common.h"

typedef struct unk_func_002EB670_0 {
    void *unk_00;
    u8 pad_04[0x14];
    f32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    f32 unk_24;
    s32 unk_28;
    u8 unk_2C[4];
} unk_func_002EB670_0;

void func_002F21B0();
void func_002EB770();
extern u8 D_0035E670[];

unk_func_002EB670_0 *func_002EB670(unk_func_002EB670_0 *volatile arg0) {
    func_002F21B0(arg0);
    arg0->unk_00 = D_0035E670;
    arg0->unk_18 = 1.0f;
    arg0->unk_1C = 1.0f;
    arg0->unk_20 = 1.0f;
    arg0->unk_24 = 1.0f;
    arg0->unk_28 = 0;
    func_002EB770(arg0->unk_2C, 0);
    return arg0;
}
