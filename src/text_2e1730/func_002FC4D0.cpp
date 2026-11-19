#include "common.h"

extern "C" {
class unk_func_002FC4D0_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20();
    virtual void unk_vf24();
    virtual void unk_vf28();
    virtual void unk_vf2C();
    virtual void unk_vf30(s32, f32);
};

typedef struct unk_func_002FC4D0_1 {
    u8 pad_00[0x14];
    f32 unk_14;
    u8 pad_18[4];
    s32 unk_1C;
    unk_func_002FC4D0_0 *unk_20;
} unk_func_002FC4D0_1;

typedef struct unk_func_002FC4D0_2 {
    u8 pad_00[0x18];
    f32 unk_18;
    u8 pad_1C[0x2C];
    u8 unk_48[4];
} unk_func_002FC4D0_2;

typedef struct unk_func_002FC4D0_3 {
    u8 pad_00[0x10];
    f32 unk_10;
} unk_func_002FC4D0_3;

unk_func_002FC4D0_2 *func_002F2390(...);
unk_func_002FC4D0_3 *func_002F7DB0(...);

void func_002FC4D0(unk_func_002FC4D0_1 *arg0, f32 arg1) {
    unk_func_002FC4D0_2 *s = func_002F2390();
    arg0->unk_14 = arg1;
    if (arg0->unk_1C != 0) {
        f32 t2;
        f32 f;

        unk_func_002FC4D0_3 *p = func_002F7DB0(s->unk_48);
        arg1 += s->unk_18 + p->unk_10;
        arg1 = 0.0625f * arg1;
        t2 = arg1 * arg1;
        f = 1.0f + (0.01125f * t2 + 0.0005625f * (t2 * arg1) + 0.15f * arg1);
        f = f * f;
        f = f * f;
        f = f * f;
        f = f * f;
        arg0->unk_20->unk_vf30(arg0->unk_1C, f);
    }
}
}
