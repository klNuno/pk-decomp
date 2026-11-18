/* profile: o0 */
#include "common.h"

void func_0011CBB0();
void Erm_fn_v_Printsz();
extern char D_0034BDD0[];
extern char D_0034BDE8[];

void func_001D66D0(s32 arg0, s32 arg1) {
    char buf[0x400];

    if (arg0 != 0) {
        func_0011CBB0(buf, D_0034BDD0, arg0, arg1);
    } else {
        func_0011CBB0(buf, D_0034BDE8, arg1);
    }
    Erm_fn_v_Printsz(buf);
}
