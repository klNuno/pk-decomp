#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_002F07C0_0;

class unk_func_002F07C0_2 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(s32, void *);
};

typedef struct {
    s32 unk_00;
    f32 unk_04;
} unk_func_002F07C0_3;

typedef struct {
    u8 pad_00[4];
    unk_func_002F07C0_2 *unk_04;
    u8 unk_08[0x10];
    f32 unk_18;
    f32 unk_1C;
} unk_func_002F07C0_4;

extern "C" {
unk_func_002F07C0_0 **func_002EBE10(...);
unk_func_002F07C0_0 *func_002EBE00(...);
f32 func_002CD650(...);
void func_002CFEF0(...);
extern unk_func_002F07C0_3 D_0035F728;
void func_002F07C0(unk_func_002F07C0_4 *arg0);
}

void func_002F07C0(unk_func_002F07C0_4 *arg0) {
    unk_func_002F07C0_0 *temp;
    unk_func_002F07C0_0 *temp3;

    arg0->unk_1C = arg0->unk_18;
    for (temp = *func_002EBE10(arg0->unk_08); (temp3 = func_002EBE00(arg0->unk_08), temp != temp3); func_002CFEF0(&temp)) {
        arg0->unk_1C = arg0->unk_1C * func_002CD650(temp->unk_14);
    }
    {
        unk_func_002F07C0_3 temp2 = D_0035F728;
        temp2.unk_04 = arg0->unk_1C;
        arg0->unk_04->unk_vf0C(0x10, &temp2);
    }
}
