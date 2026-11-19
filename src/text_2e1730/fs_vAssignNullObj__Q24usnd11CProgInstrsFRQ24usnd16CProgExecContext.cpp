#include "common.h"

extern "C" {
extern char D_0035BAB0[];
void func_002DF670(void *, void *);
s32 func_002DF380(void *);
void func_002DF2D0(void *, s32);
void func_002CDB60(void *, char *, void *);
void func_002DCF60(void *, void *);
void c4sdk_malloc(void *, s32);
}

namespace usnd {
class CProgExecContext {
public:
    u8 pad_00[0x10];
    s32 unk_10;
};

class CProgInstrs {
public:
    static void fs_vAssignNullObj(CProgExecContext &);
};

void CProgInstrs::fs_vAssignNullObj(CProgExecContext &arg0) {
    s32 sp20[10];
    s32 sp48;
    s32 sp4C;

    func_002DF670(sp20, &arg0);
    arg0.unk_10 += 4;
    switch (func_002DF380(sp20)) {
    default:
        func_002DF2D0(sp20, 0);
        break;
    case 0:
        func_002CDB60(&sp48, D_0035BAB0, &sp4C);
        func_002DCF60(&arg0, &sp48);
        c4sdk_malloc(&sp48, 0);
        break;
    }
}
}
