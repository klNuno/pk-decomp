#include "common.h"

class unk_fs_vMethodCall_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C(s32, s32);
};

extern "C" {
extern u8 D_0035B9A0[];

void func_002CDB60(void *, void *, void *);
void c4sdk_malloc(void *, s32);
}

namespace usnd {
class CProgExecContext {
public:
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[4];
    s32 unk_18;
    u8 pad_1C[0x24];
    s32 unk_40;
};

class CProgInstrs {
public:
    static void fs_vMethodCall(CProgExecContext &);
};
}

extern "C" {
void func_002DBC60(usnd::CProgExecContext *, unk_fs_vMethodCall_0 **);
void func_002DCB20(usnd::CProgExecContext *, s32 *);
void func_002DCF60(usnd::CProgExecContext *, void *);
}

namespace usnd {
void CProgInstrs::fs_vMethodCall(CProgExecContext &arg0) {
    s32 sp20;
    unk_fs_vMethodCall_0 *sp24 = 0;
    s32 sp28;
    s32 sp2C;

    arg0.unk_10 += 4;
    func_002DBC60(&arg0, &sp24);
    func_002DCB20(&arg0, &sp20);
    if (sp24 != 0) {
        sp24->unk_vf0C(sp20, arg0.unk_18 + arg0.unk_40);
    } else {
        func_002CDB60(&sp28, D_0035B9A0, &sp2C);
        func_002DCF60(&arg0, &sp28);
        c4sdk_malloc(&sp28, 0);
    }
}
}
