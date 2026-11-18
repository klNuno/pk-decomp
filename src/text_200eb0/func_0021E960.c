/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[3];
    u8 unk_03;
    u8 pad_04[8];
    s32 unk_0C;
} unk_func_0021E960_0;

s32 func_0021E820(s32, s32, unk_func_0021E960_0 *);
s32 func_0021E870(s32, s32, unk_func_0021E960_0 *);
s32 func_0021E8C0(s32, s32, unk_func_0021E960_0 *);

s32 func_0021E960(s32 arg0, s32 arg1, unk_func_0021E960_0 *arg2) {
    arg2->unk_03 = 0;
    arg1 = func_0021E820(arg0, arg1, arg2);
    arg1 = func_0021E870(arg0, arg1, arg2);
    arg1 = func_0021E8C0(arg0, arg1, arg2);
    arg2->unk_0C = 0x28;
    return arg1;
}
