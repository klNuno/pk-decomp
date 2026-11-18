/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_00166900_1 {
    u8 pad_00[8];
    struct unk_func_00166900_1 *unk_08;
} unk_func_00166900_1;

typedef struct unk_func_00166900_0 {
    u8 pad_00[0x68];
    unk_func_00166900_1 *unk_68;
    unk_func_00166900_1 *unk_6C;
} unk_func_00166900_0;

s32 func_00166900(unk_func_00166900_0 *arg0) {
    unk_func_00166900_1 *p = arg0->unk_68;
    s32 n = 1;
    while (p != arg0->unk_6C) {
        p = p->unk_08;
        n++;
    }
    if (p == arg0->unk_6C) {
        return n;
    }
    return 0;
}
