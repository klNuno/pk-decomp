/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    u32 unk_04;
    u8 pad_08[0xA4 - 8];
    s32 unk_A4;
} unk_func_001A4B20_0;

void *HIE_fn_hGetSuperObjectObject(s32);
s32 func_001B84B0(s32);
unk_func_001A4B20_0 *func_00138760(s32);

void func_001A4B20(s32 arg0, s32 arg1) {
    s32 a;
    s32 b;
    unk_func_001A4B20_0 *c;

    a = ((s32 *)HIE_fn_hGetSuperObjectObject(arg0))[2];
    if (a != 0) {
        if ((b = func_001B84B0(a)) != 0) {
            c = func_00138760(b);
            if (c != NULL) {
                c->unk_A4 = arg1;
                if (arg1 == 0) {
                    c->unk_04 &= 0xFFFEFFFF;
                }
            }
        }
    }
}
