/* profile: o0_p */
#include "common.h"

typedef struct unk_func_00199590_0 {
    struct unk_func_00199590_0 *unk_00;
    u8 pad_04[0xC];
    u8 unk_10;
} unk_func_00199590_0;

unk_func_00199590_0 *func_00199590(unk_func_00199590_0 **arg0, u8 arg1) {
    unk_func_00199590_0 *temp = *arg0;

    if (arg1) {
        while (temp != NULL && temp->unk_10 == 0) {
            temp = temp->unk_00;
        }
    }
    return temp;
}
