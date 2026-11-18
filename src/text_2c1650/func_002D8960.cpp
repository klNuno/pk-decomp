#include "common.h"

class unk_func_002D8960_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(...);
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C();
    virtual void unk_vf20(...);
};

class unk_func_002D8960_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(...);
};

extern "C" {
void func_00308C80(...);
void func_00119548(...);
extern s32 D_00360568;
extern unk_func_002D8960_1 *D_00360574;
extern unk_func_002D8960_0 *D_00360578;
extern s32 D_0036057C;
extern s32 D_00360580;
extern s32 D_00360588;

void func_002D8960(void);
}

void func_002D8960(void) {
    D_00360578->unk_vf20(D_0036057C);
    D_00360588 = 0;
    if (D_00360578 != 0) {
        D_00360578->unk_vf0C(1);
    }
    D_00360578 = 0;
    if (D_00360574 != 0) {
        D_00360574->unk_vf10(1);
    }
    D_00360574 = 0;
    func_00308C80(D_00360580);
    func_00119548(D_00360568);
    D_00360568 = 0;
}
