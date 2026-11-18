#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} unk_func_002E0400_0;

void func_002DEB50();
s32 func_002DEF70();
void func_002DF290();

void func_002E0400(s32 arg0, unk_func_002E0400_0 *arg1) {
    s32 sp20[4];

    func_002DF290(sp20, arg0);
    if (func_002DEF70(sp20) != 0) {
        s32 a = arg1->unk_00;
        s32 b = arg1->unk_04;
        if (b == 0) {
            func_002DEB50(sp20, 0);
        } else {
            func_002DEB50(sp20, a % b);
        }
    }
}
