/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002D6950_0;

void func_002D6D40(unk_func_002D6950_0 **, s32, s32 *);
unk_func_002D6950_0 *func_002CF7C0(s32);

s32 func_002D6950(s32 arg0, s32 arg1) {
    unk_func_002D6950_0 *temp;
    s32 temp2;

    temp2 = 0;
    func_002D6D40(&temp, arg0, &arg1);
    if (temp != func_002CF7C0(arg0)) {
        temp2 = temp->unk_10;
    }
    return temp2;
}
