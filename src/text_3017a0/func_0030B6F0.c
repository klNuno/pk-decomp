/* profile: opt_300 */
#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s8 *unk_14;
} unk_func_0030B6F0_0;

void *func_002D2BC0(s32);
s32 func_0011D3F8(s8 *);
void strcpy();
void func_002D2BB0();
extern s32 D_00360834;

unk_func_0030B6F0_0 *func_0030B6F0(s32 arg0, s8 *arg1) {
    unk_func_0030B6F0_0 *temp_s0;
    s32 len;
    s8 *p;
    s8 c;

    temp_s0 = func_002D2BC0(0x18);
    if (temp_s0 != NULL) {
    len = func_0011D3F8(arg1);
    if (D_00360834 == 1) {
        if (arg1[len - 2] != 0x3B) {
            len += 2;
        }
    }
    temp_s0->unk_14 = func_002D2BC0(len + 1);
    if (temp_s0->unk_14 != NULL) {
        strcpy(temp_s0->unk_14, arg1);
        temp_s0->unk_00 = 0;
        temp_s0->unk_04 = 0;
        temp_s0->unk_0C = -1;
        temp_s0->unk_08 = 1;
        temp_s0->unk_10 = arg0;
        if (D_00360834 == 1) {
            temp_s0->unk_14[len - 2] = 0x3B;
            temp_s0->unk_14[len - 1] = 0x31;
            temp_s0->unk_14[len] = 0;
            for (p = temp_s0->unk_14; (c = *p) != 0; p++) {
                if (c >= 0x61 && c <= 0x7A) {
                    *p -= 0x20;
                }
            }
        }
    } else {
        func_002D2BB0(temp_s0);
        temp_s0 = (unk_func_0030B6F0_0 *)-1;
    }
    }
    return temp_s0;
}
