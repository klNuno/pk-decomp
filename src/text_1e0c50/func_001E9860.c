/* profile: o0 */
#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} unk_func_001E9860_0;

s32 fn_h_StandardGameGetSuperObject();

s32 func_001E9860(s32 *arg0, u8 arg1, unk_func_001E9860_0 **arg2) {
    unk_func_001E9860_0 *temp;

    temp = *arg2;
    arg1 = arg1;
    if (temp != NULL && temp->unk_04 != 0) {
        *arg0 = fn_h_StandardGameGetSuperObject(temp->unk_04);
        return 1;
    }
    *arg0 = 0;
    return 1;
}
