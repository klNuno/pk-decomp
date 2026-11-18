/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x108];
    s32 unk_108;
    u8 pad_10C[0x108];
    u8 unk_214[0x40];
    f32 unk_254;
} unk_func_0024F1E0_0;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} unk_func_0024F1E0_1;

void func_00257450(unk_func_0024F1E0_1 *, s32);
f32 func_002576F0(void *, unk_func_0024F1E0_1 *);

void func_0024F1E0(unk_func_0024F1E0_0 *arg0) {
    unk_func_0024F1E0_1 temp;

    func_00257450(&temp, arg0->unk_108);
    arg0->unk_254 = func_002576F0(arg0->unk_214, &temp);
}
