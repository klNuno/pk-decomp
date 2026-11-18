#include "common.h"

typedef struct unk_func_002E8620_3 {
    s32 unk_00;
    u8 unk_04[0x10];
} unk_func_002E8620_3;

typedef struct unk_func_002E8620_0 {
    void *unk_00;
    u8 pad_04[0x8];
    unk_func_002E8620_3 unk_0C;
    s32 unk_20;
    u8 unk_24[0x14];
    void *unk_38;
    u8 unk_3C;
    u8 pad_3D[0x3];
    s32 unk_40;
} unk_func_002E8620_0;

typedef struct unk_func_002E8620_1 {
    s32 unk_00;
} unk_func_002E8620_1;

class unk_func_002E8620_2 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(unk_func_002E8620_0 *);
};

extern "C" {
s32 func_002E8E60();
void func_002F23F0(unk_func_002E8620_0 *, s32, s32);
void func_002E87A0(void *, unk_func_002E8620_1 *);
s32 func_00308CA0();
void func_002E0B60(void *);
s32 func_002F2390(unk_func_002E8620_0 *);
s32 func_002E5E40(s32);
s32 func_002E0A10(void *, s32, s32, unk_func_002E8620_0 *);
void func_00304110();
unk_func_002E8620_2 *func_002E0780();
void func_002E50D0();
extern u8 D_0035E640[];

unk_func_002E8620_0 *func_002E8620(unk_func_002E8620_0 *volatile arg0, s32 arg1) {
    unk_func_002E8620_1 sp2C;

    func_002F23F0(arg0, arg1, func_002E8E60());
    arg0->unk_00 = D_0035E640;
    {
        unk_func_002E8620_3 *temp = &arg0->unk_0C;
        temp->unk_00 = 1;
        func_002E87A0(temp->unk_04, &sp2C);
    }
    arg0->unk_20 = func_00308CA0();
    func_002E0B60(arg0->unk_24);
    arg0->unk_38 = (void *)func_002E50D0;
    arg0->unk_3C = 0;
    arg0->unk_40 = 0;
    {
        s32 temp2 = func_002E5E40(func_002F2390(arg0));
        unk_func_002E8620_0 *temp3 = arg0;
        if (func_002E0A10(temp3->unk_24, arg1 + 0x1C, temp2, temp3) == 0) {
            return arg0;
        }
    }
    arg0->unk_3C = 1;
    func_00304110();
    func_002E0780()->unk_vf10(arg0);
    return arg0;
}
}
