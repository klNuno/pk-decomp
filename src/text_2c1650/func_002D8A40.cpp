#include "common.h"

class unk_func_002D8A40_0 {
public:
    virtual void unk_vf08(...);
    virtual void unk_vf0C();
    virtual s32 unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20();
    virtual void unk_vf24();
    virtual void unk_vf28();
    virtual void unk_vf2C();
    virtual void unk_vf30(s32, f32);
};

extern "C" {

void *malloc(...);
s32 func_00308CA0(...);
void *func_00304C50(...);
s32 func_0030E120(...);
void *func_002D2BC0(...);
unk_func_002D8A40_0 *func_003075D0(...);
void func_002D8D10(...);
extern void *D_00360568;
extern s32 D_0036056C;
extern s32 D_00360570;
extern s32 D_00360574;
extern unk_func_002D8A40_0 *D_00360578;
extern s32 D_0036057C;
extern s32 D_00360580;
extern s32 D_00360584;
extern s32 D_00360588;

void func_002D8A40(s32 arg0, s32 arg1, f32 arg2) {
    void *temp;
    unk_func_002D8A40_0 *temp2;

    D_00360568 = malloc(0x40000);
    D_0036056C = 0;
    D_00360570 = 0;
    D_00360584 = 0;
    D_00360588 = 0;
    D_00360580 = func_00308CA0();
    temp = func_00304C50(0xC);
    if (temp != 0) {
        temp = (void *)func_0030E120(temp, func_002D8D10);
    }
    D_00360574 = (s32)temp;
    temp2 = (unk_func_002D8A40_0 *)func_002D2BC0(0x1C);
    if (temp2 != 0) {
        temp2 = func_003075D0(temp2, arg0, arg1);
    }
    D_00360578 = temp2;
    temp2->unk_vf08(D_00360574, 0, 0);
    D_0036057C = D_00360578->unk_vf10();
    D_00360578->unk_vf30(D_0036057C, arg2);
}

}
