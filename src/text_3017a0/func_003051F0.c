/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_003051F0_0 {
    s32 unk_00;
    u8 pad_04[4];
    void (*unk_08)(s32, s32);
} unk_func_003051F0_0;

void func_003051F0(unk_func_003051F0_0 *arg0) {
    s32 temp = arg0->unk_00;
    if (temp != 0) {
        if (arg0->unk_08 != NULL) {
            arg0->unk_08(temp, -1);
        }
    }
}
