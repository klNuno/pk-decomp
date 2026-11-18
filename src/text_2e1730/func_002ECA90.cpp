#include "common.h"

typedef struct unk_func_002ECA90_0 {
    s32 unk_00;
    u8 pad_04[0x14];
    struct unk_func_002ECA90_0 *unk_18;
} unk_func_002ECA90_0;

typedef struct {
    u8 pad_00[0x28];
    unk_func_002ECA90_0 *unk_28;
    u8 pad_2C[0xC];
    s32 unk_38;
} unk_func_002ECA90_1;

class unk_func_002ECA90_2 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(s32, s32);
};

extern "C" {
void func_002F0A20(unk_func_002ECA90_0 *);
void func_002F0AC0(unk_func_002ECA90_0 *);
void func_00304530(s32, unk_func_002ECA90_0 *);
s32 func_00304590();
extern unk_func_002ECA90_2 *D_00360634;

void func_002ECA90(unk_func_002ECA90_1 *arg0, s32 arg1);
}

void func_002ECA90(unk_func_002ECA90_1 *arg0, s32 arg1) {
    unk_func_002ECA90_0 *p;

    for (p = arg0->unk_28; p != 0; p = p->unk_18) {
        if (p->unk_00 == arg1) {
            break;
        }
    }
    func_002F0A20(p);
    func_002F0AC0(p);
    func_00304530(func_00304590(), p);
    if (D_00360634 != 0) {
        D_00360634->unk_vf0C(arg0->unk_38, p->unk_00);
    }
}
