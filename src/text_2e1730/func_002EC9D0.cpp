#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_002EC9D0_0;

class unk_func_002EC9D0_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual unk_func_002EC9D0_0 *unk_vf14(s32 *, s32);
};

class unk_func_002EC9D0_2 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10(s32, unk_func_002EC9D0_0 *);
};

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_002EC9D0_3;

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 unk_3C[4];
} unk_func_002EC9D0_4;

typedef struct {
    s32 unk_00;
    unk_func_002EC9D0_0 *unk_04;
} unk_func_002EC9D0_5;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_002EC9D0_6;

extern "C" {
void c4sdk_malloc(s32 *, s32);
void func_002CDB60(s32 *, s32, s32 *);
s32 func_002CEA20(s32);
void func_002EDCF0(unk_func_002EC9D0_6 *, u8 *, unk_func_002EC9D0_5 *);
extern unk_func_002EC9D0_2 *D_00360634;

unk_func_002EC9D0_0 *func_002EC9D0(unk_func_002EC9D0_4 *arg0, unk_func_002EC9D0_3 **arg1, unk_func_002EC9D0_1 *arg2, s32 arg3) {
    unk_func_002EC9D0_6 sp48;
    unk_func_002EC9D0_5 sp50;
    s32 sp58;
    s32 sp5C;
    unk_func_002EC9D0_0 *temp_s0;

    func_002CDB60(&sp58, (*arg1)->unk_0C, &sp5C);
    temp_s0 = arg2->unk_vf14(&sp58, arg3);
    c4sdk_malloc(&sp58, 0);
    sp50.unk_00 = func_002CEA20(temp_s0->unk_14);
    sp50.unk_04 = temp_s0;
    func_002EDCF0(&sp48, arg0->unk_3C, &sp50);
    if (D_00360634 != NULL) {
        D_00360634->unk_vf10(arg0->unk_38, temp_s0);
    }
    return temp_s0;
}
}
