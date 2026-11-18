#include "common.h"

namespace usnd {
class CProgExecContext;
}

class unk_fs_vOutputDebugString_0 {
public:
    virtual void unk_vf08();
    virtual void unk_vf0C();
    virtual void unk_vf10();
    virtual void unk_vf14();
    virtual void unk_vf18(usnd::CProgExecContext &, void *);
};

extern "C" {
extern char D_0035B850[];
void func_00304110();
unk_fs_vOutputDebugString_0 *func_002E0780();
void func_002CDB60(void *, void *, void *);
void func_002CDC10(void *, void *);
void c4sdk_malloc(void *, s32);
}

namespace usnd {
class CProgExecLib {
public:
    static void fs_vOutputDebugString(CProgExecContext &, unsigned char *);
};

void CProgExecLib::fs_vOutputDebugString(CProgExecContext &arg0, unsigned char *arg1) {
    s32 temp;
    s32 sp34;
    s32 sp38;
    s32 sp3C;

    temp = *(s32 *)arg1;
    if (temp != 0) {
        func_00304110();
        func_002E0780()->unk_vf18(arg0, (void *)temp);
        return;
    }
    func_002CDB60(&sp38, D_0035B850, &sp3C);
    func_002CDC10(&sp34, &sp38);
    c4sdk_malloc(&sp38, 0);
    func_00304110();
    func_002E0780()->unk_vf18(arg0, &sp34);
    c4sdk_malloc(&sp34, 0);
}
}
