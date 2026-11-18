#include "common.h"

extern "C" {

class unk_func_002FC280_1 {
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
    virtual void unk_vf30();
    virtual void unk_vf34();
    virtual void unk_vf38(s32, f32);
};

typedef struct {
    u8 pad_00[0x10];
    f32 unk_10;
    u8 pad_14[8];
    s32 unk_1C;
    unk_func_002FC280_1 *unk_20;
    u8 pad_24[0x14];
    u8 unk_38[0xC];
    f32 unk_44[7];
    u32 unk_60;
} unk_func_002FC280_0;

void func_002FC280(unk_func_002FC280_0 *arg0) {
    u32 i;

    arg0->unk_10 = arg0->unk_44[0];
    for (i = 1; i < arg0->unk_60; i++) {
        if (arg0->unk_38[i]) {
            arg0->unk_10 *= arg0->unk_44[i];
        }
    }
    if (arg0->unk_1C != 0) {
        arg0->unk_20->unk_vf38(arg0->unk_1C, arg0->unk_10);
    }
}

}
