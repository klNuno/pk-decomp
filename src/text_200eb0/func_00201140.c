/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
} unk_func_00201140_0;

void func_001B5C50();
void func_00200970(unk_func_00201140_0 *, s32, s32, s32, f32, f32, s32);
extern s8 D_0035F590;
extern f32 D_005AD8A8[];
extern f32 D_005AD8AC[];
extern s16 D_005AD8E2[];

void func_00201140(unk_func_00201140_0 *arg0, s32 arg1, s32 arg2) {
    if (D_0035F590) {
        func_001B5C50(arg0->unk_08);
    }
    func_00200970(arg0, arg1, arg2, D_005AD8E2[0], D_005AD8A8[0], D_005AD8AC[0], arg0->unk_08);
}
