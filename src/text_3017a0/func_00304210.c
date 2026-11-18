#include "common.h"

typedef struct unk_func_00304210_0 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} unk_func_00304210_0;

extern s32 D_0035C728[];
extern s32 D_0035C72C[];

void func_00304210(unk_func_00304210_0 *arg0) {
    arg0->unk_04 = D_0035C728[0];
    arg0->unk_08 = D_0035C72C[0];
    arg0->unk_0C = 0;
    arg0->unk_00 = -1;
}
