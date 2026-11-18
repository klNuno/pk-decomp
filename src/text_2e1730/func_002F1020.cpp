#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_002F1020_0;

class unk_func_002F1020_1 {
public:
    unk_func_002F1020_0 *unk_00;
    bool operator!=(unk_func_002F1020_0 *p) const { return unk_00 != p; }
};

typedef struct {
    s32 unk_00;
    f32 unk_04;
} unk_func_002F1020_2;

class unk_func_002F1020_3 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(s32, unk_func_002F1020_2 *);
};

typedef struct {
    u8 pad_00[0x4];
    unk_func_002F1020_3 *unk_04;
    u8 unk_08[0x10];
    f32 unk_18;
    f32 unk_1C;
} unk_func_002F1020_4;

extern "C" {
f32 func_002CD650(s32);
void func_002CFEF0(unk_func_002F1020_1 *);
unk_func_002F1020_0 *func_002EBE00(void *);
unk_func_002F1020_1 *func_002EBE10(void *);
extern unk_func_002F1020_2 D_0035F730;

void func_002F1020(unk_func_002F1020_4 *arg0);
}

void func_002F1020(unk_func_002F1020_4 *arg0) {
    unk_func_002F1020_1 it;

    arg0->unk_1C = arg0->unk_18;
    for (it = *func_002EBE10(arg0->unk_08); it != func_002EBE00(arg0->unk_08); func_002CFEF0(&it)) {
        arg0->unk_1C += func_002CD650(it.unk_00->unk_14);
    }
    {
        unk_func_002F1020_2 v = D_0035F730;
        v.unk_04 = arg0->unk_1C;
        arg0->unk_04->unk_vf0C(10, &v);
    }
}
