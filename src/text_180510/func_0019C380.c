/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
} unk_func_0019C380_0;

void func_0019C210();
void func_0019C2D0();
void func_0019C340();

void func_0019C380(unk_func_0019C380_0 *arg0, s32 arg1, u32 arg2) {
    switch (arg2) {
    case 0:
    case 2:
        func_0019C2D0(arg0->unk_04, arg1);
        break;
    case 1:
    case 3:
        func_0019C210(arg0->unk_04, arg1);
        break;
    case 4:
        func_0019C340(arg0->unk_04, arg1);
        break;
    case 5:
        func_0019C210(arg0->unk_04, 0);
        break;
    }
}
