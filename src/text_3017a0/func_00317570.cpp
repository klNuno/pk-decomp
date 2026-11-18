#include "common.h"

class unk_func_00317570_1 {
public:
    s32 unk_00;
    virtual void unk_vf08(void *, s32);
};

typedef struct unk_func_00317570_0 {
    u8 pad_00[0xC];
    f32 unk_0C;
    u8 pad_10[0x94];
    u8 unk_A4[0x20];
    u8 unk_C4[0xC];
    u8 unk_D0[4];
} unk_func_00317570_0;

extern "C" {
unk_func_00317570_1 *func_00317510(void *, s32 *);
void func_00317710(void *);
void func_00317890(void *, void *, void *);
void func_00317A60(void *, void *, f32);
void func_00317C10(void *);
void func_00317F00(void *);

void func_00317570(unk_func_00317570_0 *arg0) {
    s32 sp3C;
    unk_func_00317570_1 *p;

    sp3C = 0;
    p = func_00317510(arg0->unk_A4, &sp3C);
    func_00317710(arg0->unk_C4);
    while (p != 0) {
        p->unk_vf08(arg0->unk_C4, 0);
        p = func_00317510(arg0->unk_A4, &sp3C);
    }
    func_00317F00(arg0->unk_D0);
    func_00317A60(arg0->unk_C4, arg0->unk_C4, 1.0f / arg0->unk_0C);
    func_00317890(arg0->unk_D0, arg0->unk_C4, arg0->unk_D0);
    func_00317C10(arg0->unk_D0);
}
}
