#include "common.h"

class unk_func_002F8110_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C(s32);
    virtual void unk_vf20();
    virtual void unk_vf24();
    virtual void unk_vf28();
    virtual void unk_vf2C();
    virtual void unk_vf30();
    virtual void unk_vf34();
    virtual void unk_vf38();
    virtual void unk_vf3C();
    virtual void unk_vf40(s32, f32);
};

extern "C" {
typedef struct {
    u8 pad_00[0xC];
    f32 unk_0C;
    u8 pad_10[4];
    f32 unk_14;
    u8 pad_18[4];
    s32 unk_1C;
    unk_func_002F8110_1 *unk_20;
} unk_func_002F8110_0;

void func_002F8170(...);
void func_002FC4D0(void *, f32);

void func_002F8110(unk_func_002F8110_0 *arg0) {
    func_002F8170(arg0);
    func_002FC4D0(arg0, arg0->unk_14);
    arg0->unk_20->unk_vf40(arg0->unk_1C, arg0->unk_0C);
    arg0->unk_20->unk_vf1C(arg0->unk_1C);
}
}
