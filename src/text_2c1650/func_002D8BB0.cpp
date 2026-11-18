#include "common.h"

class unk_func_002D8BB0_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C(s32);
    virtual void unk_vf20();
    virtual void unk_vf24(s32);
};

extern "C" {
void func_00308BE0(s32);
void func_00308B80(s32);
void *memcpy(void *, const void *, u32);
extern u8 *D_00360568;
extern u32 D_0036056C;
extern u32 D_00360570;
extern unk_func_002D8BB0_0 *D_00360578;
extern s32 D_0036057C;
extern s32 D_00360580;
extern u32 D_00360584;
extern volatile s32 D_00360588;
extern volatile s32 D_0036058C;

s32 func_002D8BB0(u8 *arg0, u32 arg1) {
    u32 done;
    u32 n;
    u32 pos;

    done = 0;
    func_00308BE0(D_00360580);
    if (D_00360570 + arg1 > 0x40000) {
        func_00308B80(D_00360580);
        return -1;
    }
    while (arg1 != 0) {
        pos = (D_0036056C + D_00360570) & 0x3FFFF;
        n = (arg1 + pos <= 0x40000) ? arg1 : 0x40000 - pos;
        memcpy(D_00360568 + pos, arg0 + done, n);
        arg1 -= n;
        done += n;
        D_00360570 += n;
    }
    D_00360584 += done;
    if (D_00360588 == 0 && D_00360584 >= 0x10000) {
        D_00360578->unk_vf1C(D_0036057C);
        D_00360578->unk_vf24(D_0036057C);
        D_00360588 = 1;
        D_0036058C = 0;
    }
    func_00308B80(D_00360580);
    return done;
}
}
