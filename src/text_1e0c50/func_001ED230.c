/* profile: o0 */
#include "common.h"

typedef struct unk_func_001ED230_0 {
    u8 unk_00;
    u8 unk_01;
} unk_func_001ED230_0;

void func_001B2DF0(s32, u8, u8, s32 *, u16 *);
void func_001EC3E0(unk_func_001ED230_0 *, s32);
extern s32 D_00603EA0[];

void func_001ED230(unk_func_001ED230_0 *arg0, s32 arg1, u8 arg2, s16 arg3) {
    u16 i;
    u16 count;

    arg0->unk_00 = 0;
    count = arg0->unk_01;
    func_001B2DF0(arg1, arg2, (u8)arg3, D_00603EA0, &count);
    for (i = 0; i < count; i++) {
        func_001EC3E0(arg0, D_00603EA0[i]);
    }
}
