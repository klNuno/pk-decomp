/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002EA9B0_0;

void func_002EAAF0(unk_func_002EA9B0_0 **, u8 *, s32 *);
unk_func_002EA9B0_0 *func_002EA9A0(u8 *);

s32 func_002EA9B0(u8 *arg0, s32 arg1) {
    unk_func_002EA9B0_0 *temp;

    func_002EAAF0(&temp, arg0 + 4, &arg1);
    if (temp == func_002EA9A0(arg0 + 4)) {
        return 0;
    }
    return temp->unk_10;
}
