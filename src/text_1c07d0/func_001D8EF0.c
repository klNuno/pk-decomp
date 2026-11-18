/* profile: o0 */
#include "common.h"

s32 func_0010D308(u8 *);
void func_0011B418(char *);
void func_00284C10(u8 *);
extern char D_0034C0B0[];
extern char D_0034C0C8[];

s32 func_001D8EF0(void) {
    s32 temp = 0;
    u8 sp28[8];

    if (func_0010D308(sp28) == 0) {
        func_0011B418(D_0034C0B0);
        return 0;
    }
    if (sp28[0] != 0) {
        func_0011B418(D_0034C0C8);
        return 0;
    }
    func_00284C10(sp28);
    temp = sp28[7] + 0x7D0;
    return temp;
}
