#include "common.h"

typedef struct unk_func_002FFD50_0 {
    u8 pad_00[0x14];
    s32 unk_14;
} unk_func_002FFD50_0;

class unk_func_002FFD50_1 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual unk_func_002FFD50_0 *unk_vf14(s32, s32);
};

typedef struct unk_func_002FFD50_2 {
    s32 unk_00;
    unk_func_002FFD50_0 *unk_04;
} unk_func_002FFD50_2;

typedef struct unk_func_002FFD50_3 {
    u8 pad_00[8];
} unk_func_002FFD50_3;

extern "C" {
s32 func_002CEA20(s32);
void func_003001C0(unk_func_002FFD50_3 *, u8 *, unk_func_002FFD50_2 *);

unk_func_002FFD50_0 *func_002FFD50(u8 *arg0, s32 arg1, unk_func_002FFD50_1 *arg2, s32 arg3) {
    unk_func_002FFD50_3 sp30;
    unk_func_002FFD50_2 sp38;
    unk_func_002FFD50_0 *temp = arg2->unk_vf14(arg1, arg3);

    sp38.unk_00 = func_002CEA20(temp->unk_14);
    sp38.unk_04 = temp;
    func_003001C0(&sp30, arg0 + 4, &sp38);
    return temp;
}
}
