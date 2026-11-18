#include "common.h"

typedef struct unk_func_0018EAD0_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[4];
    s32 *unk_10;
} unk_func_0018EAD0_0;

unk_func_0018EAD0_0 *malloc();
extern s32 D_0035E4B0[];
extern s32 D_0035E4A0[];

unk_func_0018EAD0_0 *func_0018EAD0(s32 arg0, s32 arg1) {
    unk_func_0018EAD0_0 *temp;

    temp = malloc(0x14);
    if (temp != NULL) {
        temp->unk_10 = D_0035E4B0;
        temp->unk_04 = arg1;
        temp->unk_00 = 0;
        temp->unk_08 = arg0;
        temp->unk_10 = D_0035E4A0;
        temp->unk_00 = 1;
    }
    return temp;
}
