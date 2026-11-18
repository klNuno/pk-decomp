/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00209840_0;

void func_0015C530(u8, f32 *);
extern u8 D_00360190;

s32 func_00209840(s32 arg0, unk_func_00209840_0 *arg1) {
    f32 buf[3];

    arg0 = arg0;
    func_0015C530(D_00360190, buf);
    arg1->unk_00 = ((s32 *)buf)[0];
    arg1->unk_04 = ((s32 *)buf)[1];
    arg1->unk_08 = ((s32 *)buf)[2];
    arg1->unk_0C = 0x15;
    return 1;
}
