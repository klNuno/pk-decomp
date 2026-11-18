#include "common.h"

typedef struct unk_fs_vEqNULLObj_0 {
    u8 pad_00[0x14];
} unk_fs_vEqNULLObj_0;

extern "C" {
extern u8 D_0035BA20[];

void func_002CDB60(void *, void *, void *);
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
    static void fs_vEqNULLObj(CProgExecContext &);
};
}

extern "C" {
void func_002DD690(unk_fs_vEqNULLObj_0 *, usnd::CProgExecContext *);
u8 func_002DD340(unk_fs_vEqNULLObj_0 *);
void func_002DBC60(usnd::CProgExecContext *, s32 *);
void func_002DD2F0(unk_fs_vEqNULLObj_0 *, s32);
void func_002DCF60(usnd::CProgExecContext *, void *);
}

namespace usnd {
void CProgInstrs::fs_vEqNULLObj(CProgExecContext &arg0) {
    unk_fs_vEqNULLObj_0 sp30;
    u8 temp;
    s32 sp44;
    s32 sp48;
    s32 sp4C;

    func_002DD690(&sp30, &arg0);
    sp44 = 0;
    arg0.unk_10 += 4;
    temp = func_002DD340(&sp30);
    func_002DBC60(&arg0, &sp44);
    if (temp) {
        func_002DD2F0(&sp30, sp44 == 0);
    } else {
        func_002CDB60(&sp48, D_0035BA20, &sp4C);
        func_002DCF60(&arg0, &sp48);
        c4sdk_malloc(&sp48, 0);
    }
}
}
