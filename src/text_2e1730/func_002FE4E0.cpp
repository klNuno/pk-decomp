#include "common.h"

extern "C" {
class unk_func_002FE4E0_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(void *);
};

typedef struct unk_func_002FE4E0_1 {
    u8 pad_00[0xC];
    unk_func_002FE4E0_0 *unk_0C;
} unk_func_002FE4E0_1;

typedef struct unk_func_002FE4E0_2 {
    u8 pad_00[0xC];
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    u8 pad_18[0x1C];
    u8 unk_34[4];
} unk_func_002FE4E0_2;

unk_func_002FE4E0_1 **func_002FE4D0(void *);
unk_func_002FE4E0_1 *func_002FE4B0(void *);
unk_func_002FE4E0_1 **func_002FE4C0(unk_func_002FE4E0_1 **, unk_func_002FE4E0_1 *);
void func_002CFEF0(unk_func_002FE4E0_1 **);

void func_002FE4E0(unk_func_002FE4E0_2 *arg0, f32 arg1, f32 arg2, f32 arg3) {
    unk_func_002FE4E0_1 *sp24;
    unk_func_002FE4E0_1 *sp28;
    unk_func_002FE4E0_1 *sp2C;

    arg0->unk_0C = arg1;
    arg0->unk_10 = arg2;
    arg0->unk_14 = arg3;
    func_002FE4C0(&sp28, *func_002FE4D0(arg0->unk_34));
    for (sp24 = sp28; func_002FE4C0(&sp2C, func_002FE4B0(arg0->unk_34)), sp24 != sp2C; func_002CFEF0(&sp24)) {
        sp24->unk_0C->unk_vf0C(arg0);
    }
}
}
