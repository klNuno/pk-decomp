#include "common.h"

namespace usnd {
class CProgExecContext {
public:
    u8 pad_00[0x10];
    s32 unk_10;
};

class CProgInstrs {
public:
    static void fs_vConstrString(CProgExecContext &);
};
}

extern "C" {
void c4sdk_malloc(void *, s32);
void func_002CDB60(void *, void *, void *);
void func_002D0DA0(void *, void *);
void *func_002D2BC0(s32);
void func_002DBF50(usnd::CProgExecContext *, u8 **, s32 *);
void func_002DCF60(usnd::CProgExecContext *, void *);
extern char D_0035BA50[];
}

void usnd::CProgInstrs::fs_vConstrString(CProgExecContext &arg0) {
    u8 *sp2C;
    s32 sp30;
    s32 sp34;

    arg0.unk_10 += 4;
    func_002DBF50(&arg0, &sp2C, &sp30);
    if (sp2C != NULL) {
        s32 sp38;
        void *p = func_002D2BC0(4);

        if (p != NULL) {
            func_002D0DA0(p, &sp38);
        }
        *(void **)(sp2C + sp30) = p;
        return;
    }
    {
        s32 sp3C;

        func_002CDB60(&sp34, D_0035BA50, &sp3C);
        func_002DCF60(&arg0, &sp34);
        c4sdk_malloc(&sp34, 0);
    }
}
