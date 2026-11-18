/* profile: opt_300 */
#include "common.h"

typedef struct unk_func_0030B620_0 {
    struct unk_func_0030B620_0 *unk_00;
    struct unk_func_0030B620_0 *unk_04;
    u8 pad_08[4];
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} unk_func_0030B620_0;

void func_002D2BB0();
s32 func_00307CA0(s32);
void func_00308B80(s32);
void func_00308BE0(s32);
unk_func_0030B620_0 *func_0030B6F0();
extern s32 (*D_0036081C)(s32);
extern s32 D_0036082C;
extern unk_func_0030B620_0 *D_00360830;

unk_func_0030B620_0 *func_0030B620(void) {
    unk_func_0030B620_0 *temp;

    temp = func_0030B6F0();
    if (temp != (unk_func_0030B620_0 *)-1) {
        func_00308BE0(D_0036082C);
        switch (temp->unk_10) {
        case 0:
            temp->unk_0C = D_0036081C(temp->unk_14);
            break;
        case 1:
            temp->unk_0C = func_00307CA0(temp->unk_14);
            break;
        }
        if (temp->unk_0C != -1) {
            temp->unk_00 = D_00360830;
            temp->unk_04 = NULL;
            if (D_00360830 != NULL) {
                D_00360830->unk_04 = temp;
            }
            D_00360830 = temp;
        } else {
            func_002D2BB0(temp->unk_14);
            func_002D2BB0(temp);
            temp = (unk_func_0030B620_0 *)-1;
        }
        func_00308B80(D_0036082C);
    }
    return temp;
}
