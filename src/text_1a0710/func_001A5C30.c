/* profile: o0_301 */
#include "common.h"

void func_001681C0();
s32 func_00274010();
void func_0011CBB0();
s32 func_001DA0C0();
void func_001681D0();
extern char D_0034B310[];
extern char D_0034B318[];

void func_001A5C30(void) {
    char buf[256];

    func_001681C0();
    func_0011CBB0(buf, D_0034B310, func_00274010(), D_0034B318);
    func_001681D0(func_001DA0C0(buf));
}
