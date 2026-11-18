#include "common.h"

typedef struct unk_func_0027AD00_0 {
    s64 unk_00;
    s64 unk_08;
    s32 unk_10;
    s32 unk_14;
} unk_func_0027AD00_0;

extern u8 D_007A8228[];
void func_00279970(void *, unk_func_0027AD00_0 *);

void func_0027AD00(u8 *arg0, s64 arg1, s64 arg2, s32 arg3, s32 arg4) {
    unk_func_0027AD00_0 sp;
    sp.unk_00 = arg1;
    sp.unk_08 = arg2;
    sp.unk_10 = arg3 - *(s32 *)(arg0 + 0x48);
    sp.unk_14 = arg4;
    func_00279970(D_007A8228, &sp);
}
