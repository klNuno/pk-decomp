#include "common.h"

class unk_func_002FC440_0 {
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
    virtual void unk_vf38();
    virtual void unk_vf3C();
    virtual void unk_vf40(void *, f32);
};

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_002FC440_1;

typedef struct {
    u8 pad_00[0xC];
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    void *unk_1C;
    unk_func_002FC440_0 *unk_20;
    u8 pad_24[4];
    f32 unk_28;
    u8 pad_2C[0x1C];
    f32 unk_48;
} unk_func_002FC440_2;

extern "C" {
void func_002FC280(unk_func_002FC440_2 *);
void func_002FC310(unk_func_002FC440_2 *);

void func_002FC440(unk_func_002FC440_2 *arg0, unk_func_002FC440_1 *arg1) {
    arg0->unk_0C = arg1->unk_00;
    arg0->unk_10 = arg1->unk_04;
    arg0->unk_14 = arg1->unk_08;
    arg0->unk_18 = arg1->unk_0C;
    if (arg0->unk_1C != NULL) {
        arg0->unk_28 = arg1->unk_08;
        func_002FC310(arg0);
        arg0->unk_48 = arg1->unk_04;
        func_002FC280(arg0);
        arg0->unk_20->unk_vf40(arg0->unk_1C, arg1->unk_00);
    }
}
}
