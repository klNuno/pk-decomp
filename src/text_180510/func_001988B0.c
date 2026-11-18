/* profile: o0 */
#include "common.h"

void func_00155C70(void *);
void func_002D4D30();
void func_0019AD50(s32);
extern u8 D_005ABDD0[];
extern u8 D_005ABE30[];
extern u8 D_005ACAD1[];

void func_001988B0(void) {
    func_00155C70(D_005ABDD0);
    func_00155C70(D_005ABE30);
    D_005ACAD1[0] = 0;
    func_002D4D30();
    func_0019AD50(8);
}
