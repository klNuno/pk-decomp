/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_00303210_0;

typedef struct {
    u8 pad_00[0x18];
    unk_func_00303210_0 *unk_18;
} unk_func_00303210_1;

void func_003035F0();
unk_func_00303210_1 *func_00302FE0();

s32 func_00303210(s32 arg0, s32 arg1) {
    unk_func_00303210_1 *temp;

    func_003035F0(&temp, arg0 + 0xC, arg1);
    if (temp == func_00302FE0(arg0 + 0xC)) {
        return 0;
    } else {
        return temp->unk_18->unk_0C;
    }
}
