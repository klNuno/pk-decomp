#include "common.h"

class unk_func_002E4C30_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18();
    virtual void unk_vf1C(s32 *, s32);
};

typedef struct unk_func_002E4C30_1 {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[4];
    s32 unk_18;
    s32 unk_1C;
    u8 pad_20[4];
    s32 unk_24;
    u8 pad_28[8];
    u32 unk_30;
    unk_func_002E4C30_0 *unk_34;
    u8 pad_38[8];
    u32 unk_40;
} unk_func_002E4C30_1;

extern "C" {
void c4sdk_malloc(s32 *, s32);
void func_002CD690(s32 *, s32 *, s32, s32);
void func_002CDB60(s32 *, s32, s32 *);
void func_002D0DA0(s32 *, s32 *);

void func_002E4C30(unk_func_002E4C30_1 *arg0) {
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 pos;
    s32 off;
    s32 p;

    func_002D0DA0(&sp20, &sp28);
    pos = arg0->unk_10;
    off = *(s32 *)(arg0->unk_24 + (pos + 4));
    arg0->unk_10 = pos + 8;
    func_002CDB60(&sp24, arg0->unk_1C + off, &sp2C);
    func_002CD690(&sp20, &sp24, 0, -1);
    c4sdk_malloc(&sp24, 0);
    p = 0;
    if (arg0->unk_40 < arg0->unk_30) {
        p = arg0->unk_18 + arg0->unk_40;
    }
    if (arg0->unk_34 != NULL) {
        arg0->unk_34->unk_vf1C(&sp20, p);
    }
    c4sdk_malloc(&sp20, 0);
}
}
