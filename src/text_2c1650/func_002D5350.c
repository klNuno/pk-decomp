/* profile: opt_300 */
#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} unk_func_002D5350_0;

void func_002D5500(unk_func_002D5350_0 **, s32, s32 *);
unk_func_002D5350_0 *func_002D51B0(s32);

s32 func_002D5350(s32 arg0, s32 arg1) {
    unk_func_002D5350_0 *temp;
    s32 temp2;

    temp2 = 0;
    func_002D5500(&temp, arg0, &arg1);
    if (temp != func_002D51B0(arg0)) {
        temp2 = temp->unk_10;
    }
    return temp2;
}
