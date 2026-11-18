#include "common.h"

class unk_func_00313790_0 {
public:
    u8 pad_00[0x60];
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18(s32, s32);
};

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} unk_func_00313790_1;

extern "C" {
extern unk_func_00313790_0 *D_003608AC;
void func_00319E40(s32);
void *func_00304C50(s32);
unk_func_00313790_0 *func_00313D90(void *);
s32 func_00138680(s32);
void func_00313AE0(s32, s32, unk_func_00313790_1 *, f32);
void func_003139D0();
void func_00313A30();
void func_003139B0(s32);

void func_00313790(s32 arg0, s32 arg1) {
    unk_func_00313790_1 v;
    void *p;
    s32 temp;

    func_00319E40(arg1);
    if (D_003608AC == 0) {
        p = func_00304C50(0x80);
        if (p != 0) {
            p = func_00313D90(p);
        }
        D_003608AC = (unk_func_00313790_0 *)p;
    }
    temp = func_00138680(arg0);
    D_003608AC->unk_vf18(arg1, temp);
    v.unk_00 = 0.0f;
    v.unk_04 = 1.0f;
    v.unk_08 = 0.0f;
    func_00313AE0(temp, 0, &v, 150.0f);
    func_003139D0();
    func_00313A30();
    func_003139D0();
    func_003139B0(100);
}
}
