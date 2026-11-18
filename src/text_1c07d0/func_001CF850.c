/* profile: o0_301_p */
#include "common.h"

s32 fn_bLoadDefaultGameOptions();
s32 fn_bLoadGameOptions(void *);
void func_001CFEB0();
extern s32 D_00360068;
extern s32 D_0036006C;
extern u8 D_005EBFE0[];
extern s32 D_005ECA48[];
extern s32 D_005ECA4C[];
extern s32 D_005ECA58[];
extern s32 D_005ECA5C[];
extern s32 D_005ECA60[];
extern s32 D_005ECA64[];

s32 func_001CF850(void) {
    s32 i;
    u8 ok;

    ok = 1;
    func_001CFEB0();
    if (!fn_bLoadGameOptions(D_005EBFE0) && !fn_bLoadDefaultGameOptions()) {
        ok = 0;
    }
    if (!ok) {
        D_005ECA58[0] = 0x7F;
        D_005ECA5C[0] = 0x7F;
        D_005ECA60[0] = 0x7F;
        D_005ECA64[0] = 0x7F;
        D_005ECA48[0] = 0;
        D_005ECA4C[0] = 0;
        for (i = 0; i < 100; i++) {
        }
        D_0036006C = 0;
        D_00360068 = 0;
    }
    return ok;
}
