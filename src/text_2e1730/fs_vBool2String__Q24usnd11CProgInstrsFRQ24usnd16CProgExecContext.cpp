#include "common.h"

namespace usnd {
class CProgExecContext {
public:
    u8 pad_00[0x10];
    s32 unk_10;
};

class CProgInstrs {
public:
    static void fs_vBool2String(CProgExecContext &arg0);
};
}

typedef struct {
    u8 pad_00[0x18];
} unk_fs_vBool2String_0;

extern "C" {
void c4sdk_malloc(...);
s32 func_0011D3F8(...);
void func_002D0DA0(...);
void func_002D3AD0(...);
void func_002DB430(...);
void func_002E9CC0(...);
u8 func_002EA240(...);
void func_002EA580(...);
extern char D_0035BA80[];
extern char D_0035BA88[];
}

void usnd::CProgInstrs::fs_vBool2String(CProgExecContext &arg0) {
    unk_fs_vBool2String_0 sp20;
    s32 sp38;
    s16 sp3C;
    u8 sp3F;
    u8 temp;

    func_002EA580(&sp20, &arg0);
    arg0.unk_10 += 4;
    temp = func_002EA240(&sp20);
    func_002DB430(&arg0, &sp3F);
    if (temp) {
        func_002D0DA0(&sp38, &sp3C);
        if (sp3F) {
            func_002D3AD0(&sp38, D_0035BA80, func_0011D3F8(D_0035BA80));
            func_002E9CC0(&sp20, &sp38);
        } else {
            func_002D3AD0(&sp38, D_0035BA88, func_0011D3F8(D_0035BA88));
            func_002E9CC0(&sp20, &sp38);
        }
        c4sdk_malloc(&sp38, 0);
    }
}
