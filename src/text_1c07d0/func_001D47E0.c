/* profile: o0 */
#include "common.h"

typedef struct unk_func_001D47E0_0 {
    u8 pad_00[0x122];
    u8 unk_122;
    s8 unk_123;
} unk_func_001D47E0_0;

unk_func_001D47E0_0 **HIE_fn_hGetSuperObjectObject();

void func_001D47E0(s32 arg0) {
    unk_func_001D47E0_0 *temp;

    if (arg0 != 0 && *HIE_fn_hGetSuperObjectObject(arg0) != NULL) {
        temp = *HIE_fn_hGetSuperObjectObject(arg0);
        temp->unk_123++;
        if (temp->unk_123 >= temp->unk_122) {
            temp->unk_123 = 0;
        }
    }
}
