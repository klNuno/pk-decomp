/* profile: o0_301 */
#include "common.h"

typedef struct unk_func_0024C350_0 {
    u8 pad_00[0xC];
    s32 unk_0C;
} unk_func_0024C350_0;

s32 func_0024C280();

s32 func_0024C350(unk_func_0024C350_0 *arg0) {
    s32 temp;

    temp = func_0024C280(arg0->unk_0C);
    while (temp != 0 && temp != arg0->unk_0C) {
        temp = func_0024C280(temp);
    }
    return temp != 0;
}
