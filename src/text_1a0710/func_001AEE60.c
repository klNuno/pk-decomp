/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_001AEE60_0;

typedef struct {
    u8 pad_00[0x340];
    s32 unk_340[5];
} unk_func_001AEE60_1;

void func_001AED00();
unk_func_001AEE60_0 *func_001AEC20(s32);
void func_0016EDC0(s32 *, s32);
void func_0016DF10(s32, f32, f32);
void func_001B3B60();
extern unk_func_001AEE60_1 D_005AB790;

void func_001AEE60(void) {
    s32 i;
    unk_func_001AEE60_0 *p;

    func_001AED00();
    for (i = 0; i <= 4; i++) {
        p = func_001AEC20(i);
        func_0016EDC0(&p->unk_08, 0x67);
        func_0016DF10(p->unk_08, 1.5f, 0.75f);
        D_005AB790.unk_340[i] = p->unk_08;
    }
    func_001B3B60();
    func_001AED00();
}
