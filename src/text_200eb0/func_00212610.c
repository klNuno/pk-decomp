/* profile: o0_301 */
#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0x8];
    s32 unk_0C;
} unk_func_00212610_0;

s32 func_001A2ED0();
void func_001EDBB0();

s32 *func_00212610(s32 arg0, s32 *arg1, unk_func_00212610_0 *arg2) {
    s32 type;

    type = arg1[-2];
    if (type == 0x95) {
        arg2->unk_00 = func_001A2ED0();
        arg2->unk_0C = 6;
        return arg1;
    }
    func_001EDBB0(0x27, 0);
    return arg1;
}
