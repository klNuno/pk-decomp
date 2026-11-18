#include "common.h"

class unk_func_00309510_2 {
public:
    virtual void unk_vf08();
    virtual s32 unk_vf0C();
};

typedef struct unk_func_00309510_1 {
    void *unk_00;
    s32 unk_04;
} unk_func_00309510_1;

typedef struct unk_func_00309510_0 {
    unk_func_00309510_1 *unk_00;
    void *unk_04;
    unk_func_00309510_2 **unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    void *unk_18;
} unk_func_00309510_0;

extern "C" {

extern u8 D_0035E9A0[];
extern u8 D_0035E9B4[];
extern u8 D_0035F050[];
extern u8 D_0035F06C[];
extern u8 D_0035F120[];

unk_func_00309510_0 *func_00309510(unk_func_00309510_0 *volatile arg0, s32 arg1, unk_func_00309510_2 **arg2, s32 arg3) {
    unk_func_00309510_0 *p;

    if ((s16)arg1) {
        p = arg0;
        p->unk_00 = (unk_func_00309510_1 *)&p->unk_18;
        arg0->unk_18 = D_0035F120;
    }
    p = arg0;
    p->unk_04 = D_0035E9A0;
    p->unk_00->unk_00 = D_0035E9B4;
    p->unk_00->unk_04 = (u8 *)&p->unk_08 - (u8 *)p->unk_00;
    arg0->unk_04 = D_0035F050;
    arg0->unk_00->unk_00 = D_0035F06C;
    p = arg0;
    p->unk_00->unk_04 = (u8 *)&p->unk_18 - (u8 *)p->unk_00;
    arg0->unk_08 = arg2;
    arg0->unk_0C = arg3;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_14 = (*arg0->unk_08)->unk_vf0C();
    return arg0;
}

}
