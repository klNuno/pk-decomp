/* profile: opt_300 */
#include "common.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
} unk_AGO2_MEM_FreeFromHandle_0;

typedef struct {
    s32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0C;
} unk_AGO2_MEM_FreeFromHandle_1;

void AGO2_MEM_Shrink(void);
void func_0011B418(char *);
extern char D_0034EAF0[];
extern u32 D_0035F5C4;
extern u32 D_003602BC;
extern unk_AGO2_MEM_FreeFromHandle_1 D_00644CF0[];
extern unk_AGO2_MEM_FreeFromHandle_0 D_00758570[];

void AGO2_MEM_FreeFromHandle(s32 arg0) {
    u32 i;
    unk_AGO2_MEM_FreeFromHandle_1 *temp4;
    u32 temp2;
    u32 temp3;
    u32 temp0;
    u32 temp1;
    u32 j;
    u32 k;

    temp1 = temp0 = 1000;
    for (i = 0; i < D_003602BC && arg0 != D_00644CF0[i].unk_00; i++) {
    }
    if (i == D_003602BC) {
        func_0011B418(D_0034EAF0);
        return;
    }

    temp4 = &D_00644CF0[i];
    temp2 = temp4->unk_08;
    temp3 = temp2 + temp4->unk_04;
    for (j = 0; j < D_0035F5C4; j++) {
        u32 temp5 = D_00758570[j].unk_00;
        if (temp5 == temp3) {
            temp1 = j;
        } else {
            u32 temp6 = D_00758570[j].unk_04;
            if (temp6 == temp2) {
                temp0 = j;
            }
        }
    }
    if (temp1 == 1000 && temp0 == 1000) {
        D_00758570[D_0035F5C4].unk_00 = temp2;
        D_00758570[D_0035F5C4].unk_04 = temp3;
        D_00758570[D_0035F5C4].unk_08 = temp4->unk_04;
        D_0035F5C4++;
        if (D_0035F5C4 == 1000) {
            AGO2_MEM_Shrink();
        }
    } else if (temp1 != 1000 && temp0 != 1000) {
        D_00758570[temp0].unk_04 = D_00758570[temp1].unk_04;
        D_00758570[temp0].unk_08 = D_00758570[temp0].unk_04 - D_00758570[temp0].unk_00;
        for (k = temp1 + 1; k < D_0035F5C4; k++) {
            D_00758570[k - 1].unk_00 = D_00758570[k].unk_00;
            D_00758570[k - 1].unk_04 = D_00758570[k].unk_04;
            D_00758570[k - 1].unk_08 = D_00758570[k].unk_08;
        }
        D_0035F5C4--;
    } else if (temp1 != 1000) {
        D_00758570[temp1].unk_00 = temp2;
        D_00758570[temp1].unk_08 += temp4->unk_04;
    } else {
        D_00758570[temp0].unk_04 = temp3;
        D_00758570[temp0].unk_08 += temp4->unk_04;
    }
    for (j = i + 1; j < D_003602BC; j++) {
        D_00644CF0[j - 1].unk_00 = D_00644CF0[j].unk_00;
        D_00644CF0[j - 1].unk_04 = D_00644CF0[j].unk_04;
        D_00644CF0[j - 1].unk_08 = D_00644CF0[j].unk_08;
    }
    D_003602BC--;
}
