/* profile: o0 */
#include "common.h"

void func_001DBA50();
void func_001DBBE0();
void func_001DD0E0();
void func_001DD330();
extern s32 D_0035FF58;
extern s32 D_0035FF5C;

void func_001B32A0(void) {
    s16 sp1E;

    func_001DD0E0(&D_0035FF5C, 0x1E, 4);
    func_001DBBE0(D_0035FF5C, &sp1E, 0xA);
    func_001DBA50(D_0035FF5C, &sp1E, 0xA);
    func_001DD330(D_0035FF5C);
    func_001DD0E0(&D_0035FF58, 0x1E, 4);
    func_001DBBE0(D_0035FF58, &sp1E, 0xA);
    func_001DBA50(D_0035FF58, &sp1E, 0xA);
    func_001DD330(D_0035FF58);
}
