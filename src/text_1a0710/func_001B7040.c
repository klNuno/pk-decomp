/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[0x42];
    u8 unk_42;
} unk_func_001B7040_0;

typedef struct {
    u8 pad_00[0x14];
    unk_func_001B7040_0 *unk_14;
} unk_func_001B7040_1;

unk_func_001B7040_1 *HIE_fn_hGetSuperObjectObject();

u8 func_001B7040(s32 arg0) {
    unk_func_001B7040_0 *p;

    p = arg0 ? HIE_fn_hGetSuperObjectObject(arg0)->unk_14 : NULL;
    return p ? p->unk_42 & 0x10 : 0;
}
