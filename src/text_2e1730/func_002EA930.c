#include "common.h"

s32 func_002EA9A0(s32);
void func_002EAA80(s32, s32 *);
void func_002EAAF0(s32 *, s32, s32 *);

s32 func_002EA930(s32 arg0, s32 arg1) {
    s32 sp38;
    s32 sp3C;

    sp38 = arg1;
    func_002EAAF0(&sp3C, arg0 + 4, &sp38);
    if (sp3C == func_002EA9A0(arg0 + 4)) {
        return 0;
    }
    func_002EAA80(arg0 + 4, &sp38);
    return 1;
}
