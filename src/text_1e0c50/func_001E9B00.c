/* profile: o0 */
#include "common.h"

typedef struct unk_func_001E9B00_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} unk_func_001E9B00_0;

s32 func_001E9B00(unk_func_001E9B00_0 *arg0, u8 arg1, unk_func_001E9B00_0 *arg2) {
    unk_func_001E9B00_0 *temp;

    temp = arg2;
    arg1 = arg1;
    arg0->unk_00 = temp->unk_00;
    arg0->unk_04 = temp->unk_04;
    arg0->unk_08 = temp->unk_08;
    return 1;
}
