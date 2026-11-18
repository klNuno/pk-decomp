#include "common.h"

namespace usnd {
class CProgExecContext {
public:
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[4];
    u8 *unk_18;
    u8 pad_1C[0x14];
    u32 unk_30;
    u8 pad_34[0xC];
    u32 unk_40;
};

class CProgInstrs {
public:
    static void fs_vLibFnCall(CProgExecContext &);
};
}

typedef void (*unk_func_002E29B0_0)(usnd::CProgExecContext *, u8 *);

extern "C" {
void func_002DCB20(usnd::CProgExecContext *, s32 *);
unk_func_002E29B0_0 func_002E08E0(s32);
void func_002CDB60(void *, void *, void *);
void func_002DD020(usnd::CProgExecContext *, void *);
void c4sdk_malloc(void *, s32);
extern char D_0035B9F0[];
}

void usnd::CProgInstrs::fs_vLibFnCall(CProgExecContext &arg0) {
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    unk_func_002E29B0_0 temp_v0;
    u8 *var_a1;

    arg0.unk_10 += 4;
    func_002DCB20(&arg0, &sp24);
    temp_v0 = func_002E08E0(sp24);
    if (temp_v0 == 0) {
        func_002CDB60(&sp28, D_0035B9F0, &sp2C);
        func_002DD020(&arg0, &sp28);
        c4sdk_malloc(&sp28, 0);
        return;
    }
    var_a1 = 0;
    if (arg0.unk_40 < arg0.unk_30) {
        var_a1 = arg0.unk_18 + arg0.unk_40;
    }
    temp_v0(&arg0, var_a1);
}
