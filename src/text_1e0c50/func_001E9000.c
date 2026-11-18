/* profile: o0 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001E9000_0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_001E9000_1;

s32 func_001E9000(unk_func_001E9000_0 *arg0, u8 arg1, unk_func_001E9000_1 *arg2) {
    unk_func_001E9000_0 *p;

    p = arg0;
    arg1 = arg1;
    arg2->unk_00 = p->unk_00;
    arg2->unk_04 = p->unk_04;
    arg2->unk_08 = p->unk_08;
    arg2->unk_0C = 0x15;
    return 1;
}
