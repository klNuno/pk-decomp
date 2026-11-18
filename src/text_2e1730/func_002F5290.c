#include "common.h"

typedef struct unk_func_002F5290_0 {
    s32 unk_00;
    s32 unk_04;
} unk_func_002F5290_0;

extern s32 D_003606E0;
extern s8 D_003606E4;

void func_002F5290(unk_func_002F5290_0 *arg0) {
    if (D_003606E4 == 0) {
        D_003606E0 = 1;
        D_003606E4 = 1;
    }
    arg0->unk_00 = arg0->unk_04 = D_003606E0;
    D_003606E0++;
}
