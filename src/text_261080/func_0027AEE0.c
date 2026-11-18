#include "common.h"

extern s32 D_00360380;
extern void *D_007AB310[];
void func_002D0340();
void func_002D8B30();
void func_00119548();
void func_002D8960();

void func_0027AEE0(void) {
    func_002D0340();
    func_002D8B30();
    D_00360380 = 0;
    if (D_007AB310[0] != 0) {
        func_00119548(D_007AB310[0]);
    }
    D_007AB310[0] = 0;
    func_002D8960();
}
