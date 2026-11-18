#include "common.h"

typedef struct unk_func_0029DA50_0 {
    struct unk_func_0029DA50_0 *unk_00;
    u32 unk_04;
} unk_func_0029DA50_0;

extern unk_func_0029DA50_0 *(*D_0035F644)(s32);
extern unk_func_0029DA50_0 *D_007B8048[];
extern unk_func_0029DA50_0 *D_007B804C[];
extern unk_func_0029DA50_0 *D_007B8050[];

void *func_0029DA50(s32 arg0) {
    unk_func_0029DA50_0 *temp;
    s32 temp_v1;
    s32 temp2;
    s32 *temp3;

    temp = D_007B804C[0];
    temp_v1 = arg0 + 8;
    arg0 -= temp_v1;
    temp2 = (temp_v1 + 3) & ~3;
    arg0 += temp2;
    if (temp == NULL || temp->unk_04 + temp2 > 0x400) {
        temp = D_0035F644(0x408);
        if (D_007B804C[0] == NULL) {
            D_007B8048[0]->unk_04 = (u32)temp;
        } else {
            D_007B804C[0]->unk_00 = temp;
            D_007B8050[0] = D_007B804C[0];
        }
        D_007B804C[0] = temp;
        temp->unk_04 = 0;
        temp->unk_00 = 0;
    }
    temp3 = (s32 *)((u32)temp + 8 + temp->unk_04);
    temp3[1] = arg0;
    temp->unk_04 += temp2;
    return temp3;
}
