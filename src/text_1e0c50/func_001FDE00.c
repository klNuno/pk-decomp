/* profile: o0_301 */
#include "common.h"

typedef struct {
    u8 pad_00[0x8];
    s32 unk_08;
} unk_func_001FDE00_0;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_001FDE00_1;

typedef struct {
    u8 pad_00[0xA8];
    s32 unk_A8;
} unk_func_001FDE00_2;

unk_func_001FDE00_0 *HIE_fn_hGetSuperObjectObject(s32);
unk_func_001FDE00_1 *func_001B84B0(s32);
unk_func_001FDE00_2 *func_001387B0(unk_func_001FDE00_1 *);

s32 func_001FDE00(s32 arg0) {
    s32 a;
    unk_func_001FDE00_1 *p;

    if (arg0 == 0) {
        return 0;
    }
    a = HIE_fn_hGetSuperObjectObject(arg0)->unk_08;
    if (a == 0) {
        return 0;
    }
    p = func_001B84B0(a);
    if (p == NULL) {
        return 0;
    }
    if (((p->unk_0C & 4) ? 1 : 0) == 0) {
        return 0;
    }
    return func_001387B0(p)->unk_A8;
}
