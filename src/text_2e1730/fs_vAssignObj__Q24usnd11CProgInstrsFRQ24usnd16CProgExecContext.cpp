#include "common.h"

typedef struct unk_fs_vAssignObj_0 {
    u8 pad_00[0x24];
} unk_fs_vAssignObj_0;

namespace usnd {
class CProgExecContext {
public:
    u8 pad_00[0x10];
    s32 unk_10;
};
class CProgInstrs {
public:
    static void fs_vAssignObj(CProgExecContext &);
};
}

extern "C" {
void c4sdk_malloc(void *, s32);
void func_002CDB60(void *, void *, void *);
void func_002DBC60(usnd::CProgExecContext *, s32 *);
void func_002DCF60(usnd::CProgExecContext *, void *);
void func_002DF2D0(unk_fs_vAssignObj_0 *, s32);
s32 func_002DF380(unk_fs_vAssignObj_0 *);
void func_002DF670(unk_fs_vAssignObj_0 *, usnd::CProgExecContext *);
extern u8 D_0035BA90[];
}

class unk_fs_vAssignObj_1 {
public:
    s32 unk_00;
    unk_fs_vAssignObj_1(u8 *arg0) {
        s32 sp;
        func_002CDB60(this, arg0, &sp);
    }
    ~unk_fs_vAssignObj_1() {
        c4sdk_malloc(this, 0);
    }
};

void usnd::CProgInstrs::fs_vAssignObj(CProgExecContext &arg0) {
    unk_fs_vAssignObj_0 sp20;
    s32 sp44;
    sp44 = 0;
    func_002DF670(&sp20, &arg0);
    arg0.unk_10 += 4;
    switch (func_002DF380(&sp20)) {
    default:
        func_002DBC60(&arg0, &sp44);
        func_002DF2D0(&sp20, sp44);
        break;
    case 0: {
        unk_fs_vAssignObj_1 sp48(D_0035BA90);
        func_002DCF60(&arg0, &sp48);
        func_002DBC60(&arg0, &sp44);
        break;
    }
    }
}
